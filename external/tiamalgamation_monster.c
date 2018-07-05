/*
 * TULIP INDICATORS AMALGAMATION
 * This is all of Tulip Indicators in one file.
 * To get the original sources, go to https://tulipindicators.org
 */


/*
 * Tulip Indicators
 * https://tulipindicators.org/
 * Copyright (c) 2010-2018 Tulip Charts LLC
 * Lewis Van Winkle (LV@tulipcharts.org)
 *
 * This file is part of Tulip Indicators.
 *
 * Tulip Indicators is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * Tulip Indicators is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tulip Indicators.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


/*
 *
 * Version 0.8.2
 * Header Build 1530750383
 *
 */

 /*
  *
  * This file is generated. Do not modify directly.
  *
  */

#ifndef __TI_INDICATORS_H__
#define __TI_INDICATORS_H__

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



#define TI_VERSION "0.8.2"
#define TI_BUILD 1530750383


#ifndef TI_SKIP_SYSTEM_HEADERS
#include <math.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif


String ^ ti_version();
long int ti_build();





#define TI_REAL double

#define TI_INDICATOR_COUNT 103 /* Total number of indicators. */

#define TI_OKAY                    0
#define TI_INVALID_OPTION          1

#define TI_TYPE_OVERLAY            1 /* These have roughly the same range as the input data. */
#define TI_TYPE_INDICATOR          2 /* Everything else (e.g. oscillators). */
#define TI_TYPE_MATH               3 /* These aren't so good for plotting, but are useful with formulas. */
#define TI_TYPE_SIMPLE             4 /* These apply a simple operator (e.g. addition, sin, sqrt). */
#define TI_TYPE_COMPARATIVE        5 /* These are designed to take inputs from different securities. i.e. compare stock A to stock B.*/

#define TI_MAXINDPARAMS 10 /* No indicator will use more than this many inputs, options, or outputs. */




typedef int ti_indicator_start_function;
typedef int ti_indicator_function;
ref class ti_indicator_info { public:
    String ^name;
    String ^full_name;
    ti_indicator_start_function start;
    ti_indicator_function indicator;
    int type, inputs, options, outputs;
    cli::array<String^> ^input_names;
    cli::array<String^> ^option_names;
    cli::array<String^> ^output_names;
};


/*Complete array of all indicators. Last element is 0,0,0,0...*/



/*Searches for an indicator by name. Returns 0 if not found.*/
const ti_indicator_info ^ti_find_indicator(const String ^name);






/*
 *
 *
 *
 *
 *
 *        All indicators below, sorted alphabetically.
 *
 *
 *
 *
 *
 */








