/*
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

 /* TI Version: TI VERSION: 0.8.2, TI BUILD: 1521563742 */

/* Vector Absolute Value */
static indicator^ abs = gcnew indicator(0);

/* Vector Arccosine */
static indicator^ acos = gcnew indicator(1);

/* Accumulation/Distribution Line */
static indicator^ ad = gcnew indicator(2);

/* Vector Addition */
static indicator^ add = gcnew indicator(3);

/* Accumulation/Distribution Oscillator */
static indicator^ adosc = gcnew indicator(4);

/* Average Directional Movement Index */
static indicator^ adx = gcnew indicator(5);

/* Average Directional Movement Rating */
static indicator^ adxr = gcnew indicator(6);

/* Awesome Oscillator */
static indicator^ ao = gcnew indicator(7);

/* Absolute Price Oscillator */
static indicator^ apo = gcnew indicator(8);

/* Aroon */
static indicator^ aroon = gcnew indicator(9);

/* Aroon Oscillator */
static indicator^ aroonosc = gcnew indicator(10);

/* Vector Arcsine */
static indicator^ asin = gcnew indicator(11);

/* Vector Arctangent */
static indicator^ atan = gcnew indicator(12);

/* Average True Range */
static indicator^ atr = gcnew indicator(13);

/* Average Price */
static indicator^ avgprice = gcnew indicator(14);

/* Bollinger Bands */
static indicator^ bbands = gcnew indicator(15);

/* Balance of Power */
static indicator^ bop = gcnew indicator(16);

/* Commodity Channel Index */
static indicator^ cci = gcnew indicator(17);

/* Vector Ceiling */
static indicator^ ceil = gcnew indicator(18);

/* Chande Momentum Oscillator */
static indicator^ cmo = gcnew indicator(19);

/* Vector Cosine */
static indicator^ cos = gcnew indicator(20);

/* Vector Hyperbolic Cosine */
static indicator^ cosh = gcnew indicator(21);

/* Crossany */
static indicator^ crossany = gcnew indicator(22);

/* Crossover */
static indicator^ crossover = gcnew indicator(23);

/* Chaikins Volatility */
static indicator^ cvi = gcnew indicator(24);

/* Linear Decay */
static indicator^ decay = gcnew indicator(25);

/* Double Exponential Moving Average */
static indicator^ dema = gcnew indicator(26);

/* Directional Indicator */
static indicator^ di = gcnew indicator(27);

/* Vector Division */
static indicator^ div = gcnew indicator(28);

/* Directional Movement */
static indicator^ dm = gcnew indicator(29);

/* Detrended Price Oscillator */
static indicator^ dpo = gcnew indicator(30);

/* Directional Movement Index */
static indicator^ dx = gcnew indicator(31);

/* Exponential Decay */
static indicator^ edecay = gcnew indicator(32);

/* Exponential Moving Average */
static indicator^ ema = gcnew indicator(33);

/* Ease of Movement */
static indicator^ emv = gcnew indicator(34);

/* Vector Exponential */
static indicator^ exp = gcnew indicator(35);

/* Fisher Transform */
static indicator^ fisher = gcnew indicator(36);

/* Vector Floor */
static indicator^ floor = gcnew indicator(37);

/* Forecast Oscillator */
static indicator^ fosc = gcnew indicator(38);

/* Hull Moving Average */
static indicator^ hma = gcnew indicator(39);

/* Kaufman Adaptive Moving Average */
static indicator^ kama = gcnew indicator(40);

/* Klinger Volume Oscillator */
static indicator^ kvo = gcnew indicator(41);

/* Lag */
static indicator^ lag = gcnew indicator(42);

/* Linear Regression */
static indicator^ linreg = gcnew indicator(43);

/* Linear Regression Intercept */
static indicator^ linregintercept = gcnew indicator(44);

/* Linear Regression Slope */
static indicator^ linregslope = gcnew indicator(45);

/* Vector Natural Log */
static indicator^ ln = gcnew indicator(46);

/* Vector Base-10 Log */
static indicator^ log10 = gcnew indicator(47);

/* Moving Average Convergence/Divergence */
static indicator^ macd = gcnew indicator(48);

/* Market Facilitation Index */
static indicator^ marketfi = gcnew indicator(49);

/* Mass Index */
static indicator^ mass = gcnew indicator(50);

