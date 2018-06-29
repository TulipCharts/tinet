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


#Set this to the path for Tulip Indicators sample.exe program
set sample_path {../tulipindicators/sample.exe}

set ti_version [exec $sample_path --version]



set out [open tinet/inds.cpp w]
fconfigure $out -translation {auto lf}

puts $out {/*
 * TINet
 * https://tulipindicators.org/
 * Copyright (c) 2010-2018 Tulip Charts LLC
 * Lewis Van Winkle (LV@tulipcharts.org)
 *
 * This file is part of TINet (Tulip Indicators).
 *
 * TINet is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * TINet is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with TINet.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
}

puts $out " /* TI Version: $ti_version */"



set indicators [exec $sample_path --list]
set indicators [split $indicators "\n"]
set idx 0

foreach i $indicators {
    array set ind $i

    puts $out "\n/* $ind(full_name) */"
    puts $out "static indicator^ $ind(name) = gcnew indicator($idx);";

    incr idx
}




close $out