/* Vector Absolute Value */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: abs */
int ti_abs_start(cli::array<double> ^options);
int ti_abs(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Arccosine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: acos */
int ti_acos_start(cli::array<double> ^options);
int ti_acos(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Accumulation/Distribution Line */
/* Type: indicator */
/* Input arrays: 4    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: none */
/* Outputs: ad */
int ti_ad_start(cli::array<double> ^options);
int ti_ad(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Addition */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: add */
int ti_add_start(cli::array<double> ^options);
int ti_add(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Accumulation/Distribution Oscillator */
/* Type: indicator */
/* Input arrays: 4    Options: 2    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: short period, long period */
/* Outputs: adosc */
int ti_adosc_start(cli::array<double> ^options);
int ti_adosc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Average Directional Movement Index */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: dx */
int ti_adx_start(cli::array<double> ^options);
int ti_adx(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Average Directional Movement Rating */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: dx */
int ti_adxr_start(cli::array<double> ^options);
int ti_adxr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Awesome Oscillator */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: high, low */
/* Options: none */
/* Outputs: ao */
int ti_ao_start(cli::array<double> ^options);
int ti_ao(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Absolute Price Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 2    Output arrays: 1 */
/* Inputs: real */
/* Options: short period, long period */
/* Outputs: apo */
int ti_apo_start(cli::array<double> ^options);
int ti_apo(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Aroon */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 2 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: aroon_down, aroon_up */
int ti_aroon_start(cli::array<double> ^options);
int ti_aroon(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Aroon Oscillator */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: aroonosc */
int ti_aroonosc_start(cli::array<double> ^options);
int ti_aroonosc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Arcsine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: asin */
int ti_asin_start(cli::array<double> ^options);
int ti_asin(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Arctangent */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: atan */
int ti_atan_start(cli::array<double> ^options);
int ti_atan(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Average True Range */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: atr */
int ti_atr_start(cli::array<double> ^options);
int ti_atr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Average Price */
/* Type: overlay */
/* Input arrays: 4    Options: 0    Output arrays: 1 */
/* Inputs: open, high, low, close */
/* Options: none */
/* Outputs: avgprice */
int ti_avgprice_start(cli::array<double> ^options);
int ti_avgprice(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Bollinger Bands */
/* Type: overlay */
/* Input arrays: 1    Options: 2    Output arrays: 3 */
/* Inputs: real */
/* Options: period, stddev */
/* Outputs: bbands_lower, bbands_middle, bbands_upper */
int ti_bbands_start(cli::array<double> ^options);
int ti_bbands(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Balance of Power */
/* Type: indicator */
/* Input arrays: 4    Options: 0    Output arrays: 1 */
/* Inputs: open, high, low, close */
/* Options: none */
/* Outputs: bop */
int ti_bop_start(cli::array<double> ^options);
int ti_bop(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Commodity Channel Index */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: cci */
int ti_cci_start(cli::array<double> ^options);
int ti_cci(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Ceiling */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: ceil */
int ti_ceil_start(cli::array<double> ^options);
int ti_ceil(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Chande Momentum Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: cmo */
int ti_cmo_start(cli::array<double> ^options);
int ti_cmo(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Cosine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: cos */
int ti_cos_start(cli::array<double> ^options);
int ti_cos(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Hyperbolic Cosine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: cosh */
int ti_cosh_start(cli::array<double> ^options);
int ti_cosh(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Crossany */
/* Type: math */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: crossany */
int ti_crossany_start(cli::array<double> ^options);
int ti_crossany(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Crossover */
/* Type: math */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: crossover */
int ti_crossover_start(cli::array<double> ^options);
int ti_crossover(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Chaikins Volatility */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: cvi */
int ti_cvi_start(cli::array<double> ^options);
int ti_cvi(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Linear Decay */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: decay */
int ti_decay_start(cli::array<double> ^options);
int ti_decay(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Double Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: dema */
int ti_dema_start(cli::array<double> ^options);
int ti_dema(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Directional Indicator */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 2 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: plus_di, minus_di */
int ti_di_start(cli::array<double> ^options);
int ti_di(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Division */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: div */
int ti_div_start(cli::array<double> ^options);
int ti_div(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Directional Movement */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 2 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: plus_dm, minus_dm */
int ti_dm_start(cli::array<double> ^options);
int ti_dm(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Detrended Price Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: dpo */
int ti_dpo_start(cli::array<double> ^options);
int ti_dpo(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Directional Movement Index */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: dx */
int ti_dx_start(cli::array<double> ^options);
int ti_dx(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Exponential Decay */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: edecay */
int ti_edecay_start(cli::array<double> ^options);
int ti_edecay(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: ema */
int ti_ema_start(cli::array<double> ^options);
int ti_ema(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Ease of Movement */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, volume */
/* Options: none */
/* Outputs: emv */
int ti_emv_start(cli::array<double> ^options);
int ti_emv(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Exponential */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: exp */
int ti_exp_start(cli::array<double> ^options);
int ti_exp(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Fisher Transform */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 2 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: fisher, fisher_signal */
int ti_fisher_start(cli::array<double> ^options);
int ti_fisher(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Floor */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: floor */
int ti_floor_start(cli::array<double> ^options);
int ti_floor(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Forecast Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: fosc */
int ti_fosc_start(cli::array<double> ^options);
int ti_fosc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Hull Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: hma */
int ti_hma_start(cli::array<double> ^options);
int ti_hma(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Kaufman Adaptive Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: kama */
int ti_kama_start(cli::array<double> ^options);
int ti_kama(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Klinger Volume Oscillator */
/* Type: indicator */
/* Input arrays: 4    Options: 2    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: short period, long period */
/* Outputs: kvo */
int ti_kvo_start(cli::array<double> ^options);
int ti_kvo(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Lag */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: lag */
int ti_lag_start(cli::array<double> ^options);
int ti_lag(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Linear Regression */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: linreg */
int ti_linreg_start(cli::array<double> ^options);
int ti_linreg(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Linear Regression Intercept */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: linregintercept */
int ti_linregintercept_start(cli::array<double> ^options);
int ti_linregintercept(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Linear Regression Slope */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: linregslope */
int ti_linregslope_start(cli::array<double> ^options);
int ti_linregslope(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Natural Log */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: ln */
int ti_ln_start(cli::array<double> ^options);
int ti_ln(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Base-10 Log */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: log10 */
int ti_log10_start(cli::array<double> ^options);
int ti_log10(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Moving Average Convergence/Divergence */
/* Type: indicator */
/* Input arrays: 1    Options: 3    Output arrays: 3 */
/* Inputs: real */
/* Options: short period, long period, signal period */
/* Outputs: macd, macd_signal, macd_histogram */
int ti_macd_start(cli::array<double> ^options);
int ti_macd(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Market Facilitation Index */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, volume */
/* Options: none */
/* Outputs: marketfi */
int ti_marketfi_start(cli::array<double> ^options);
int ti_marketfi(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Mass Index */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: mass */
int ti_mass_start(cli::array<double> ^options);
int ti_mass(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Maximum In Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: max */
int ti_max_start(cli::array<double> ^options);
int ti_max(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Mean Deviation Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: md */
int ti_md_start(cli::array<double> ^options);
int ti_md(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Median Price */
/* Type: overlay */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: high, low */
/* Options: none */
/* Outputs: medprice */
int ti_medprice_start(cli::array<double> ^options);
int ti_medprice(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Money Flow Index */
/* Type: indicator */
/* Input arrays: 4    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: period */
/* Outputs: mfi */
int ti_mfi_start(cli::array<double> ^options);
int ti_mfi(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Minimum In Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: min */
int ti_min_start(cli::array<double> ^options);
int ti_min(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Momentum */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: mom */
int ti_mom_start(cli::array<double> ^options);
int ti_mom(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Mesa Sine Wave */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 2 */
/* Inputs: real */
/* Options: period */
/* Outputs: msw_sine, msw_lead */
int ti_msw_start(cli::array<double> ^options);
int ti_msw(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Multiplication */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: mul */
int ti_mul_start(cli::array<double> ^options);
int ti_mul(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Normalized Average True Range */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: natr */
int ti_natr_start(cli::array<double> ^options);
int ti_natr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Negative Volume Index */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: none */
/* Outputs: nvi */
int ti_nvi_start(cli::array<double> ^options);
int ti_nvi(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* On Balance Volume */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: none */
/* Outputs: obv */
int ti_obv_start(cli::array<double> ^options);
int ti_obv(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Percentage Price Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 2    Output arrays: 1 */
/* Inputs: real */
/* Options: short period, long period */
/* Outputs: ppo */
int ti_ppo_start(cli::array<double> ^options);
int ti_ppo(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Parabolic SAR */
/* Type: overlay */
/* Input arrays: 2    Options: 2    Output arrays: 1 */
/* Inputs: high, low */
/* Options: acceleration factor step, acceleration factor maximum */
/* Outputs: psar */
int ti_psar_start(cli::array<double> ^options);
int ti_psar(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Positive Volume Index */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: none */
/* Outputs: pvi */
int ti_pvi_start(cli::array<double> ^options);
int ti_pvi(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Qstick */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: open, close */
/* Options: period */
/* Outputs: qstick */
int ti_qstick_start(cli::array<double> ^options);
int ti_qstick(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Rate of Change */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: roc */
int ti_roc_start(cli::array<double> ^options);
int ti_roc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Rate of Change Ratio */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: rocr */
int ti_rocr_start(cli::array<double> ^options);
int ti_rocr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Round */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: round */
int ti_round_start(cli::array<double> ^options);
int ti_round(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Relative Strength Index */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: rsi */
int ti_rsi_start(cli::array<double> ^options);
int ti_rsi(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Sine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: sin */
int ti_sin_start(cli::array<double> ^options);
int ti_sin(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Hyperbolic Sine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: sinh */
int ti_sinh_start(cli::array<double> ^options);
int ti_sinh(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Simple Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: sma */
int ti_sma_start(cli::array<double> ^options);
int ti_sma(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Square Root */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: sqrt */
int ti_sqrt_start(cli::array<double> ^options);
int ti_sqrt(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Standard Deviation Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: stddev */
int ti_stddev_start(cli::array<double> ^options);
int ti_stddev(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Standard Error Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: stderr */
int ti_stderr_start(cli::array<double> ^options);
int ti_stderr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Stochastic Oscillator */
/* Type: indicator */
/* Input arrays: 3    Options: 3    Output arrays: 2 */
/* Inputs: high, low, close */
/* Options: %k period, %k slowing period, %d period */
/* Outputs: stoch_k, stoch_d */
int ti_stoch_start(cli::array<double> ^options);
int ti_stoch(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Subtraction */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: sub */
int ti_sub_start(cli::array<double> ^options);
int ti_sub(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Sum Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: sum */
int ti_sum_start(cli::array<double> ^options);
int ti_sum(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Tangent */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: tan */
int ti_tan_start(cli::array<double> ^options);
int ti_tan(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Hyperbolic Tangent */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: tanh */
int ti_tanh_start(cli::array<double> ^options);
int ti_tanh(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Triple Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: tema */
int ti_tema_start(cli::array<double> ^options);
int ti_tema(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Degree Conversion */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: degrees */
int ti_todeg_start(cli::array<double> ^options);
int ti_todeg(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Radian Conversion */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: radians */
int ti_torad_start(cli::array<double> ^options);
int ti_torad(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* True Range */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: tr */
int ti_tr_start(cli::array<double> ^options);
int ti_tr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Triangular Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: trima */
int ti_trima_start(cli::array<double> ^options);
int ti_trima(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Trix */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: trix */
int ti_trix_start(cli::array<double> ^options);
int ti_trix(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vector Truncate */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: trunc */
int ti_trunc_start(cli::array<double> ^options);
int ti_trunc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Time Series Forecast */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: tsf */
int ti_tsf_start(cli::array<double> ^options);
int ti_tsf(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Typical Price */
/* Type: overlay */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: typprice */
int ti_typprice_start(cli::array<double> ^options);
int ti_typprice(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Ultimate Oscillator */
/* Type: indicator */
/* Input arrays: 3    Options: 3    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: short period, medium period, long period */
/* Outputs: ultosc */
int ti_ultosc_start(cli::array<double> ^options);
int ti_ultosc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Variance Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: var */
int ti_var_start(cli::array<double> ^options);
int ti_var(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Vertical Horizontal Filter */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: vhf */
int ti_vhf_start(cli::array<double> ^options);
int ti_vhf(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Variable Index Dynamic Average */
/* Type: overlay */
/* Input arrays: 1    Options: 3    Output arrays: 1 */
/* Inputs: real */
/* Options: short period, long period, alpha */
/* Outputs: vidya */
int ti_vidya_start(cli::array<double> ^options);
int ti_vidya(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Annualized Historical Volatility */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: volatility */
int ti_volatility_start(cli::array<double> ^options);
int ti_volatility(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Volume Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 2    Output arrays: 1 */
/* Inputs: volume */
/* Options: short period, long period */
/* Outputs: vosc */
int ti_vosc_start(cli::array<double> ^options);
int ti_vosc(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Volume Weighted Moving Average */
/* Type: overlay */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: period */
/* Outputs: vwma */
int ti_vwma_start(cli::array<double> ^options);
int ti_vwma(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Williams Accumulation/Distribution */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: wad */
int ti_wad_start(cli::array<double> ^options);
int ti_wad(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Weighted Close Price */
/* Type: overlay */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: wcprice */
int ti_wcprice_start(cli::array<double> ^options);
int ti_wcprice(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Wilders Smoothing */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: wilders */
int ti_wilders_start(cli::array<double> ^options);
int ti_wilders(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Williams %R */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: willr */
int ti_willr_start(cli::array<double> ^options);
int ti_willr(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Weighted Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: wma */
int ti_wma_start(cli::array<double> ^options);
int ti_wma(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);





/* Zero-Lag Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: zlema */
int ti_zlema_start(cli::array<double> ^options);
int ti_zlema(int size,
      cli::array<cli::array<double>^> ^inputs,
      cli::array<double> ^options,
      cli::array<cli::array<double>^> ^outputs);



#ifdef __cplusplus
}
#endif

#endif /*__TI_INDICATORS_H__*/
/*
 * Tulip Indicators
 * https://tulipindicators.org/
 * Copyright (c) 2010-2017 Tulip Charts LLC
 * Lewis Van Winkle (LV@tulipcharts.org)
 *
 * This file is part of Tulip Indicators.
 *
 * Tulip Indicators is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * Tulip Indicators is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tulip Indicators.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __BUFFER_H__
#define __BUFFER_H__



ref class ti_buffer {
public:
    int size, pushes, index;
    TI_REAL sum;
    cli::array<TI_REAL> ^vals;
};



ti_buffer ^ti_buffer_new(int size);
void ti_buffer_free(ti_buffer ^buffer);

/* Pushes a new value, plus updates sum. */
#define ti_buffer_push(BUFFER, VAL) \
do { \
    if ((BUFFER)->pushes >= (BUFFER)->size) { \
        (BUFFER)->sum -= (BUFFER)->vals[(BUFFER)->index]; \
    } \
\
    (BUFFER)->sum += (VAL); \
    (BUFFER)->vals[(BUFFER)->index] = (VAL); \
    (BUFFER)->pushes += 1; \
    (BUFFER)->index = ((BUFFER)->index + 1); \
    if ((BUFFER)->index >= (BUFFER)->size) (BUFFER)->index = 0; \
} while (0)


/* Pushes a new value, skips updating sum. */
#define ti_buffer_qpush(BUFFER, VAL) \
do { \
    (BUFFER)->vals[(BUFFER)->index] = (VAL); \
    (BUFFER)->index = ((BUFFER)->index + 1); \
    if ((BUFFER)->index >= (BUFFER)->size) (BUFFER)->index = 0; \
} while (0)


/* With get, 0 = last value pushed, -1 = value before last, etc. */
#define ti_buffer_get(BUFFER, VAL) ((BUFFER)->vals[((BUFFER)->index + (BUFFER)->size - 1 + (VAL)) % (BUFFER)->size])


#endif /*__BUFFER_H__*/
/*
 * Tulip Indicators
 * https://tulipindicators.org/
 * Copyright (c) 2010-2017 Tulip Charts LLC
 * Lewis Van Winkle (LV@tulipcharts.org)
 *
 * This file is part of Tulip Indicators.
 *
 * Tulip Indicators is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * Tulip Indicators is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tulip Indicators.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef __MINMAX_H__
#define __MINMAX_H__


#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))


#endif /*__MINMAX_H__*/
int ti_abs_start(cli::array<double> ^options) { (void)options; return 0; } int ti_abs(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (fabs(in1[i])); } return TI_OKAY; }
int ti_acos_start(cli::array<double> ^options) { (void)options; return 0; } int ti_acos(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (acos(in1[i])); } return TI_OKAY; }
int ti_ad_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_ad(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    cli::array<double> ^volume = inputs[3];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL sum = 0;
    int i;
    for (i = 0; i < size; ++i) {
        const TI_REAL hl = (high[i] - low[i]);
        if (hl != 0.0) {
            sum += (close[i] - low[i] - high[i] + close[i]) / hl * volume[i];
        }
        output[i] = sum;
    }
    return TI_OKAY;
}
int ti_add_start(cli::array<double> ^options) { (void)options; return 0; } int ti_add(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; cli::array<double> ^in2 = inputs[1]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (in1[i] + in2[i]); } return TI_OKAY; }
int ti_adosc_start(cli::array<double> ^options) {
    return (int)(options[1])-1;
}
int ti_adosc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    cli::array<double> ^volume = inputs[3];
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    const int start = long_period - 1;
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (size <= ti_adosc_start(options)) return TI_OKAY;
    const TI_REAL short_per = 2 / ((TI_REAL)short_period + 1);
    const TI_REAL long_per = 2 / ((TI_REAL)long_period + 1);
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL sum = 0, short_ema = 0, long_ema = 0;
    int i;
    for (i = 0; i < size; ++i) {
        const TI_REAL hl = (high[i] - low[i]);
        if (hl != 0.0) {
            sum += (close[i] - low[i] - high[i] + close[i]) / hl * volume[i];
        }
        if (i == 0) {
            short_ema = sum;
            long_ema = sum;
        } else {
            short_ema = (sum-short_ema) * short_per + short_ema;
            long_ema = (sum-long_ema) * long_per + long_ema;
        }
        if (i >= start) {
            output[output_index++] = short_ema - long_ema;
        }
    }
    
    return TI_OKAY;
}
int ti_adx_start(cli::array<double> ^options) {
    return ((int)options[0]-1) * 2;
}
int ti_adx(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 2) return TI_INVALID_OPTION;
    if (size <= ti_adx_start(options)) return TI_OKAY;
    const TI_REAL per = ((TI_REAL)period-1) / ((TI_REAL)period);
    const TI_REAL invper = 1.0 / ((TI_REAL)period);
    TI_REAL atr = 0;
    TI_REAL dmup = 0;
    TI_REAL dmdown = 0;
    int i;
    for (i = 1; i < period; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr += truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup += dp;
        dmdown += dm;
    }
    TI_REAL adx = 0.0;
    {
        TI_REAL di_up = dmup / atr;
        TI_REAL di_down = dmdown / atr;
        TI_REAL dm_diff = fabs(di_up - di_down);
        TI_REAL dm_sum = di_up + di_down;
        TI_REAL dx = dm_diff / dm_sum * 100;
        adx += dx;
    }
    for (i = period; i < size; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr = atr * per + truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup = dmup * per + dp;
        dmdown = dmdown * per + dm;
        TI_REAL di_up = dmup / atr;
        TI_REAL di_down = dmdown / atr;
        TI_REAL dm_diff = fabs(di_up - di_down);
        TI_REAL dm_sum = di_up + di_down;
        TI_REAL dx = dm_diff / dm_sum * 100;
        if (i-period < period-2) {
            adx += dx;
        } else if (i-period == period-2) {
            adx += dx;
            output[output_index++] = adx * invper;
        } else {
            adx = adx * per + dx;
            output[output_index++] = adx * invper;
        }
    }
    
    return TI_OKAY;
}
int ti_adxr_start(cli::array<double> ^options) {
    return ((int)options[0]-1) * 3;
}
int ti_adxr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 2) return TI_INVALID_OPTION;
    if (size <= ti_adxr_start(options)) return TI_OKAY;
    const TI_REAL per = ((TI_REAL)period-1) / ((TI_REAL)period);
    const TI_REAL invper = 1.0 / ((TI_REAL)period);
    TI_REAL atr = 0;
    TI_REAL dmup = 0;
    TI_REAL dmdown = 0;
    int i;
    for (i = 1; i < period; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr += truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup += dp;
        dmdown += dm;
    }
    TI_REAL adx = 0.0;
    {
        TI_REAL di_up = dmup / atr;
        TI_REAL di_down = dmdown / atr;
        TI_REAL dm_diff = fabs(di_up - di_down);
        TI_REAL dm_sum = di_up + di_down;
        TI_REAL dx = dm_diff / dm_sum * 100;
        adx += dx;
    }
    ti_buffer ^adxr = ti_buffer_new(period-1);
    const int first_adxr = ti_adxr_start(options);
    for (i = period; i < size; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr = atr * per + truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup = dmup * per + dp;
        dmdown = dmdown * per + dm;
        TI_REAL di_up = dmup / atr;
        TI_REAL di_down = dmdown / atr;
        TI_REAL dm_diff = fabs(di_up - di_down);
        TI_REAL dm_sum = di_up + di_down;
        TI_REAL dx = dm_diff / dm_sum * 100;
        if (i-period < period-2) {
            adx += dx;
        } else if (i-period == period-2) {
            adx += dx;
            ti_buffer_qpush(adxr, adx * invper);
        } else {
            adx = adx * per + dx;
            if (i >= first_adxr) {
                output[output_index++] = 0.5 * (adx * invper + ti_buffer_get(adxr, 1));
            }
            ti_buffer_qpush(adxr, adx * invper);
        }
    }
    ti_buffer_free(adxr);
    
    return TI_OKAY;
}
int ti_ao_start(cli::array<double> ^options) {
    (void)options;
    return 33;
}
int ti_ao(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    const int period = 34;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (size <= ti_ao_start(options)) return TI_OKAY;
    TI_REAL sum34 = 0;
    TI_REAL sum5 = 0;
    const TI_REAL per34 = 1.0 / 34.0;
    const TI_REAL per5 = 1.0 / 5.0;
    int i;
    for (i = 0; i < 34; ++i) {
        TI_REAL hl = 0.5 * (high[i] + low[i]);
        sum34 += hl;
        if (i >= 29) sum5 += hl;
    }
    output[output_index++] = (per5 * sum5 - per34 * sum34);
    for (i = period; i < size; ++i) {
        TI_REAL hl = 0.5 * (high[i] + low[i]);
        sum34 += hl;
        sum5 += hl;
        sum34 -= 0.5 * (high[i-34] + low[i-34]);
        sum5 -= 0.5 * (high[i-5] + low[i-5]);
        output[output_index++] = (per5 * sum5 - per34 * sum34);
    }
    
    return TI_OKAY;
}
int ti_apo_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_apo(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^apo = outputs[0]; int apo_index = 0;
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < 2) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (size <= ti_apo_start(options)) return TI_OKAY;
    TI_REAL short_per = 2 / ((TI_REAL)short_period + 1);
    TI_REAL long_per = 2 / ((TI_REAL)long_period + 1);
    TI_REAL short_ema = input[0];
    TI_REAL long_ema = input[0];
    int i;
    for (i = 1; i < size; ++i) {
        short_ema = (input[i]-short_ema) * short_per + short_ema;
        long_ema = (input[i]-long_ema) * long_per + long_ema;
        const TI_REAL out = short_ema - long_ema;
        apo[apo_index++] = out;
    }
    
    return TI_OKAY;
}
int ti_aroon_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_aroon(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^adown = outputs[0]; int adown_index = 0;
    cli::array<double> ^aup = outputs[1]; int aup_index = 0;
    const int period = (int)options[0];
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_aroon_start(options)) return TI_OKAY;
    const TI_REAL scale = 100.0 / period;
    int trail = 0, maxi = -1, mini = -1;
    TI_REAL max = high[0];
    TI_REAL min = low[0];
    TI_REAL bar;
    int i, j;
    for (i = period; i < size; ++i, ++trail) {
        bar = high[i];
        if (maxi < trail) {
            maxi = trail;
            max = high[maxi];
            j = trail;
            while(++j <= i) {
                bar = high[j];
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        bar = low[i];
        if (mini < trail) {
            mini = trail;
            min = low[mini];
            j = trail;
            while(++j <= i) {
                bar = low[j];
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        adown[adown_index++] = ((TI_REAL)period - (i-mini)) * scale;
        aup[aup_index++] = ((TI_REAL)period - (i-maxi)) * scale;
    }
    
    
    return TI_OKAY;
}
int ti_aroonosc_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_aroonosc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const int period = (int)options[0];
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_aroon_start(options)) return TI_OKAY;
    const TI_REAL scale = 100.0 / period;
    int trail = 0, maxi = -1, mini = -1;
    TI_REAL max = high[0];
    TI_REAL min = low[0];
    int i, j;
    for (i = period; i < size; ++i, ++trail) {
        TI_REAL bar = high[i];
        if (maxi < trail) {
            maxi = trail;
            max = high[maxi];
            j = trail;
            while(++j <= i) {
                bar = high[j];
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        bar = low[i];
        if (mini < trail) {
            mini = trail;
            min = low[mini];
            j = trail;
            while(++j <= i) {
                bar = low[j];
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        output[output_index++] = (maxi-mini) * scale;
    }
    
    return TI_OKAY;
}
int ti_asin_start(cli::array<double> ^options) { (void)options; return 0; } int ti_asin(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (asin(in1[i])); } return TI_OKAY; }
int ti_atan_start(cli::array<double> ^options) { (void)options; return 0; } int ti_atan(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (atan(in1[i])); } return TI_OKAY; }
int ti_atr_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_atr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_atr_start(options)) return TI_OKAY;
    const TI_REAL per = 1.0 / ((TI_REAL)period);
    TI_REAL sum = 0;
    TI_REAL truerange;
    sum += high[0] - low[0];
    int i;
    for (i = 1; i < period; ++i) {
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        sum += truerange;
    }
    TI_REAL val = sum / period;
    output[output_index++] = val;
    for (i = period; i < size; ++i) {
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        val = (truerange-val) * per + val;
        output[output_index++] = val;
    }
    
    return TI_OKAY;
}
int ti_avgprice_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_avgprice(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^open = inputs[0];
    cli::array<double> ^high = inputs[1];
    cli::array<double> ^low = inputs[2];
    cli::array<double> ^close = inputs[3];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 0; i < size; ++i) {
        output[i] = (open[i] + high[i] + low[i] + close[i]) * 0.25;
    }
    return TI_OKAY;
}
int ti_bbands_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_bbands(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^lower = outputs[0]; int lower_index = 0;
    cli::array<double> ^middle = outputs[1]; int middle_index = 0;
    cli::array<double> ^upper = outputs[2]; int upper_index = 0;
    const int period = (int)options[0];
    const TI_REAL stddev = options[1];
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_bbands_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    TI_REAL sum2 = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
    }
    TI_REAL sd = sqrt(sum2 * scale - (sum * scale) * (sum * scale));
    middle[middle_index] = sum * scale;
    lower[lower_index++] = middle[middle_index] - stddev * sd;
    upper[upper_index++] = middle[middle_index] + stddev * sd;
    ++middle_index;
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
        sum -= input[i-period];
        sum2 -= input[i-period] * input[i-period];
        sd = sqrt(sum2 * scale - (sum * scale) * (sum * scale));
        middle[middle_index] = sum * scale;
        upper[upper_index++] = middle[middle_index] + stddev * sd;
        lower[lower_index++] = middle[middle_index] - stddev * sd;
        ++middle_index;
    }
    
    
    
    return TI_OKAY;
}
int ti_bop_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_bop(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^open = inputs[0];
    cli::array<double> ^high = inputs[1];
    cli::array<double> ^low = inputs[2];
    cli::array<double> ^close = inputs[3];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 0; i < size; ++i) {
        TI_REAL hl = high[i] - low[i];
        if (hl <= 0.0) {
            output[i] = 0;
        } else {
            output[i] = (close[i] - open[i]) / hl;
        }
    }
    return TI_OKAY;
}
int ti_cci_start(cli::array<double> ^options) {
    const int period = (int)options[0];
    return (period-1) * 2;
}
int ti_cci(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_cci_start(options)) return TI_OKAY;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    ti_buffer ^sum = ti_buffer_new(period);
    int i, j;
    for (i = 0; i < size; ++i) {
        const TI_REAL today = ((high[(i)] + low[(i)] + close[(i)]) * (1.0/3.0));
        ti_buffer_push(sum, today);
        const TI_REAL avg = sum->sum * scale;
        if (i >= period * 2 - 2) {
            TI_REAL acc = 0;
            for (j = 0; j < period; ++j) {
                acc += fabs(avg - sum->vals[j]);
            }
            TI_REAL cci = acc * scale;
            cci *= .015;
            cci = (today-avg)/cci;
            output[output_index++] = cci;
        }
    }
    ti_buffer_free(sum);
    
    return TI_OKAY;
}
int ti_ceil_start(cli::array<double> ^options) { (void)options; return 0; } int ti_ceil(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (ceil(in1[i])); } return TI_OKAY; }
int ti_cmo_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_cmo(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const int period = (int)options[0];
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_cmo_start(options)) return TI_OKAY;
    TI_REAL up_sum = 0, down_sum = 0;
    int i;
    for (i = 1; i <= period; ++i) {
        up_sum += (input[(i)] > input[(i)-1] ? input[(i)] - input[(i)-1] : 0);
        down_sum += (input[(i)] < input[(i)-1] ? input[(i)-1] - input[(i)] : 0);
    }
    output[output_index++] = 100 * (up_sum - down_sum) / (up_sum + down_sum);
    for (i = period+1; i < size; ++i) {
        up_sum -= (input[(i-period)] > input[(i-period)-1] ? input[(i-period)] - input[(i-period)-1] : 0);
        down_sum -= (input[(i-period)] < input[(i-period)-1] ? input[(i-period)-1] - input[(i-period)] : 0);
        up_sum += (input[(i)] > input[(i)-1] ? input[(i)] - input[(i)-1] : 0);
        down_sum += (input[(i)] < input[(i)-1] ? input[(i)-1] - input[(i)] : 0);
        output[output_index++] = 100 * (up_sum - down_sum) / (up_sum + down_sum);
    }
    
    return TI_OKAY;
}
int ti_cos_start(cli::array<double> ^options) { (void)options; return 0; } int ti_cos(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (cos(in1[i])); } return TI_OKAY; }
int ti_cosh_start(cli::array<double> ^options) { (void)options; return 0; } int ti_cosh(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (cosh(in1[i])); } return TI_OKAY; }
int ti_crossany_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_crossany(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^a = inputs[0];
    cli::array<double> ^b = inputs[1];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 1; i < size; ++i) {
        output[output_index++] = (a[i] > b[i] && a[i-1] <= b[i-1])
                 || (a[i] < b[i] && a[i-1] >= b[i-1]);
    }
    return TI_OKAY;
}
int ti_crossover_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_crossover(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^a = inputs[0];
    cli::array<double> ^b = inputs[1];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 1; i < size; ++i) {
        output[output_index++] = a[i] > b[i] && a[i-1] <= b[i-1];
    }
    return TI_OKAY;
}
int ti_cvi_start(cli::array<double> ^options) {
    const int n = (int)options[0];
    return n*2-1;
}
int ti_cvi(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_cvi_start(options)) return TI_OKAY;
    const TI_REAL per = 2 / ((TI_REAL)period + 1);
    ti_buffer ^lag = ti_buffer_new(period);
    TI_REAL val = high[0]-low[0];
    int i;
    for (i = 1; i < period*2-1; ++i) {
        val = ((high[i]-low[i])-val) * per + val;
        ti_buffer_qpush(lag, val);
    }
    for (i = period*2-1; i < size; ++i) {
        val = ((high[i]-low[i])-val) * per + val;
        const TI_REAL old = lag->vals[lag->index];
        output[output_index++] = 100.0 * (val - old) / old;
        ti_buffer_qpush(lag, val);
    }
    ti_buffer_free(lag);
    
    return TI_OKAY;
}
int ti_decay_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_decay(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const int period = (int)options[0];
    const TI_REAL scale = 1.0 / period;
    output[output_index++] = input[0];
    int i;
    for (i = 1; i < size; ++i) {
        TI_REAL d = output[-1] - scale;
        output[output_index++] = input[i] > d ? input[i] : d;
    }
    return TI_OKAY;
}
int ti_dema_start(cli::array<double> ^options) {
    const int period = (int)options[0];
    return (period-1) * 2;
}
int ti_dema(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_dema_start(options)) return TI_OKAY;
    const TI_REAL per = 2 / ((TI_REAL)period + 1);
    const TI_REAL per1 = 1.0 - per;
    TI_REAL ema = input[0];
    TI_REAL ema2 = ema;
    int i;
    for (i = 0; i < size; ++i) {
        ema = ema * per1 + input[i] * per;
        if (i == period-1) {
            ema2 = ema;
        }
        if (i >= period-1) {
            ema2 = ema2 * per1 + ema * per;
            if (i >= (period-1) * 2) {
                output[output_index] = ema * 2 - ema2;
                ++output_index;
            }
        }
    }
    
    return TI_OKAY;
}
int ti_di_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_di(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^plus_di = outputs[0]; int plus_di_index = 0;
    cli::array<double> ^minus_di = outputs[1]; int minus_di_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_di_start(options)) return TI_OKAY;
    const TI_REAL per = ((TI_REAL)period-1) / ((TI_REAL)period);
    TI_REAL atr = 0;
    TI_REAL dmup = 0;
    TI_REAL dmdown = 0;
    int i;
    for (i = 1; i < period; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr += truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup += dp;
        dmdown += dm;
    }
    plus_di[plus_di_index++] = 100.0 * dmup / atr;
    minus_di[minus_di_index++] = 100.0 * dmdown / atr;
    for (i = period; i < size; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr = atr * per + truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup = dmup * per + dp;
        dmdown = dmdown * per + dm;
        plus_di[plus_di_index++] = 100.0 * dmup / atr;
        minus_di[minus_di_index++] = 100.0 * dmdown / atr;
    }
    
    
    return TI_OKAY;
}
int ti_div_start(cli::array<double> ^options) { (void)options; return 0; } int ti_div(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; cli::array<double> ^in2 = inputs[1]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (in1[i] / in2[i]); } return TI_OKAY; }
int ti_dm_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_dm(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    const int period = (int)options[0];
    cli::array<double> ^plus_dm = outputs[0]; int plus_dm_index = 0;
    cli::array<double> ^minus_dm = outputs[1]; int minus_dm_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_dm_start(options)) return TI_OKAY;
    const TI_REAL per = ((TI_REAL)period-1) / ((TI_REAL)period);
    TI_REAL dmup = 0;
    TI_REAL dmdown = 0;
    int i;
    for (i = 1; i < period; ++i) {
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup += dp;
        dmdown += dm;
    }
    plus_dm[plus_dm_index++] = dmup;
    minus_dm[minus_dm_index++] = dmdown;
    for (i = period; i < size; ++i) {
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup = dmup * per + dp;
        dmdown = dmdown * per + dm;
        plus_dm[plus_dm_index++] = dmup;
        minus_dm[minus_dm_index++] = dmdown;
    }
    
    
    return TI_OKAY;
}
int ti_dpo_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_dpo(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    const int back = period / 2 + 1;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_dpo_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
    }
    output[output_index++] = input[period-1-back] - (sum * scale);
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum -= input[i-period];
        output[output_index++] = input[i-back] - (sum * scale);
    }
    
    return TI_OKAY;
}
int ti_dx_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_dx(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_dx_start(options)) return TI_OKAY;
    const TI_REAL per = ((TI_REAL)period-1) / ((TI_REAL)period);
    TI_REAL atr = 0;
    TI_REAL dmup = 0;
    TI_REAL dmdown = 0;
    int i;
    for (i = 1; i < period; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr += truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup += dp;
        dmdown += dm;
    }
    {
        TI_REAL di_up = dmup / atr;
        TI_REAL di_down = dmdown / atr;
        TI_REAL dm_diff = fabs(di_up - di_down);
        TI_REAL dm_sum = di_up + di_down;
        TI_REAL dx = dm_diff / dm_sum * 100;
        output[output_index++] = dx;
    }
    for (i = period; i < size; ++i) {
        TI_REAL truerange;
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        atr = atr * per + truerange;
        TI_REAL dp, dm;
        do { dp = high[i] - high[i-1]; dm = low[i-1] - low[i]; if (dp < 0) dp = 0; else if (dp > dm) dm = 0; if (dm < 0) dm = 0; else if (dm > dp) dp = 0;} while (0);
        dmup = dmup * per + dp;
        dmdown = dmdown * per + dm;
        TI_REAL di_up = dmup / atr;
        TI_REAL di_down = dmdown / atr;
        TI_REAL dm_diff = fabs(di_up - di_down);
        TI_REAL dm_sum = di_up + di_down;
        TI_REAL dx = dm_diff / dm_sum * 100;
        output[output_index++] = dx;
    }
    
    return TI_OKAY;
}
int ti_edecay_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_edecay(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 - 1.0 / period;
    output[output_index++] = input[0];
    int i;
    for (i = 1; i < size; ++i) {
        TI_REAL d = output[-1] * scale;
        output[output_index++] = input[i] > d ? input[i] : d;
    }
    return TI_OKAY;
}
int ti_ema_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_ema(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_ema_start(options)) return TI_OKAY;
    const TI_REAL per = 2 / ((TI_REAL)period + 1);
    TI_REAL val = input[0];
    output[output_index++] = val;
    int i;
    for (i = 1; i < size; ++i) {
        val = (input[i]-val) * per + val;
        output[output_index++] = val;
    }
    
    return TI_OKAY;
}
int ti_emv_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_emv(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^volume = inputs[2];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (size <= ti_emv_start(options)) return TI_OKAY;
    TI_REAL last = (high[0] + low[0]) * 0.5;
    int i;
    for (i = 1; i < size; ++i) {
        TI_REAL hl = (high[i] + low[i]) * 0.5;
        TI_REAL br = volume[i] / 10000.0 / (high[i] - low[i]);
        output[output_index++] = (hl - last) / br;
        last = hl;
    }
    
    return TI_OKAY;
}
int ti_exp_start(cli::array<double> ^options) { (void)options; return 0; } int ti_exp(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (exp(in1[i])); } return TI_OKAY; }
int ti_fisher_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_fisher(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^fisher = outputs[0]; int fisher_index = 0;
    cli::array<double> ^signal = outputs[1]; int signal_index = 0;
    const int period = (int)options[0];
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_fisher_start(options)) return TI_OKAY;
    int trail = 0, maxi = -1, mini = -1;
    TI_REAL max = (0.5 * (high[(0)] + low[(0)]));
    TI_REAL min = (0.5 * (high[(0)] + low[(0)]));
    TI_REAL val1 = 0.0;
    TI_REAL bar;
    TI_REAL fish = 0.0;
    int i, j;
    for (i = period-1; i < size; ++i, ++trail) {
        bar = (0.5 * (high[(i)] + low[(i)]));
        if (maxi < trail) {
            maxi = trail;
            max = (0.5 * (high[(maxi)] + low[(maxi)]));
            j = trail;
            while(++j <= i) {
                bar = (0.5 * (high[(j)] + low[(j)]));
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        bar = (0.5 * (high[(i)] + low[(i)]));
        if (mini < trail) {
            mini = trail;
            min = (0.5 * (high[(mini)] + low[(mini)]));
            j = trail;
            while(++j <= i) {
                bar = (0.5 * (high[(j)] + low[(j)]));
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        TI_REAL mm = max - min;
        if (mm == 0.0) mm = 0.001;
        val1 = 0.33 * 2.0 * ( ((0.5 * (high[(i)] + low[(i)]))-min) / (mm) - 0.5) + 0.67 * val1;
        if (val1 > 0.99) val1 = .999;
        if (val1 < -0.99) val1 = -.999;
        signal[signal_index++] = fish;
        fish = 0.5 * log((1.0+val1)/(1.0-val1)) + 0.5 * fish;
        fisher[fisher_index++] = fish;
    }
    
    
    return TI_OKAY;
}
int ti_floor_start(cli::array<double> ^options) { (void)options; return 0; } int ti_floor(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (floor(in1[i])); } return TI_OKAY; }
int ti_fosc_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_fosc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_fosc_start(options)) return TI_OKAY;
    do { TI_REAL x = 0; TI_REAL x2 = 0; TI_REAL y = 0; TI_REAL xy = 0; const TI_REAL p = (1.0 / (period)); TI_REAL tsf = 0;; int i; for (i = 0; i < (period)-1; ++i) { x += i+1; x2 += (i+1)*(i+1); xy += (input)[i] * (i+1); y += (input)[i]; } x += (period); x2 += (period) * (period); const TI_REAL bd = 1.0 / ((period) * x2 - x * x); for (i = (period)-1; i < (size); ++i) { xy += (input)[i] * (period); y += (input)[i]; const TI_REAL b = ((period) * xy - x * y) * bd; do { const TI_REAL a = (y - b * x) * p; if (i >= (period)) {output[output_index++] = 100 * (input[i] - tsf) / input[i];} tsf = (a + b * ((period+1))); } while (0); xy -= y; y -= (input)[i-(period)+1]; } } while (0);
    
    return TI_OKAY;
}
int ti_hma_start(cli::array<double> ^options) {
    const int period = (int)options[0];
    const int periodsqrt = (int)(sqrt(period));
    return period + periodsqrt - 2;
}
int ti_hma(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_hma_start(options)) return TI_OKAY;
    const int period2 = (int)(period / 2);
    const int periodsqrt = (int)(sqrt(period));
    const TI_REAL weights = period * (period+1) / 2;
    const TI_REAL weights2 = period2 * (period2+1) / 2;
    const TI_REAL weightssqrt = periodsqrt * (periodsqrt+1) / 2;
    TI_REAL sum = 0;
    TI_REAL weight_sum = 0;
    TI_REAL sum2 = 0;
    TI_REAL weight_sum2 = 0;
    TI_REAL sumsqrt = 0;
    TI_REAL weight_sumsqrt = 0;
    int i;
    for (i = 0; i < period-1; ++i) {
        weight_sum += input[i] * (i+1);
        sum += input[i];
        if (i >= period - period2) {
            weight_sum2 += input[i] * (i+1-(period-period2));
            sum2 += input[i];
        }
    }
    ti_buffer ^buff = ti_buffer_new(periodsqrt);
    for (i = period-1; i < size; ++i) {
        weight_sum += input[i] * period;
        sum += input[i];
        weight_sum2 += input[i] * period2;
        sum2 += input[i];
        const TI_REAL wma = weight_sum / weights;
        const TI_REAL wma2 = weight_sum2 / weights2;
        const TI_REAL diff = 2 * wma2 - wma;
        weight_sumsqrt += diff * periodsqrt;
        sumsqrt += diff;
        ti_buffer_qpush(buff, diff);
        if (i >= (period-1) + (periodsqrt-1)) {
            output[output_index++] = weight_sumsqrt / weightssqrt;
            weight_sumsqrt -= sumsqrt;
            sumsqrt -= ti_buffer_get(buff, 1);
        } else {
            weight_sumsqrt -= sumsqrt;
        }
        weight_sum -= sum;
        sum -= input[i-period+1];
        weight_sum2 -= sum2;
        sum2 -= input[i-period2+1];
    }
    ti_buffer_free(buff);
    
    return TI_OKAY;
}
int ti_kama_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_kama(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_kama_start(options)) return TI_OKAY;
    const TI_REAL short_per = 2 / (2.0 + 1);
    const TI_REAL long_per = 2 / (30.0 + 1);
    TI_REAL sum = 0;
    int i;
    for (i = 1; i < period; ++i) {
        sum += fabs(input[i] - input[i-1]);
    }
    TI_REAL kama = input[period-1];
    output[output_index++] = kama;
    TI_REAL er, sc;
    for (i = period; i < size; ++i) {
        sum += fabs(input[i] - input[i-1]);
        if (i > period) {
            sum -= fabs(input[i-period] - input[i-period-1]);
        }
        if (sum != 0.0) {
            er = fabs(input[i] - input[i-period]) / sum;
        } else {
            er = 1.0;
        }
        sc = pow(er * (short_per - long_per) + long_per, 2);
        kama = kama + sc * (input[i] - kama);
        output[output_index++] = kama;
    }
    
    return TI_OKAY;
}
int ti_kvo_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_kvo(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    cli::array<double> ^volume = inputs[3];
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (size <= ti_kvo_start(options)) return TI_OKAY;
    const TI_REAL short_per = 2 / ((TI_REAL)short_period + 1);
    const TI_REAL long_per = 2 / ((TI_REAL)long_period + 1);
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL cm = 0;
    TI_REAL prev_hlc = high[0] + low[0] + close[0];
    int trend = -1;
    TI_REAL short_ema = 0, long_ema = 0;
    int i;
    for (i = 1; i < size; ++i) {
        const TI_REAL hlc = high[i] + low[i] + close[i];
        const TI_REAL dm = high[i] - low[i];
        if (hlc > prev_hlc && trend != 1) {
            trend = 1;
            cm = high[i-1] - low[i-1];
        } else if (hlc < prev_hlc && trend != 0) {
            trend = 0;
            cm = high[i-1] - low[i-1];
        }
        cm += dm;
        const TI_REAL vf = volume[i] * fabs(dm / cm * 2 - 1) * 100 * (trend ? 1.0 : -1.0);
        if (i == 1) {
            short_ema = vf;
            long_ema = vf;
        } else {
            short_ema = (vf-short_ema) * short_per + short_ema;
            long_ema = (vf-long_ema) * long_per + long_ema;
        }
        output[output_index++] = short_ema - long_ema;
        prev_hlc = hlc;
    }
    
    return TI_OKAY;
}
int ti_lag_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_lag(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 0) return TI_INVALID_OPTION;
    if (size <= ti_lag_start(options)) return TI_OKAY;
    int i;
    for (i = period; i < size; ++i) {
        output[output_index++] = input[i-period];
    }
    
    return TI_OKAY;
}
int ti_linreg_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_linreg(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_linreg_start(options)) return TI_OKAY;
    do { TI_REAL x = 0; TI_REAL x2 = 0; TI_REAL y = 0; TI_REAL xy = 0; const TI_REAL p = (1.0 / (period)); int i; for (i = 0; i < (period)-1; ++i) { x += i+1; x2 += (i+1)*(i+1); xy += (input)[i] * (i+1); y += (input)[i]; } x += (period); x2 += (period) * (period); const TI_REAL bd = 1.0 / ((period) * x2 - x * x); for (i = (period)-1; i < (size); ++i) { xy += (input)[i] * (period); y += (input)[i]; const TI_REAL b = ((period) * xy - x * y) * bd; do { const TI_REAL a = (y - b * x) * p; output[output_index++] = (a + b * ((period))); } while (0); xy -= y; y -= (input)[i-(period)+1]; } } while (0);
    
    return TI_OKAY;
}
int ti_linregintercept_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_linregintercept(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_linregintercept_start(options)) return TI_OKAY;
    do { TI_REAL x = 0; TI_REAL x2 = 0; TI_REAL y = 0; TI_REAL xy = 0; const TI_REAL p = (1.0 / (period)); int i; for (i = 0; i < (period)-1; ++i) { x += i+1; x2 += (i+1)*(i+1); xy += (input)[i] * (i+1); y += (input)[i]; } x += (period); x2 += (period) * (period); const TI_REAL bd = 1.0 / ((period) * x2 - x * x); for (i = (period)-1; i < (size); ++i) { xy += (input)[i] * (period); y += (input)[i]; const TI_REAL b = ((period) * xy - x * y) * bd; do { const TI_REAL a = (y - b * x) * p; output[output_index++] = (a + b * ((1))); } while (0); xy -= y; y -= (input)[i-(period)+1]; } } while (0);
    
    return TI_OKAY;
}
int ti_linregslope_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_linregslope(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_linregslope_start(options)) return TI_OKAY;
    do { TI_REAL x = 0; TI_REAL x2 = 0; TI_REAL y = 0; TI_REAL xy = 0; do{}while(0); int i; for (i = 0; i < (period)-1; ++i) { x += i+1; x2 += (i+1)*(i+1); xy += (input)[i] * (i+1); y += (input)[i]; } x += (period); x2 += (period) * (period); const TI_REAL bd = 1.0 / ((period) * x2 - x * x); for (i = (period)-1; i < (size); ++i) { xy += (input)[i] * (period); y += (input)[i]; const TI_REAL b = ((period) * xy - x * y) * bd; do { output[output_index++] = b; } while (0); xy -= y; y -= (input)[i-(period)+1]; } } while (0);
    
    return TI_OKAY;
}
int ti_ln_start(cli::array<double> ^options) { (void)options; return 0; } int ti_ln(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (log(in1[i])); } return TI_OKAY; }
int ti_log10_start(cli::array<double> ^options) { (void)options; return 0; } int ti_log10(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (log10(in1[i])); } return TI_OKAY; }
int ti_macd_start(cli::array<double> ^options) {
    const int long_period = (int)options[1];
    return (long_period-1);
}
int ti_macd(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^macd = outputs[0]; int macd_index = 0;
    cli::array<double> ^signal = outputs[1]; int signal_index = 0;
    cli::array<double> ^hist = outputs[2]; int hist_index = 0;
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    const int signal_period = (int)options[2];
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < 2) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (signal_period < 1) return TI_INVALID_OPTION;
    if (size <= ti_macd_start(options)) return TI_OKAY;
    TI_REAL short_per = 2 / ((TI_REAL)short_period + 1);
    TI_REAL long_per = 2 / ((TI_REAL)long_period + 1);
    TI_REAL signal_per = 2 / ((TI_REAL)signal_period + 1);
    if (short_period == 12 && long_period == 26) {
        short_per = 0.15;
        long_per = 0.075;
    }
    TI_REAL short_ema = input[0];
    TI_REAL long_ema = input[0];
    TI_REAL signal_ema = 0;
    int i;
    for (i = 1; i < size; ++i) {
        short_ema = (input[i]-short_ema) * short_per + short_ema;
        long_ema = (input[i]-long_ema) * long_per + long_ema;
        const TI_REAL out = short_ema - long_ema;
        if (i == long_period-1) {
            signal_ema = out;
        }
        if (i >= long_period-1) {
            signal_ema = (out-signal_ema) * signal_per + signal_ema;
            macd[macd_index++] = out;
            signal[signal_index++] = signal_ema;
            hist[hist_index++] = out - signal_ema;
        }
    }
    
    
    
    return TI_OKAY;
}
int ti_marketfi_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_marketfi(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^volume = inputs[2];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (size <= ti_marketfi_start(options)) return TI_OKAY;
    int i;
    for (i = 0; i < size; ++i) {
        output[output_index++] = (high[i] - low[i]) / volume[i];
    }
    
    return TI_OKAY;
}
int ti_mass_start(cli::array<double> ^options) {
    int sum_p = (int)options[0]-1;
    return 16 + sum_p;
}
int ti_mass(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_mass_start(options)) return TI_OKAY;
    const TI_REAL per = 2 / (9.0 + 1);
    const TI_REAL per1 = 1.0 - per;
    TI_REAL ema = high[0] - low[0];
    TI_REAL ema2 = ema;
    ti_buffer ^sum = ti_buffer_new(period);
    int i;
    for (i = 0; i < size; ++i) {
        TI_REAL hl = high[i] - low[i];
        ema = ema * per1 + hl * per;
        if (i == 8) {
            ema2 = ema;
        }
        if (i >= 8) {
            ema2 = ema2 * per1 + ema * per;
            if (i >= 16) {
                ti_buffer_push(sum, ema/ema2);
                if (i >= 16 + period - 1) {
                    output[output_index++] = sum->sum;
                }
            }
        }
    }
    ti_buffer_free(sum);
    
    return TI_OKAY;
}
int ti_max_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_max(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_max_start(options)) return TI_OKAY;
    int trail = 0, maxi = -1;
    TI_REAL max = input[0];
    int i, j;
    for (i = period-1; i < size; ++i, ++trail) {
        TI_REAL bar = input[i];
        if (maxi < trail) {
            maxi = trail;
            max = input[maxi];
            j = trail;
            while(++j <= i) {
                bar = input[j];
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        output[output_index++] = max;
    }
    
    return TI_OKAY;
}
int ti_md_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_md(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_md_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    int i, j;
    for (i = 0; i < size; ++i) {
        const TI_REAL today = input[i];
        sum += today;
        if (i >= period) sum -= input[i-period];
        const TI_REAL avg = sum * scale;
        if (i >= period - 1) {
            TI_REAL acc = 0;
            for (j = 0; j < period; ++j) {
                acc += fabs(avg - input[i-j]);
            }
            output[output_index++] = acc * scale;
        }
    }
    
    return TI_OKAY;
}
int ti_medprice_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_medprice(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 0; i < size; ++i) {
        output[i] = (high[i] + low[i]) * 0.5;
    }
    return TI_OKAY;
}
int ti_mfi_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_mfi(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    cli::array<double> ^volume = inputs[3];
    const int period = (int)options[0];
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_mfi_start(options)) return TI_OKAY;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL ytyp = ((high[(0)] + low[(0)] + close[(0)]) * (1.0/3.0));
    int i;
    ti_buffer ^up = ti_buffer_new(period);
    ti_buffer ^down = ti_buffer_new(period);
    for (i = 1; i < size; ++i) {
        const TI_REAL typ = ((high[(i)] + low[(i)] + close[(i)]) * (1.0/3.0));
        const TI_REAL bar = typ * volume[i];
        if (typ > ytyp) {
            ti_buffer_push(up, bar);
            ti_buffer_push(down, 0.0);
        } else if (typ < ytyp) {
            ti_buffer_push(down, bar);
            ti_buffer_push(up, 0.0);
        } else {
            ti_buffer_push(up, 0.0);
            ti_buffer_push(down, 0.0);
        }
        ytyp = typ;
        if (i >= period) {
            output[output_index++] = up->sum / (up->sum + down->sum) * 100.0;
        }
    }
    ti_buffer_free(up);
    ti_buffer_free(down);
    
    return TI_OKAY;
}
int ti_min_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_min(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_min_start(options)) return TI_OKAY;
    int trail = 0, mini = -1;
    TI_REAL min = input[0];
    int i, j;
    for (i = period-1; i < size; ++i, ++trail) {
        TI_REAL bar = input[i];
        if (mini < trail) {
            mini = trail;
            min = input[mini];
            j = trail;
            while(++j <= i) {
                bar = input[j];
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        output[output_index++] = min;
    }
    
    return TI_OKAY;
}
int ti_mom_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_mom(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_mom_start(options)) return TI_OKAY;
    int i;
    for (i = period; i < size; ++i) {
        output[output_index++] = input[i] - input[i-period];
    }
    
    return TI_OKAY;
}
int ti_msw_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_msw(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^sine = outputs[0]; int sine_index = 0;
    cli::array<double> ^lead = outputs[1]; int lead_index = 0;
    const int period = (int)options[0];
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_msw_start(options)) return TI_OKAY;
    const TI_REAL pi = 3.1415926;
    const TI_REAL tpi = 2 * pi;
    TI_REAL weight = 0, phase;
    TI_REAL rp, ip;
    int i, j;
    for (i = period; i < size; ++i) {
        rp = 0;
        ip = 0;
        for (j = 0; j < period; ++j) {
            weight = input[i-j];
            rp = rp + cos(tpi * j / period) * weight;
            ip = ip + sin(tpi * j / period) * weight;
        }
        if (fabs(rp) > .001) {
            phase = atan(ip/rp);
        } else {
            phase = tpi / 2.0 * (ip < 0 ? -1.0 : 1.0);
        }
        if (rp < 0.0) phase += pi;
        phase += pi/2.0;
        if (phase < 0.0) phase += tpi;
        if (phase > tpi) phase -= tpi;
        sine[sine_index++] = sin(phase);
        lead[lead_index++] = sin(phase + pi/4.0);
    }
    
    
    return TI_OKAY;
}
int ti_mul_start(cli::array<double> ^options) { (void)options; return 0; } int ti_mul(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; cli::array<double> ^in2 = inputs[1]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (in1[i] * in2[i]); } return TI_OKAY; }
int ti_natr_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_natr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_natr_start(options)) return TI_OKAY;
    const TI_REAL per = 1.0 / ((TI_REAL)period);
    TI_REAL sum = 0;
    TI_REAL truerange;
    sum += high[0] - low[0];
    int i;
    for (i = 1; i < period; ++i) {
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        sum += truerange;
    }
    TI_REAL val = sum / period;
    output[output_index++] = 100 * (val) / close[period-1];
    for (i = period; i < size; ++i) {
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        val = (truerange-val) * per + val;
        output[output_index++] = 100 * (val) / close[i];
    }
    
    return TI_OKAY;
}
int ti_nvi_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_nvi(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^close = inputs[0];
    cli::array<double> ^volume = inputs[1];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (size <= ti_nvi_start(options)) return TI_OKAY;
    TI_REAL nvi = 1000;
    output[output_index++] = nvi;
    int i;
    for (i = 1; i < size; ++i) {
        if (volume[i] < volume[i-1]) {
            nvi += ((close[i] - close[i-1])/close[i-1]) * nvi;
        }
        output[output_index++] = nvi;
    }
    
    return TI_OKAY;
}
int ti_obv_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_obv(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^close = inputs[0];
    cli::array<double> ^volume = inputs[1];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL sum = 0;
    output[output_index++] = sum;
    TI_REAL prev = close[0];
    int i;
    for (i = 1; i < size; ++i) {
        if (close[i] > prev) {
            sum += volume[i];
        } else if (close[i] < prev) {
            sum -= volume[i];
        } else {
        }
        prev = close[i];
        output[output_index++] = sum;
    }
    return TI_OKAY;
}
int ti_ppo_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_ppo(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^ppo = outputs[0]; int ppo_index = 0;
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < 2) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (size <= ti_ppo_start(options)) return TI_OKAY;
    TI_REAL short_per = 2 / ((TI_REAL)short_period + 1);
    TI_REAL long_per = 2 / ((TI_REAL)long_period + 1);
    TI_REAL short_ema = input[0];
    TI_REAL long_ema = input[0];
    int i;
    for (i = 1; i < size; ++i) {
        short_ema = (input[i]-short_ema) * short_per + short_ema;
        long_ema = (input[i]-long_ema) * long_per + long_ema;
        const TI_REAL out = 100.0 * (short_ema - long_ema) / long_ema;
        ppo[ppo_index++] = out;
    }
    
    return TI_OKAY;
}
int ti_psar_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_psar(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    const TI_REAL accel_step = options[0];
    const TI_REAL accel_max = options[1];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (accel_step <= 0) return TI_INVALID_OPTION;
    if (accel_max <= accel_step) return TI_INVALID_OPTION;
    if (size < 2) return TI_OKAY;
    int lng;
    if (high[0] + low[0] <= high[1] + low[1])
        lng = 1;
    else
        lng = 0;
    TI_REAL sar, extreme;
    if (lng) {
        extreme = high[0];
        sar = low[0];
    } else {
        extreme = low[0];
        sar = high[0];
    }
    TI_REAL accel = accel_step;
    int i;
    for (i = 1; i < size; ++i) {
        sar = (extreme - sar) * accel + sar;
        if (lng) {
            if (i >= 2 && (sar > low[i-2])) sar = low[i-2];
            if ((sar > low[i-1])) sar = low[i-1];
            if (accel < accel_max && high[i] > extreme) {
                accel += accel_step;
                if (accel > accel_max) accel = accel_max;
            }
            if (high[i] > extreme) extreme = high[i];
        } else {
            if (i >= 2 && (sar < high[i-2])) sar = high[i-2];
            if ((sar < high[i-1])) sar = high[i-1];
            if (accel < accel_max && low[i] < extreme) {
                accel += accel_step;
                if (accel > accel_max) accel = accel_max;
            }
            if (low[i] < extreme) extreme = low[i];
        }
        if ((lng && low[i] < sar) || (!lng && high[i] > sar)) {
            accel = accel_step;
            sar = extreme;
            lng = !lng;
            if (!lng) extreme = low[i];
            else extreme = high[i];
        }
        output[output_index++] = sar;
    }
    
    return TI_OKAY;
}
int ti_pvi_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_pvi(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^close = inputs[0];
    cli::array<double> ^volume = inputs[1];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (size <= ti_pvi_start(options)) return TI_OKAY;
    TI_REAL pvi = 1000;
    output[output_index++] = pvi;
    int i;
    for (i = 1; i < size; ++i) {
        if (volume[i] > volume[i-1]) {
            pvi += ((close[i] - close[i-1])/close[i-1]) * pvi;
        }
        output[output_index++] = pvi;
    }
    
    return TI_OKAY;
}
int ti_qstick_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_qstick(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^open = inputs[0];
    cli::array<double> ^close = inputs[1];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const int period = (int)options[0];
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_qstick_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += close[i] - open[i];
    }
    output[output_index++] = sum * scale;
    for (i = period; i < size; ++i) {
        sum += close[i] - open[i];
        sum -= close[i-period] - open[i-period];
        output[output_index++] = sum * scale;
    }
    
    return TI_OKAY;
}
int ti_roc_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_roc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_roc_start(options)) return TI_OKAY;
    int i;
    for (i = period; i < size; ++i) {
        output[output_index++] = (input[i] - input[i-period]) / input[i-period];
    }
    
    return TI_OKAY;
}
int ti_rocr_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_rocr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_rocr_start(options)) return TI_OKAY;
    int i;
    for (i = period; i < size; ++i) {
        output[output_index++] = input[i] / input[i-period];
    }
    
    return TI_OKAY;
}
int ti_round_start(cli::array<double> ^options) { (void)options; return 0; } int ti_round(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (floor(in1[i] + 0.5)); } return TI_OKAY; }
int ti_rsi_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_rsi(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL per = 1.0 / ((TI_REAL)period);
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_rsi_start(options)) return TI_OKAY;
    TI_REAL smooth_up = 0, smooth_down = 0;
    int i;
    for (i = 1; i <= period; ++i) {
        const TI_REAL upward = input[i] > input[i-1] ? input[i] - input[i-1] : 0;
        const TI_REAL downward = input[i] < input[i-1] ? input[i-1] - input[i] : 0;
        smooth_up += upward;
        smooth_down += downward;
    }
    smooth_up /= period;
    smooth_down /= period;
    output[output_index++] = 100.0 * (smooth_up / (smooth_up + smooth_down));
    for (i = period+1; i < size; ++i) {
        const TI_REAL upward = input[i] > input[i-1] ? input[i] - input[i-1] : 0;
        const TI_REAL downward = input[i] < input[i-1] ? input[i-1] - input[i] : 0;
        smooth_up = (upward-smooth_up) * per + smooth_up;
        smooth_down = (downward-smooth_down) * per + smooth_down;
        output[output_index++] = 100.0 * (smooth_up / (smooth_up + smooth_down));
    }
    
    return TI_OKAY;
}
int ti_sin_start(cli::array<double> ^options) { (void)options; return 0; } int ti_sin(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (sin(in1[i])); } return TI_OKAY; }
int ti_sinh_start(cli::array<double> ^options) { (void)options; return 0; } int ti_sinh(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (sinh(in1[i])); } return TI_OKAY; }
int ti_sma_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_sma(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_sma_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
    }
    output[output_index++] = sum * scale;
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum -= input[i-period];
        output[output_index++] = sum * scale;
    }
    
    return TI_OKAY;
}
int ti_sqrt_start(cli::array<double> ^options) { (void)options; return 0; } int ti_sqrt(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (sqrt(in1[i])); } return TI_OKAY; }
int ti_stddev_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_stddev(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_stddev_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    TI_REAL sum2 = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
    }
    {
        TI_REAL s2s2 = (sum2 * scale - (sum * scale) * (sum * scale));
        if (s2s2 > 0.0) s2s2 = sqrt(s2s2);
        output[output_index++] = s2s2;
    }
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
        sum -= input[i-period];
        sum2 -= input[i-period] * input[i-period];
        TI_REAL s2s2 = (sum2 * scale - (sum * scale) * (sum * scale));
        if (s2s2 > 0.0) s2s2 = sqrt(s2s2);
        output[output_index++] = s2s2;
    }
    
    return TI_OKAY;
}
int ti_stderr_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_stderr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_stderr_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    TI_REAL sum2 = 0;
    const TI_REAL mul = 1.0 / sqrt(period);
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
    }
    {
        TI_REAL s2s2 = (sum2 * scale - (sum * scale) * (sum * scale));
        if (s2s2 > 0.0) s2s2 = sqrt(s2s2);
        output[output_index++] = mul * s2s2;
    }
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
        sum -= input[i-period];
        sum2 -= input[i-period] * input[i-period];
        TI_REAL s2s2 = (sum2 * scale - (sum * scale) * (sum * scale));
        if (s2s2 > 0.0) s2s2 = sqrt(s2s2);
        output[output_index++] = mul * s2s2;
    }
    
    return TI_OKAY;
}
int ti_stoch_start(cli::array<double> ^options) {
    const int kperiod = (int)options[0];
    const int kslow = (int)options[1];
    const int dperiod = (int)options[2];
    return kperiod + kslow + dperiod - 3;
}
int ti_stoch(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int kperiod = (int)options[0];
    const int kslow = (int)options[1];
    const int dperiod = (int)options[2];
    const TI_REAL kper = 1.0 / kslow;
    const TI_REAL dper = 1.0 / dperiod;
    cli::array<double> ^stoch = outputs[0]; int stoch_index = 0;
    cli::array<double> ^stoch_ma = outputs[1]; int stoch_ma_index = 0;
    if (kperiod < 1) return TI_INVALID_OPTION;
    if (kslow < 1) return TI_INVALID_OPTION;
    if (dperiod < 1) return TI_INVALID_OPTION;
    if (size <= ti_stoch_start(options)) return TI_OKAY;
    int trail = 0, maxi = -1, mini = -1;
    TI_REAL max = high[0];
    TI_REAL min = low[0];
    TI_REAL bar;
    ti_buffer ^k_sum = ti_buffer_new(kslow);
    ti_buffer ^d_sum = ti_buffer_new(dperiod);
    int i, j;
    for (i = 0; i < size; ++i) {
        if (i >= kperiod) ++trail;
        bar = high[i];
        if (maxi < trail) {
            maxi = trail;
            max = high[maxi];
            j = trail;
            while(++j <= i) {
                bar = high[j];
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        bar = low[i];
        if (mini < trail) {
            mini = trail;
            min = low[mini];
            j = trail;
            while(++j <= i) {
                bar = low[j];
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        const TI_REAL kdiff = (max - min);
        const TI_REAL kfast = kdiff == 0.0 ? 0.0 : 100 * ((close[i] - min) / kdiff);
        ti_buffer_push(k_sum, kfast);
        if (i >= kperiod-1 + kslow-1) {
            const TI_REAL k = k_sum->sum * kper;
            ti_buffer_push(d_sum, k);
            if (i >= kperiod-1 + kslow-1 + dperiod-1) {
                stoch[stoch_index++] = k;
                stoch_ma[stoch_ma_index++] = d_sum->sum * dper;
            }
        }
    }
    ti_buffer_free(k_sum);
    ti_buffer_free(d_sum);
    
    
    return TI_OKAY;
}
int ti_sub_start(cli::array<double> ^options) { (void)options; return 0; } int ti_sub(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; cli::array<double> ^in2 = inputs[1]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (in1[i] - in2[i]); } return TI_OKAY; }
int ti_sum_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_sum(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_sum_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
    }
    output[output_index++] = sum;
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum -= input[i-period];
        output[output_index++] = sum;
    }
    
    return TI_OKAY;
}
int ti_tan_start(cli::array<double> ^options) { (void)options; return 0; } int ti_tan(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (tan(in1[i])); } return TI_OKAY; }
int ti_tanh_start(cli::array<double> ^options) { (void)options; return 0; } int ti_tanh(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = (tanh(in1[i])); } return TI_OKAY; }
int ti_tema_start(cli::array<double> ^options) {
    const int period = (int)options[0];
    return (period-1) * 3;
}
int ti_tema(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_tema_start(options)) return TI_OKAY;
    const TI_REAL per = 2 / ((TI_REAL)period + 1);
    const TI_REAL per1 = 1.0 - per;
    TI_REAL ema = input[0];
    TI_REAL ema2 = 0;
    TI_REAL ema3 = 0;
    int i;
    for (i = 0; i < size; ++i) {
        ema = ema * per1 + input[i] * per;
        if (i == period-1) {
            ema2 = ema;
        }
        if (i >= period-1) {
            ema2 = ema2 * per1 + ema * per;
            if (i == (period-1) * 2) {
                ema3 = ema2;
            }
            if (i >= (period-1) * 2) {
                ema3 = ema3 * per1 + ema2 * per;
                if (i >= (period-1) * 3) {
                    output[output_index] = 3 * ema - 3 * ema2 + ema3;
                    ++output_index;
                }
            }
        }
    }
    
    return TI_OKAY;
}
int ti_todeg_start(cli::array<double> ^options) { (void)options; return 0; } int ti_todeg(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = ((in1[i] * (180.0 / 3.14159265358979323846))); } return TI_OKAY; }
int ti_torad_start(cli::array<double> ^options) { (void)options; return 0; } int ti_torad(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = ((in1[i] * (3.14159265358979323846 / 180.0))); } return TI_OKAY; }
int ti_tr_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_tr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL truerange;
    output[0] = high[0] - low[0];
    int i;
    for (i = 1; i < size; ++i) {
        do{ const TI_REAL l = low[i]; const TI_REAL h = high[i]; const TI_REAL c = close[i-1]; const TI_REAL ych = fabs(h - c); const TI_REAL ycl = fabs(l - c); TI_REAL v = h - l; if (ych > v) v = ych; if (ycl > v) v = ycl; truerange = v;}while(0);
        output[i] = truerange;
    }
    return TI_OKAY;
}
int ti_trima_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_trima(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_trima_start(options)) return TI_OKAY;
    if (period <= 2) return ti_sma(size, inputs, options, outputs);
    TI_REAL weights = 1 / (TI_REAL) ((period%2) ?
        ((period/2+1) * (period/2+1)):
        ((period/2+1) * (period/2)));
    TI_REAL weight_sum = 0;
    TI_REAL lead_sum = 0;
    TI_REAL trail_sum = 0;
    const int lead_period = period%2 ? period/2 : period/2-1;
    const int trail_period = lead_period + 1;
    int i, w = 1;
    for (i = 0; i < period-1; ++i) {
        weight_sum += input[i] * w;
        if (i+1 > period-lead_period) lead_sum += input[i];
        if (i+1 <= trail_period) trail_sum += input[i];
        if (i+1 < trail_period) ++w;
        if (i+1 >= period-lead_period) --w;
    }
    int lsi = (period-1)-lead_period+1;
    int tsi1 = (period-1)-period+1+trail_period;
    int tsi2 = (period-1)-period+1;
    for (i = period-1; i < size; ++i) {
        weight_sum += input[i];
        output[output_index++] = weight_sum * weights;
        lead_sum += input[i];
        weight_sum += lead_sum;
        weight_sum -= trail_sum;
        lead_sum -= input[lsi++];
        trail_sum += input[tsi1++];
        trail_sum -= input[tsi2++];
    }
    
    return TI_OKAY;
}
int ti_trix_start(cli::array<double> ^options) {
    const int period = (int)options[0];
    return ((period-1)*3)+1;
}
int ti_trix(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_trix_start(options)) return TI_OKAY;
    const int start = (period*3)-2;
    
    const TI_REAL per = 2 / ((TI_REAL)period + 1);
    TI_REAL ema1 = input[0];
    TI_REAL ema2 = 0, ema3 = 0;
    int i;
    for (i = 1; i < start; ++i) {
        ema1 = (input[i]-ema1) * per + ema1;
        if (i == period-1) {
            ema2 = ema1;
        } else if (i > period-1) {
            ema2 = (ema1-ema2) * per + ema2;
            if (i == period * 2 - 2) {
                ema3 = ema2;
            } else if (i > period * 2 - 2) {
                ema3 = (ema2-ema3) * per + ema3;
            }
        }
    }
    for (i = start; i < size; ++i) {
        ema1 = (input[i]-ema1) * per + ema1;
        ema2 = (ema1-ema2) * per + ema2;
        const TI_REAL last = ema3;
        ema3 = (ema2-ema3) * per + ema3;
        output[output_index++] = (ema3-last)/ema3 * 100.0;
    }
    
    return TI_OKAY;
}
int ti_trunc_start(cli::array<double> ^options) { (void)options; return 0; } int ti_trunc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) { cli::array<double> ^in1 = inputs[0]; (void)options; cli::array<double> ^output = outputs[0]; int output_index = 0; int i; for (i = 0; i < size; ++i) { output[i] = ((int)(in1[i])); } return TI_OKAY; }
int ti_tsf_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_tsf(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_tsf_start(options)) return TI_OKAY;
    do { TI_REAL x = 0; TI_REAL x2 = 0; TI_REAL y = 0; TI_REAL xy = 0; const TI_REAL p = (1.0 / (period)); int i; for (i = 0; i < (period)-1; ++i) { x += i+1; x2 += (i+1)*(i+1); xy += (input)[i] * (i+1); y += (input)[i]; } x += (period); x2 += (period) * (period); const TI_REAL bd = 1.0 / ((period) * x2 - x * x); for (i = (period)-1; i < (size); ++i) { xy += (input)[i] * (period); y += (input)[i]; const TI_REAL b = ((period) * xy - x * y) * bd; do { const TI_REAL a = (y - b * x) * p; output[output_index++] = (a + b * ((period+1))); } while (0); xy -= y; y -= (input)[i-(period)+1]; } } while (0);
    
    return TI_OKAY;
}
int ti_typprice_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_typprice(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 0; i < size; ++i) {
        output[i] = (high[i] + low[i] + close[i]) * (1.0/3.0);
    }
    return TI_OKAY;
}
int ti_ultosc_start(cli::array<double> ^options) {
    return (int)options[2];
}
int ti_ultosc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int short_period = (int)options[0];
    const int medium_period = (int)options[1];
    const int long_period = (int)options[2];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (short_period < 1) return TI_INVALID_OPTION;
    if (medium_period < short_period) return TI_INVALID_OPTION;
    if (long_period < medium_period) return TI_INVALID_OPTION;
    if (size <= ti_ultosc_start(options)) return TI_OKAY;
    ti_buffer ^bp_buf = ti_buffer_new(long_period);
    ti_buffer ^r_buf = ti_buffer_new(long_period);
    TI_REAL bp_short_sum = 0, bp_medium_sum = 0;
    TI_REAL r_short_sum = 0, r_medium_sum = 0;
    int i;
    for (i = 1; i < size; ++i) {
        const TI_REAL true_low = MIN(low[i], close[i-1]);
        const TI_REAL true_high = MAX(high[i], close[i-1]);
        const TI_REAL bp = close[i] - true_low;
        const TI_REAL r = true_high - true_low;
        bp_short_sum += bp;
        bp_medium_sum += bp;
        r_short_sum += r;
        r_medium_sum += r;
        ti_buffer_push(bp_buf, bp);
        ti_buffer_push(r_buf, r);
        if (i > short_period) {
            int short_index = bp_buf->index - short_period - 1;
            if (short_index < 0) short_index += long_period;
            bp_short_sum -= bp_buf->vals[short_index];
            r_short_sum -= r_buf->vals[short_index];
            if (i > medium_period) {
                int medium_index = bp_buf->index - medium_period - 1;
                if (medium_index < 0) medium_index += long_period;
                bp_medium_sum -= bp_buf->vals[medium_index];
                r_medium_sum -= r_buf->vals[medium_index];
            }
        }
        if (i >= long_period) {
            const TI_REAL first = 4 * bp_short_sum / r_short_sum;
            const TI_REAL second = 2 * bp_medium_sum / r_medium_sum;
            const TI_REAL third = 1 * bp_buf->sum / r_buf->sum;
            const TI_REAL ult = (first + second + third) * 100.0 / 7.0;
            output[output_index++] = ult;
        }
    }
    ti_buffer_free(bp_buf);
    ti_buffer_free(r_buf);
    
    return TI_OKAY;
}
int ti_var_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_var(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL scale = 1.0 / period;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_var_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    TI_REAL sum2 = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
    }
    output[output_index++] = sum2 * scale - (sum * scale) * (sum * scale);
    for (i = period; i < size; ++i) {
        sum += input[i];
        sum2 += input[i] * input[i];
        sum -= input[i-period];
        sum2 -= input[i-period] * input[i-period];
        output[output_index++] = sum2 * scale - (sum * scale) * (sum * scale);
    }
    
    return TI_OKAY;
}
int ti_vhf_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_vhf(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^in = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_vhf_start(options)) return TI_OKAY;
    int trail = 1, maxi = -1, mini = -1;
    TI_REAL max = in[0], min = in[0];
    TI_REAL bar;
    TI_REAL sum = 0;
    int i, j;
    TI_REAL yc = in[0];
    TI_REAL c;
    for (i = 1; i < period; ++i) {
        c = in[i];
        sum += fabs(c - yc);
        yc = c;
    }
    for (i = period; i < size; ++i, ++trail) {
        c = in[i];
        sum += fabs(c - yc);
        yc = c;
        if (i > period) {
            sum -= fabs(in[i-period] - in[i-period-1]);
        }
        bar = c;
        if (maxi < trail) {
            maxi = trail;
            max = in[maxi];
            j = trail;
            while(++j <= i) {
                bar = in[j];
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        bar = c;
        if (mini < trail) {
            mini = trail;
            min = in[mini];
            j = trail;
            while(++j <= i) {
                bar = in[j];
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        output[output_index++] = fabs(max - min) / sum;
    }
    
    return TI_OKAY;
}
int ti_vidya_start(cli::array<double> ^options) {
    return ((int)(options[1])) - 2;
}
int ti_vidya(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    const TI_REAL alpha = options[2];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const TI_REAL short_div = 1.0 / short_period;
    const TI_REAL long_div = 1.0 / long_period;
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (long_period < 2) return TI_INVALID_OPTION;
    if (alpha < 0.0 || alpha > 1.0) return TI_INVALID_OPTION;
    if (size <= ti_vidya_start(options)) return TI_OKAY;
    TI_REAL short_sum = 0;
    TI_REAL short_sum2 = 0;
    TI_REAL long_sum = 0;
    TI_REAL long_sum2 = 0;
    int i;
    for (i = 0; i < long_period; ++i) {
        long_sum += input[i];
        long_sum2 += input[i] * input[i];
        if (i >= long_period - short_period) {
            short_sum += input[i];
            short_sum2 += input[i] * input[i];
        }
    }
    TI_REAL val = input[long_period-2];
    output[output_index++] = val;
    if (long_period - 1 < size) {
        TI_REAL short_stddev = sqrt(short_sum2 * short_div - (short_sum * short_div) * (short_sum * short_div));
        TI_REAL long_stddev = sqrt(long_sum2 * long_div - (long_sum * long_div) * (long_sum * long_div));
        TI_REAL k = short_stddev / long_stddev;
        if (k != k) k = 0;
        k *= alpha;
        val = (input[long_period-1]-val) * k + val;
        output[output_index++] = val;
    }
    for (i = long_period; i < size; ++i) {
        long_sum += input[i];
        long_sum2 += input[i] * input[i];
        short_sum += input[i];
        short_sum2 += input[i] * input[i];
        long_sum -= input[i-long_period];
        long_sum2 -= input[i-long_period] * input[i-long_period];
        short_sum -= input[i-short_period];
        short_sum2 -= input[i-short_period] * input[i-short_period];
        {
            TI_REAL short_stddev = sqrt(short_sum2 * short_div - (short_sum * short_div) * (short_sum * short_div));
            TI_REAL long_stddev = sqrt(long_sum2 * long_div - (long_sum * long_div) * (long_sum * long_div));
            TI_REAL k = short_stddev / long_stddev;
            if (k != k) k = 0;
            k *= alpha;
            val = (input[i]-val) * k + val;
            output[output_index++] = val;
        }
    }
    
    return TI_OKAY;
}
int ti_volatility_start(cli::array<double> ^options) {
    return (int)options[0];
}
int ti_volatility(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const int period = (int)options[0];
    const TI_REAL scale = 1.0 / period;
    const TI_REAL annual = sqrt(252);
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_volatility_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    TI_REAL sum2 = 0;
    int i;
    for (i = 1; i <= period; ++i) {
        const TI_REAL c = (input[i]/input[i-1]-1.0);
        sum += c;
        sum2 += c * c;
    }
    output[output_index++] = sqrt(sum2 * scale - (sum * scale) * (sum * scale)) * annual;
    for (i = period+1; i < size; ++i) {
        const TI_REAL c = (input[i]/input[i-1]-1.0);
        sum += c;
        sum2 += c * c;
        const TI_REAL cp = (input[i-period]/input[i-period-1]-1.0);
        sum -= cp;
        sum2 -= cp * cp;
        output[output_index++] = sqrt(sum2 * scale - (sum * scale) * (sum * scale)) * annual;
    }
    
    return TI_OKAY;
}
int ti_vosc_start(cli::array<double> ^options) {
    return (int)options[1]-1;
}
int ti_vosc(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    const int short_period = (int)options[0];
    const int long_period = (int)options[1];
    const TI_REAL short_div = 1.0 / short_period;
    const TI_REAL long_div = 1.0 / long_period;
    if (short_period < 1) return TI_INVALID_OPTION;
    if (long_period < short_period) return TI_INVALID_OPTION;
    if (size <= ti_vosc_start(options)) return TI_OKAY;
    TI_REAL short_sum = 0;
    TI_REAL long_sum = 0;
    int i;
    for (i = 0; i < long_period; ++i) {
        if (i >= (long_period - short_period)) {
            short_sum += input[i];
        }
        long_sum += input[i];
    }
    {
        const TI_REAL savg = short_sum * short_div;
        const TI_REAL lavg = long_sum * long_div;
        output[output_index++] = 100.0 * (savg - lavg) / lavg;
    }
    for (i = long_period; i < size; ++i) {
        short_sum += input[i];
        short_sum -= input[i-short_period];
        long_sum += input[i];
        long_sum -= input[i-long_period];
        const TI_REAL savg = short_sum * short_div;
        const TI_REAL lavg = long_sum * long_div;
        output[output_index++] = 100.0 * (savg - lavg) / lavg;
    }
    
    return TI_OKAY;
}
int ti_vwma_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_vwma(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    cli::array<double> ^volume = inputs[1];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_vwma_start(options)) return TI_OKAY;
    TI_REAL sum = 0;
    TI_REAL vsum = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i] * volume[i];
        vsum += volume[i];
    }
    output[output_index++] = sum / vsum;
    for (i = period; i < size; ++i) {
        sum += input[i] * volume[i];
        sum -= input[i-period] * volume[i-period];
        vsum += volume[i];
        vsum -= volume[i-period];
        output[output_index++] = sum / vsum;
    }
    
    return TI_OKAY;
}
int ti_wad_start(cli::array<double> ^options) {
    (void)options;
    return 1;
}
int ti_wad(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    (void)options;
    if (size <= ti_wad_start(options)) return TI_OKAY;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    TI_REAL sum = 0;
    TI_REAL yc = close[0];
    int i;
    for (i = 1; i < size; ++i) {
        const TI_REAL c = close[i];
        if (c > yc) {
            sum += c - MIN(yc, low[i]);
        } else if (c < yc) {
            sum += c - MAX(yc, high[i]);
        } else {
        }
        output[output_index++] = sum;
        yc = close[i];
    }
    
    return TI_OKAY;
}
int ti_wcprice_start(cli::array<double> ^options) {
    (void)options;
    return 0;
}
int ti_wcprice(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    (void)options;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    int i;
    for (i = 0; i < size; ++i) {
        output[i] = (high[i] + low[i] + close[i] + close[i]) * 0.25;
    }
    return TI_OKAY;
}
int ti_wilders_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_wilders(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_wilders_start(options)) return TI_OKAY;
    const TI_REAL per = 1.0 / ((TI_REAL)period);
    TI_REAL sum = 0;
    int i;
    for (i = 0; i < period; ++i) {
        sum += input[i];
    }
    TI_REAL val = sum / period;
    output[output_index++] = val;
    for (i = period; i < size; ++i) {
        val = (input[i]-val) * per + val;
        output[output_index++] = val;
    }
    
    return TI_OKAY;
}
int ti_willr_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_willr(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^high = inputs[0];
    cli::array<double> ^low = inputs[1];
    cli::array<double> ^close = inputs[2];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_willr_start(options)) return TI_OKAY;
    int trail = 0, maxi = -1, mini = -1;
    TI_REAL max = high[0];
    TI_REAL min = low[0];
    TI_REAL bar;
    int i, j;
    for (i = period-1; i < size; ++i, ++trail) {
        bar = high[i];
        if (maxi < trail) {
            maxi = trail;
            max = high[maxi];
            j = trail;
            while(++j <= i) {
                bar = high[j];
                if (bar >= max) {
                    max = bar;
                    maxi = j;
                }
            }
        } else if (bar >= max) {
            maxi = i;
            max = bar;
        }
        bar = low[i];
        if (mini < trail) {
            mini = trail;
            min = low[mini];
            j = trail;
            while(++j <= i) {
                bar = low[j];
                if (bar <= min) {
                    min = bar;
                    mini = j;
                }
            }
        } else if (bar <= min) {
            mini = i;
            min = bar;
        }
        const TI_REAL highlow = (max - min);
        const TI_REAL r = highlow == 0.0 ? 0.0 : -100 * ((max - close[i]) / highlow);
        output[output_index++] = r;
    }
    
    return TI_OKAY;
}
int ti_wma_start(cli::array<double> ^options) {
    return (int)options[0]-1;
}
int ti_wma(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_wma_start(options)) return TI_OKAY;
    const TI_REAL weights = period * (period+1) / 2;
    TI_REAL sum = 0;
    TI_REAL weight_sum = 0;
    int i;
    for (i = 0; i < period-1; ++i) {
        weight_sum += input[i] * (i+1);
        sum += input[i];
    }
    for (i = period-1; i < size; ++i) {
        weight_sum += input[i] * period;
        sum += input[i];
        output[output_index++] = weight_sum / weights;
        weight_sum -= sum;
        sum -= input[i-period+1];
    }
    
    return TI_OKAY;
}
int ti_zlema_start(cli::array<double> ^options) {
    return ((int)options[0] - 1) / 2 - 1;
}
int ti_zlema(int size, cli::array<cli::array<double>^> ^inputs, cli::array<double> ^options, cli::array<cli::array<double>^> ^outputs) {
    cli::array<double> ^input = inputs[0];
    const int period = (int)options[0];
    const int lag = (period - 1) / 2;
    cli::array<double> ^output = outputs[0]; int output_index = 0;
    if (period < 1) return TI_INVALID_OPTION;
    if (size <= ti_zlema_start(options)) return TI_OKAY;
    const TI_REAL per = 2 / ((TI_REAL)period + 1);
    TI_REAL val = input[lag-1];
    output[output_index++] = val;
    int i;
    for (i = lag; i < size; ++i) {
        TI_REAL c = input[i];
        TI_REAL l = input[i-lag];
        val = ((c + (c-l))-val) * per + val;
        output[output_index++] = val;
    }
    
    return TI_OKAY;
}
ti_buffer ^ti_buffer_new(int size) {
    ti_buffer ^ret = gcnew ti_buffer;
    ret->vals = gcnew cli::array<TI_REAL>(size);
    ret->size = size;
    ret->pushes = 0;
    ret->index = 0;
    ret->sum = 0;
    return ret;
}
void ti_buffer_free(ti_buffer ^buffer) {
    
}
String ^ ti_version() {return TI_VERSION;}
long int ti_build() {return TI_BUILD;}

int indicator_run(int index, cli::array<cli::array<double>^>^ inputs, cli::array<double>^ options, cli::array<cli::array<double>^>^ outputs) {
int size = inputs[0]->GetLength(0);
switch (index) {
case 0: return ti_abs(size, inputs, options, outputs);
case 1: return ti_acos(size, inputs, options, outputs);
case 2: return ti_ad(size, inputs, options, outputs);
case 3: return ti_add(size, inputs, options, outputs);
case 4: return ti_adosc(size, inputs, options, outputs);
case 5: return ti_adx(size, inputs, options, outputs);
case 6: return ti_adxr(size, inputs, options, outputs);
case 7: return ti_ao(size, inputs, options, outputs);
case 8: return ti_apo(size, inputs, options, outputs);
case 9: return ti_aroon(size, inputs, options, outputs);
case 10: return ti_aroonosc(size, inputs, options, outputs);
case 11: return ti_asin(size, inputs, options, outputs);
case 12: return ti_atan(size, inputs, options, outputs);
case 13: return ti_atr(size, inputs, options, outputs);
case 14: return ti_avgprice(size, inputs, options, outputs);
case 15: return ti_bbands(size, inputs, options, outputs);
case 16: return ti_bop(size, inputs, options, outputs);
case 17: return ti_cci(size, inputs, options, outputs);
case 18: return ti_ceil(size, inputs, options, outputs);
case 19: return ti_cmo(size, inputs, options, outputs);
case 20: return ti_cos(size, inputs, options, outputs);
case 21: return ti_cosh(size, inputs, options, outputs);
case 22: return ti_crossany(size, inputs, options, outputs);
case 23: return ti_crossover(size, inputs, options, outputs);
case 24: return ti_cvi(size, inputs, options, outputs);
case 25: return ti_decay(size, inputs, options, outputs);
case 26: return ti_dema(size, inputs, options, outputs);
case 27: return ti_di(size, inputs, options, outputs);
case 28: return ti_div(size, inputs, options, outputs);
case 29: return ti_dm(size, inputs, options, outputs);
case 30: return ti_dpo(size, inputs, options, outputs);
case 31: return ti_dx(size, inputs, options, outputs);
case 32: return ti_edecay(size, inputs, options, outputs);
case 33: return ti_ema(size, inputs, options, outputs);
case 34: return ti_emv(size, inputs, options, outputs);
case 35: return ti_exp(size, inputs, options, outputs);
case 36: return ti_fisher(size, inputs, options, outputs);
case 37: return ti_floor(size, inputs, options, outputs);
case 38: return ti_fosc(size, inputs, options, outputs);
case 39: return ti_hma(size, inputs, options, outputs);
case 40: return ti_kama(size, inputs, options, outputs);
case 41: return ti_kvo(size, inputs, options, outputs);
case 42: return ti_lag(size, inputs, options, outputs);
case 43: return ti_linreg(size, inputs, options, outputs);
case 44: return ti_linregintercept(size, inputs, options, outputs);
case 45: return ti_linregslope(size, inputs, options, outputs);
case 46: return ti_ln(size, inputs, options, outputs);
case 47: return ti_log10(size, inputs, options, outputs);
case 48: return ti_macd(size, inputs, options, outputs);
case 49: return ti_marketfi(size, inputs, options, outputs);
case 50: return ti_mass(size, inputs, options, outputs);
case 51: return ti_max(size, inputs, options, outputs);
case 52: return ti_md(size, inputs, options, outputs);
case 53: return ti_medprice(size, inputs, options, outputs);
case 54: return ti_mfi(size, inputs, options, outputs);
case 55: return ti_min(size, inputs, options, outputs);
case 56: return ti_mom(size, inputs, options, outputs);
case 57: return ti_msw(size, inputs, options, outputs);
case 58: return ti_mul(size, inputs, options, outputs);
case 59: return ti_natr(size, inputs, options, outputs);
case 60: return ti_nvi(size, inputs, options, outputs);
case 61: return ti_obv(size, inputs, options, outputs);
case 62: return ti_ppo(size, inputs, options, outputs);
case 63: return ti_psar(size, inputs, options, outputs);
case 64: return ti_pvi(size, inputs, options, outputs);
case 65: return ti_qstick(size, inputs, options, outputs);
case 66: return ti_roc(size, inputs, options, outputs);
case 67: return ti_rocr(size, inputs, options, outputs);
case 68: return ti_round(size, inputs, options, outputs);
case 69: return ti_rsi(size, inputs, options, outputs);
case 70: return ti_sin(size, inputs, options, outputs);
case 71: return ti_sinh(size, inputs, options, outputs);
case 72: return ti_sma(size, inputs, options, outputs);
case 73: return ti_sqrt(size, inputs, options, outputs);
case 74: return ti_stddev(size, inputs, options, outputs);
case 75: return ti_stderr(size, inputs, options, outputs);
case 76: return ti_stoch(size, inputs, options, outputs);
case 77: return ti_sub(size, inputs, options, outputs);
case 78: return ti_sum(size, inputs, options, outputs);
case 79: return ti_tan(size, inputs, options, outputs);
case 80: return ti_tanh(size, inputs, options, outputs);
case 81: return ti_tema(size, inputs, options, outputs);
case 82: return ti_todeg(size, inputs, options, outputs);
case 83: return ti_torad(size, inputs, options, outputs);
case 84: return ti_tr(size, inputs, options, outputs);
case 85: return ti_trima(size, inputs, options, outputs);
case 86: return ti_trix(size, inputs, options, outputs);
case 87: return ti_trunc(size, inputs, options, outputs);
case 88: return ti_tsf(size, inputs, options, outputs);
case 89: return ti_typprice(size, inputs, options, outputs);
case 90: return ti_ultosc(size, inputs, options, outputs);
case 91: return ti_var(size, inputs, options, outputs);
case 92: return ti_vhf(size, inputs, options, outputs);
case 93: return ti_vidya(size, inputs, options, outputs);
case 94: return ti_volatility(size, inputs, options, outputs);
case 95: return ti_vosc(size, inputs, options, outputs);
case 96: return ti_vwma(size, inputs, options, outputs);
case 97: return ti_wad(size, inputs, options, outputs);
case 98: return ti_wcprice(size, inputs, options, outputs);
case 99: return ti_wilders(size, inputs, options, outputs);
case 100: return ti_willr(size, inputs, options, outputs);
case 101: return ti_wma(size, inputs, options, outputs);
case 102: return ti_zlema(size, inputs, options, outputs);
default: return TI_INVALID_OPTION;
}
}
int indicator_start(int index, cli::array<double>^ options) {
switch (index) {
case 0: return ti_abs_start(options);
case 1: return ti_acos_start(options);
case 2: return ti_ad_start(options);
case 3: return ti_add_start(options);
case 4: return ti_adosc_start(options);
case 5: return ti_adx_start(options);
case 6: return ti_adxr_start(options);
case 7: return ti_ao_start(options);
case 8: return ti_apo_start(options);
case 9: return ti_aroon_start(options);
case 10: return ti_aroonosc_start(options);
case 11: return ti_asin_start(options);
case 12: return ti_atan_start(options);
case 13: return ti_atr_start(options);
case 14: return ti_avgprice_start(options);
case 15: return ti_bbands_start(options);
case 16: return ti_bop_start(options);
case 17: return ti_cci_start(options);
case 18: return ti_ceil_start(options);
case 19: return ti_cmo_start(options);
case 20: return ti_cos_start(options);
case 21: return ti_cosh_start(options);
case 22: return ti_crossany_start(options);
case 23: return ti_crossover_start(options);
case 24: return ti_cvi_start(options);
case 25: return ti_decay_start(options);
case 26: return ti_dema_start(options);
case 27: return ti_di_start(options);
case 28: return ti_div_start(options);
case 29: return ti_dm_start(options);
case 30: return ti_dpo_start(options);
case 31: return ti_dx_start(options);
case 32: return ti_edecay_start(options);
case 33: return ti_ema_start(options);
case 34: return ti_emv_start(options);
case 35: return ti_exp_start(options);
case 36: return ti_fisher_start(options);
case 37: return ti_floor_start(options);
case 38: return ti_fosc_start(options);
case 39: return ti_hma_start(options);
case 40: return ti_kama_start(options);
case 41: return ti_kvo_start(options);
case 42: return ti_lag_start(options);
case 43: return ti_linreg_start(options);
case 44: return ti_linregintercept_start(options);
case 45: return ti_linregslope_start(options);
case 46: return ti_ln_start(options);
case 47: return ti_log10_start(options);
case 48: return ti_macd_start(options);
case 49: return ti_marketfi_start(options);
case 50: return ti_mass_start(options);
case 51: return ti_max_start(options);
case 52: return ti_md_start(options);
case 53: return ti_medprice_start(options);
case 54: return ti_mfi_start(options);
case 55: return ti_min_start(options);
case 56: return ti_mom_start(options);
case 57: return ti_msw_start(options);
case 58: return ti_mul_start(options);
case 59: return ti_natr_start(options);
case 60: return ti_nvi_start(options);
case 61: return ti_obv_start(options);
case 62: return ti_ppo_start(options);
case 63: return ti_psar_start(options);
case 64: return ti_pvi_start(options);
case 65: return ti_qstick_start(options);
case 66: return ti_roc_start(options);
case 67: return ti_rocr_start(options);
case 68: return ti_round_start(options);
case 69: return ti_rsi_start(options);
case 70: return ti_sin_start(options);
case 71: return ti_sinh_start(options);
case 72: return ti_sma_start(options);
case 73: return ti_sqrt_start(options);
case 74: return ti_stddev_start(options);
case 75: return ti_stderr_start(options);
case 76: return ti_stoch_start(options);
case 77: return ti_sub_start(options);
case 78: return ti_sum_start(options);
case 79: return ti_tan_start(options);
case 80: return ti_tanh_start(options);
case 81: return ti_tema_start(options);
case 82: return ti_todeg_start(options);
case 83: return ti_torad_start(options);
case 84: return ti_tr_start(options);
case 85: return ti_trima_start(options);
case 86: return ti_trix_start(options);
case 87: return ti_trunc_start(options);
case 88: return ti_tsf_start(options);
case 89: return ti_typprice_start(options);
case 90: return ti_ultosc_start(options);
case 91: return ti_var_start(options);
case 92: return ti_vhf_start(options);
case 93: return ti_vidya_start(options);
case 94: return ti_volatility_start(options);
case 95: return ti_vosc_start(options);
case 96: return ti_vwma_start(options);
case 97: return ti_wad_start(options);
case 98: return ti_wcprice_start(options);
case 99: return ti_wilders_start(options);
case 100: return ti_willr_start(options);
case 101: return ti_wma_start(options);
case 102: return ti_zlema_start(options);
default: return TI_INVALID_OPTION;
}
}

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