/* Maximum In Period */
static indicator^ max = gcnew indicator(51);

/* Mean Deviation Over Period */
static indicator^ md = gcnew indicator(52);

/* Median Price */
static indicator^ medprice = gcnew indicator(53);

/* Money Flow Index */
static indicator^ mfi = gcnew indicator(54);

/* Minimum In Period */
static indicator^ min = gcnew indicator(55);

/* Momentum */
static indicator^ mom = gcnew indicator(56);

/* Mesa Sine Wave */
static indicator^ msw = gcnew indicator(57);

/* Vector Multiplication */
static indicator^ mul = gcnew indicator(58);

/* Normalized Average True Range */
static indicator^ natr = gcnew indicator(59);

/* Negative Volume Index */
static indicator^ nvi = gcnew indicator(60);

/* On Balance Volume */
static indicator^ obv = gcnew indicator(61);

/* Percentage Price Oscillator */
static indicator^ ppo = gcnew indicator(62);

/* Parabolic SAR */
static indicator^ psar = gcnew indicator(63);

/* Positive Volume Index */
static indicator^ pvi = gcnew indicator(64);

/* Qstick */
static indicator^ qstick = gcnew indicator(65);

/* Rate of Change */
static indicator^ roc = gcnew indicator(66);

/* Rate of Change Ratio */
static indicator^ rocr = gcnew indicator(67);

/* Vector Round */
static indicator^ round = gcnew indicator(68);

/* Relative Strength Index */
static indicator^ rsi = gcnew indicator(69);

/* Vector Sine */
static indicator^ sin = gcnew indicator(70);

/* Vector Hyperbolic Sine */
static indicator^ sinh = gcnew indicator(71);

/* Simple Moving Average */
static indicator^ sma = gcnew indicator(72);

/* Vector Square Root */
static indicator^ sqrt = gcnew indicator(73);

/* Standard Deviation Over Period */
static indicator^ stddev = gcnew indicator(74);

/* Standard Error Over Period */
static indicator^ stderr = gcnew indicator(75);

/* Stochastic Oscillator */
static indicator^ stoch = gcnew indicator(76);

/* Vector Subtraction */
static indicator^ sub = gcnew indicator(77);

/* Sum Over Period */
static indicator^ sum = gcnew indicator(78);

/* Vector Tangent */
static indicator^ tan = gcnew indicator(79);

/* Vector Hyperbolic Tangent */
static indicator^ tanh = gcnew indicator(80);

/* Triple Exponential Moving Average */
static indicator^ tema = gcnew indicator(81);

/* Vector Degree Conversion */
static indicator^ todeg = gcnew indicator(82);

/* Vector Radian Conversion */
static indicator^ torad = gcnew indicator(83);

/* True Range */
static indicator^ tr = gcnew indicator(84);

/* Triangular Moving Average */
static indicator^ trima = gcnew indicator(85);

/* Trix */
static indicator^ trix = gcnew indicator(86);

/* Vector Truncate */
static indicator^ trunc = gcnew indicator(87);

/* Time Series Forecast */
static indicator^ tsf = gcnew indicator(88);

/* Typical Price */
static indicator^ typprice = gcnew indicator(89);

/* Ultimate Oscillator */
static indicator^ ultosc = gcnew indicator(90);

/* Variance Over Period */
static indicator^ var = gcnew indicator(91);

/* Vertical Horizontal Filter */
static indicator^ vhf = gcnew indicator(92);

/* Variable Index Dynamic Average */
static indicator^ vidya = gcnew indicator(93);

/* Annualized Historical Volatility */
static indicator^ volatility = gcnew indicator(94);

/* Volume Oscillator */
static indicator^ vosc = gcnew indicator(95);

/* Volume Weighted Moving Average */
static indicator^ vwma = gcnew indicator(96);

/* Williams Accumulation/Distribution */
static indicator^ wad = gcnew indicator(97);

/* Weighted Close Price */
static indicator^ wcprice = gcnew indicator(98);

/* Wilders Smoothing */
static indicator^ wilders = gcnew indicator(99);

/* Williams %R */
static indicator^ willr = gcnew indicator(100);

/* Weighted Moving Average */
static indicator^ wma = gcnew indicator(101);

/* Zero-Lag Exponential Moving Average */
static indicator^ zlema = gcnew indicator(102);
