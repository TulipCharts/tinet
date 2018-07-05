# TINet
# https://tulipindicators.org/
# Copyright (c) 2010-2018 Tulip Charts LLC
# Lewis Van Winkle (LV@tulipcharts.org)
#
# This file is part of TINet (Tulip Indicators).
#
# TINet is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published by the
# Free Software Foundation, either version 3 of the License, or (at your
# option) any later version.
#
# TINet is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
# for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with TINet.  If not, see <http://www.gnu.org/licenses/>.

#This program creates the interface code





puts "Attempting to convert C to something that works with C++ CLI safe."
puts "We're making a monster."





#Set this to the path for Tulip Indicators sample.exe program
set sample_path {../../tulipindicators/sample.exe}

set indicators [exec $sample_path --list]
set indicators [split $indicators "\n"]

set ti_version [exec $sample_path --version]






proc replace {f r} {
    upvar a a
    set a [string map [list $f $r] $a]
}


set in [open tiamalgamation.c r]
set a [read $in]
close $in



set tag "#define __TI_INDICATORS_H__"

set replace "$tag

using namespace System;

#define acos Math::Acos
#define asin Math::Asin
#define atan Math::Atan
#define ceil Math::Ceiling
#define cos Math::Cos
#define cosh Math::Cosh
#define exp Math::Exp
#define fabs Math::Abs
#define floor Math::Floor
#define log Math::Log
#define log10 Math::Log10
#define pow Math::Pow
#define sin Math::Abs
#define sinh Math::Abs
#define sqrt Math::Sqrt
#define tan Math::Abs
#define tanh Math::Abs


#define TI_SKIP_SYSTEM_HEADERS
"

replace $tag $replace





replace {typedef int (*ti_indicator_start_function)(TI_REAL const *options);
typedef int (*ti_indicator_function)(int size,
      TI_REAL const *const *inputs,
      TI_REAL const *options,
      TI_REAL *const *outputs);

typedef struct ti_indicator_info {
    char *name;
    char *full_name;
    ti_indicator_start_function start;
    ti_indicator_function indicator;
    int type, inputs, options, outputs;
    char *input_names[TI_MAXINDPARAMS];
    char *option_names[TI_MAXINDPARAMS];
    char *output_names[TI_MAXINDPARAMS];
} ti_indicator_info;} {

typedef int ti_indicator_start_function;
typedef int ti_indicator_function;
ref class ti_indicator_info { public:
    char *name;
    char *full_name;
    ti_indicator_start_function start;
    ti_indicator_function indicator;
    int type, inputs, options, outputs;
    cli::array<String^> ^input_names;
    cli::array<String^> ^option_names;
    cli::array<String^> ^output_names;
};}

replace {extern ti_indicator_info ti_indicators[];} {} ;#{cli::array<ti_indicator_info^> ^ti_indicators;}
replace {ti_indicator_info *} {ti_indicator_info ^}






regsub -all {assert\(.+?;} $a {} a


replace {ti_buffer *} {ti_buffer ^}





replace {const char*} {String ^}
replace {char *} {String ^}


replace {TI_REAL const *const *inputs} {cli::array<cli::array<double>^> ^inputs}
replace {TI_REAL const *options} {cli::array<double> ^options}
replace {TI_REAL *const *outputs} {cli::array<cli::array<double>^> ^outputs}
replace {const TI_REAL *in} {cli::array<double> ^in}


regsub -line -all {TI_REAL \*output(.+?);} $a {cli::array<double> ^output\1; int output_index = 0;} a
regsub -line -all {const TI_REAL \*([a-z_]+) = inputs} $a {cli::array<double> ^\1 = inputs} a
regsub -line -all {TI_REAL \*([a-z_]+) = outputs(.+?);} $a {cli::array<double> ^\1 = outputs\2; int \1_index = 0;} a

regsub -line -all {\*([a-z_]+)\+\+ =} $a {\1[\1_index++] =} a
regsub -line -all {\*([a-z_]+) ([-=+])} $a {\1[\1_index] \2} a
regsub -line -all {\+\+(middle|output);} $a {++\1_index;} a


regsub {struct ti_indicator_info.*?return 0;.*?\}} $a {} a





replace {typedef struct {
    int size, pushes, index;
    TI_REAL sum;
    TI_REAL vals[1];
} ti_buffer;} {
ref class ti_buffer {
public:
    int size, pushes, index;
    TI_REAL sum;
    cli::array<TI_REAL> ^vals;
};
}


replace {const int s = (int)sizeof(ti_buffer) + (size-1) * (int)sizeof(TI_REAL);
    ti_buffer ^ret = (ti_buffer*)malloc((unsigned int)s);} {ti_buffer ^ret = gcnew ti_buffer;
    ret->vals = gcnew cli::array<TI_REAL>(size);}

replace {free(buffer);} {}













set idx 0
append a "int indicator_run(int index, cli::array<cli::array<double>^>^ inputs, cli::array<double>^ options, cli::array<cli::array<double>^>^ outputs) {\n"
append a "int size = inputs\[0\]->GetLength(0);\n"
append a "switch (index) {\n"
foreach i $indicators {
    array set ind $i
    append a "case $idx: return ti_$ind(name)(size, inputs, options, outputs);\n"
    incr idx
}
append a "default: return TI_INVALID_OPTION;\n"
append a "}\n"
append a "}\n"



set idx 0
append a "int indicator_start(int index, cli::array<double>^ options) {\n"
append a "switch (index) {\n"
foreach i $indicators {
    array set ind $i
    append a "case $idx: return ti_$ind(name)_start(options);\n"
    incr idx
}
append a "default: return TI_INVALID_OPTION;\n"
append a "}\n"
append a "}\n"






append a "
#undef acos
#undef asin
#undef atan
#undef ceil
#undef cos
#undef cosh
#undef exp
#undef fabs
#undef floor
#undef log
#undef log10
#undef pow
#undef sin
#undef sinh
#undef sqrt
#undef tan
#undef tanh
"




set out [open tiamalgamation_monster.c w]
puts $out $a
close $out









set out [open ../tinet/inds.cpp w]
set idx 0
foreach i $indicators {
    array set ind $i

    puts $out "\n/* $ind(full_name) */"
    puts $out "static indicator^ $ind(name) = gcnew indicator($idx, \"$ind(name)\", \"$ind(full_name)\",
    \"[join $ind(inputs) |]\", \"[join $ind(options) |]\", \"[join $ind(outputs) |]\");";

    incr idx
}
close $out
