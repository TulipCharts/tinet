
/* Vector Absolute Value */
static indicator^ abs = gcnew indicator(0, "abs", "Vector Absolute Value",
    "real", "", "abs");

/* Vector Arccosine */
static indicator^ acos = gcnew indicator(1, "acos", "Vector Arccosine",
    "real", "", "acos");

/* Accumulation/Distribution Line */
static indicator^ ad = gcnew indicator(2, "ad", "Accumulation/Distribution Line",
    "high|low|close|volume", "", "ad");

/* Vector Addition */
static indicator^ add = gcnew indicator(3, "add", "Vector Addition",
    "real|real", "", "add");

/* Accumulation/Distribution Oscillator */
static indicator^ adosc = gcnew indicator(4, "adosc", "Accumulation/Distribution Oscillator",
    "high|low|close|volume", "short period|long period", "adosc");

/* Average Directional Movement Index */
static indicator^ adx = gcnew indicator(5, "adx", "Average Directional Movement Index",
    "high|low|close", "period", "dx");

/* Average Directional Movement Rating */
static indicator^ adxr = gcnew indicator(6, "adxr", "Average Directional Movement Rating",
    "high|low|close", "period", "dx");

/* Awesome Oscillator */
static indicator^ ao = gcnew indicator(7, "ao", "Awesome Oscillator",
    "high|low", "", "ao");

/* Absolute Price Oscillator */
static indicator^ apo = gcnew indicator(8, "apo", "Absolute Price Oscillator",
    "real", "short period|long period", "apo");

/* Aroon */
static indicator^ aroon = gcnew indicator(9, "aroon", "Aroon",
    "high|low", "period", "aroon_down|aroon_up");

/* Aroon Oscillator */
static indicator^ aroonosc = gcnew indicator(10, "aroonosc", "Aroon Oscillator",
    "high|low", "period", "aroonosc");

/* Vector Arcsine */
static indicator^ asin = gcnew indicator(11, "asin", "Vector Arcsine",
    "real", "", "asin");

/* Vector Arctangent */
static indicator^ atan = gcnew indicator(12, "atan", "Vector Arctangent",
    "real", "", "atan");

/* Average True Range */
static indicator^ atr = gcnew indicator(13, "atr", "Average True Range",
    "high|low|close", "period", "atr");

/* Average Price */
static indicator^ avgprice = gcnew indicator(14, "avgprice", "Average Price",
    "open|high|low|close", "", "avgprice");

/* Bollinger Bands */
static indicator^ bbands = gcnew indicator(15, "bbands", "Bollinger Bands",
    "real", "period|stddev", "bbands_lower|bbands_middle|bbands_upper");

/* Balance of Power */
static indicator^ bop = gcnew indicator(16, "bop", "Balance of Power",
    "open|high|low|close", "", "bop");

/* Commodity Channel Index */
static indicator^ cci = gcnew indicator(17, "cci", "Commodity Channel Index",
    "high|low|close", "period", "cci");

/* Vector Ceiling */
static indicator^ ceil = gcnew indicator(18, "ceil", "Vector Ceiling",
    "real", "", "ceil");

/* Chande Momentum Oscillator */
static indicator^ cmo = gcnew indicator(19, "cmo", "Chande Momentum Oscillator",
    "real", "period", "cmo");

/* Vector Cosine */
static indicator^ cos = gcnew indicator(20, "cos", "Vector Cosine",
    "real", "", "cos");

/* Vector Hyperbolic Cosine */
static indicator^ cosh = gcnew indicator(21, "cosh", "Vector Hyperbolic Cosine",
    "real", "", "cosh");

/* Crossany */
static indicator^ crossany = gcnew indicator(22, "crossany", "Crossany",
    "real|real", "", "crossany");

/* Crossover */
static indicator^ crossover = gcnew indicator(23, "crossover", "Crossover",
    "real|real", "", "crossover");

/* Chaikins Volatility */
static indicator^ cvi = gcnew indicator(24, "cvi", "Chaikins Volatility",
    "high|low", "period", "cvi");

/* Linear Decay */
static indicator^ decay = gcnew indicator(25, "decay", "Linear Decay",
    "real", "period", "decay");

/* Double Exponential Moving Average */
static indicator^ dema = gcnew indicator(26, "dema", "Double Exponential Moving Average",
    "real", "period", "dema");

/* Directional Indicator */
static indicator^ di = gcnew indicator(27, "di", "Directional Indicator",
    "high|low|close", "period", "plus_di|minus_di");

/* Vector Division */
static indicator^ div = gcnew indicator(28, "div", "Vector Division",
    "real|real", "", "div");

/* Directional Movement */
static indicator^ dm = gcnew indicator(29, "dm", "Directional Movement",
    "high|low", "period", "plus_dm|minus_dm");

/* Detrended Price Oscillator */
static indicator^ dpo = gcnew indicator(30, "dpo", "Detrended Price Oscillator",
    "real", "period", "dpo");

/* Directional Movement Index */
static indicator^ dx = gcnew indicator(31, "dx", "Directional Movement Index",
    "high|low|close", "period", "dx");

/* Exponential Decay */
static indicator^ edecay = gcnew indicator(32, "edecay", "Exponential Decay",
    "real", "period", "edecay");

/* Exponential Moving Average */
static indicator^ ema = gcnew indicator(33, "ema", "Exponential Moving Average",
    "real", "period", "ema");

/* Ease of Movement */
static indicator^ emv = gcnew indicator(34, "emv", "Ease of Movement",
    "high|low|volume", "", "emv");

/* Vector Exponential */
static indicator^ exp = gcnew indicator(35, "exp", "Vector Exponential",
    "real", "", "exp");

/* Fisher Transform */
static indicator^ fisher = gcnew indicator(36, "fisher", "Fisher Transform",
    "high|low", "period", "fisher|fisher_signal");

/* Vector Floor */
static indicator^ floor = gcnew indicator(37, "floor", "Vector Floor",
    "real", "", "floor");

/* Forecast Oscillator */
static indicator^ fosc = gcnew indicator(38, "fosc", "Forecast Oscillator",
    "real", "period", "fosc");

/* Hull Moving Average */
static indicator^ hma = gcnew indicator(39, "hma", "Hull Moving Average",
    "real", "period", "hma");

/* Kaufman Adaptive Moving Average */
static indicator^ kama = gcnew indicator(40, "kama", "Kaufman Adaptive Moving Average",
    "real", "period", "kama");

/* Klinger Volume Oscillator */
static indicator^ kvo = gcnew indicator(41, "kvo", "Klinger Volume Oscillator",
    "high|low|close|volume", "short period|long period", "kvo");

/* Lag */
static indicator^ lag = gcnew indicator(42, "lag", "Lag",
    "real", "period", "lag");

/* Linear Regression */
static indicator^ linreg = gcnew indicator(43, "linreg", "Linear Regression",
    "real", "period", "linreg");

/* Linear Regression Intercept */
static indicator^ linregintercept = gcnew indicator(44, "linregintercept", "Linear Regression Intercept",
    "real", "period", "linregintercept");

/* Linear Regression Slope */
static indicator^ linregslope = gcnew indicator(45, "linregslope", "Linear Regression Slope",
    "real", "period", "linregslope");

/* Vector Natural Log */
static indicator^ ln = gcnew indicator(46, "ln", "Vector Natural Log",
    "real", "", "ln");

/* Vector Base-10 Log */
static indicator^ log10 = gcnew indicator(47, "log10", "Vector Base-10 Log",
    "real", "", "log10");

/* Moving Average Convergence/Divergence */
static indicator^ macd = gcnew indicator(48, "macd", "Moving Average Convergence/Divergence",
    "real", "short period|long period|signal period", "macd|macd_signal|macd_histogram");

/* Market Facilitation Index */
static indicator^ marketfi = gcnew indicator(49, "marketfi", "Market Facilitation Index",
    "high|low|volume", "", "marketfi");

/* Mass Index */
static indicator^ mass = gcnew indicator(50, "mass", "Mass Index",
    "high|low", "period", "mass");

/* Maximum In Period */
static indicator^ max = gcnew indicator(51, "max", "Maximum In Period",
    "real", "period", "max");

/* Mean Deviation Over Period */
static indicator^ md = gcnew indicator(52, "md", "Mean Deviation Over Period",
    "real", "period", "md");

/* Median Price */
static indicator^ medprice = gcnew indicator(53, "medprice", "Median Price",
    "high|low", "", "medprice");

/* Money Flow Index */
static indicator^ mfi = gcnew indicator(54, "mfi", "Money Flow Index",
    "high|low|close|volume", "period", "mfi");

/* Minimum In Period */
static indicator^ min = gcnew indicator(55, "min", "Minimum In Period",
    "real", "period", "min");

/* Momentum */
static indicator^ mom = gcnew indicator(56, "mom", "Momentum",
    "real", "period", "mom");

/* Mesa Sine Wave */
static indicator^ msw = gcnew indicator(57, "msw", "Mesa Sine Wave",
    "real", "period", "msw_sine|msw_lead");

/* Vector Multiplication */
static indicator^ mul = gcnew indicator(58, "mul", "Vector Multiplication",
    "real|real", "", "mul");

/* Normalized Average True Range */
static indicator^ natr = gcnew indicator(59, "natr", "Normalized Average True Range",
    "high|low|close", "period", "natr");

/* Negative Volume Index */
static indicator^ nvi = gcnew indicator(60, "nvi", "Negative Volume Index",
    "close|volume", "", "nvi");

/* On Balance Volume */
static indicator^ obv = gcnew indicator(61, "obv", "On Balance Volume",
    "close|volume", "", "obv");

/* Percentage Price Oscillator */
static indicator^ ppo = gcnew indicator(62, "ppo", "Percentage Price Oscillator",
    "real", "short period|long period", "ppo");

/* Parabolic SAR */
static indicator^ psar = gcnew indicator(63, "psar", "Parabolic SAR",
    "high|low", "acceleration factor step|acceleration factor maximum", "psar");

/* Positive Volume Index */
static indicator^ pvi = gcnew indicator(64, "pvi", "Positive Volume Index",
    "close|volume", "", "pvi");

/* Qstick */
static indicator^ qstick = gcnew indicator(65, "qstick", "Qstick",
    "open|close", "period", "qstick");

/* Rate of Change */
static indicator^ roc = gcnew indicator(66, "roc", "Rate of Change",
    "real", "period", "roc");

/* Rate of Change Ratio */
static indicator^ rocr = gcnew indicator(67, "rocr", "Rate of Change Ratio",
    "real", "period", "rocr");

/* Vector Round */
static indicator^ round = gcnew indicator(68, "round", "Vector Round",
    "real", "", "round");

/* Relative Strength Index */
static indicator^ rsi = gcnew indicator(69, "rsi", "Relative Strength Index",
    "real", "period", "rsi");

/* Vector Sine */
static indicator^ sin = gcnew indicator(70, "sin", "Vector Sine",
    "real", "", "sin");

/* Vector Hyperbolic Sine */
static indicator^ sinh = gcnew indicator(71, "sinh", "Vector Hyperbolic Sine",
    "real", "", "sinh");

/* Simple Moving Average */
static indicator^ sma = gcnew indicator(72, "sma", "Simple Moving Average",
    "real", "period", "sma");

/* Vector Square Root */
static indicator^ sqrt = gcnew indicator(73, "sqrt", "Vector Square Root",
    "real", "", "sqrt");

/* Standard Deviation Over Period */
static indicator^ stddev = gcnew indicator(74, "stddev", "Standard Deviation Over Period",
    "real", "period", "stddev");

/* Standard Error Over Period */
static indicator^ stderr = gcnew indicator(75, "stderr", "Standard Error Over Period",
    "real", "period", "stderr");

/* Stochastic Oscillator */
static indicator^ stoch = gcnew indicator(76, "stoch", "Stochastic Oscillator",
    "high|low|close", "%k period|%k slowing period|%d period", "stoch_k|stoch_d");

/* Vector Subtraction */
static indicator^ sub = gcnew indicator(77, "sub", "Vector Subtraction",
    "real|real", "", "sub");

/* Sum Over Period */
static indicator^ sum = gcnew indicator(78, "sum", "Sum Over Period",
    "real", "period", "sum");

/* Vector Tangent */
static indicator^ tan = gcnew indicator(79, "tan", "Vector Tangent",
    "real", "", "tan");

/* Vector Hyperbolic Tangent */
static indicator^ tanh = gcnew indicator(80, "tanh", "Vector Hyperbolic Tangent",
    "real", "", "tanh");

/* Triple Exponential Moving Average */
static indicator^ tema = gcnew indicator(81, "tema", "Triple Exponential Moving Average",
    "real", "period", "tema");

/* Vector Degree Conversion */
static indicator^ todeg = gcnew indicator(82, "todeg", "Vector Degree Conversion",
    "real", "", "degrees");

/* Vector Radian Conversion */
static indicator^ torad = gcnew indicator(83, "torad", "Vector Radian Conversion",
    "real", "", "radians");

/* True Range */
static indicator^ tr = gcnew indicator(84, "tr", "True Range",
    "high|low|close", "", "tr");

/* Triangular Moving Average */
static indicator^ trima = gcnew indicator(85, "trima", "Triangular Moving Average",
    "real", "period", "trima");

/* Trix */
static indicator^ trix = gcnew indicator(86, "trix", "Trix",
    "real", "period", "trix");

/* Vector Truncate */
static indicator^ trunc = gcnew indicator(87, "trunc", "Vector Truncate",
    "real", "", "trunc");

/* Time Series Forecast */
static indicator^ tsf = gcnew indicator(88, "tsf", "Time Series Forecast",
    "real", "period", "tsf");

/* Typical Price */
static indicator^ typprice = gcnew indicator(89, "typprice", "Typical Price",
    "high|low|close", "", "typprice");

/* Ultimate Oscillator */
static indicator^ ultosc = gcnew indicator(90, "ultosc", "Ultimate Oscillator",
    "high|low|close", "short period|medium period|long period", "ultosc");

/* Variance Over Period */
static indicator^ var = gcnew indicator(91, "var", "Variance Over Period",
    "real", "period", "var");

/* Vertical Horizontal Filter */
static indicator^ vhf = gcnew indicator(92, "vhf", "Vertical Horizontal Filter",
    "real", "period", "vhf");

/* Variable Index Dynamic Average */
static indicator^ vidya = gcnew indicator(93, "vidya", "Variable Index Dynamic Average",
    "real", "short period|long period|alpha", "vidya");

/* Annualized Historical Volatility */
static indicator^ volatility = gcnew indicator(94, "volatility", "Annualized Historical Volatility",
    "real", "period", "volatility");

/* Volume Oscillator */
static indicator^ vosc = gcnew indicator(95, "vosc", "Volume Oscillator",
    "volume", "short period|long period", "vosc");

/* Volume Weighted Moving Average */
static indicator^ vwma = gcnew indicator(96, "vwma", "Volume Weighted Moving Average",
    "close|volume", "period", "vwma");

/* Williams Accumulation/Distribution */
static indicator^ wad = gcnew indicator(97, "wad", "Williams Accumulation/Distribution",
    "high|low|close", "", "wad");

/* Weighted Close Price */
static indicator^ wcprice = gcnew indicator(98, "wcprice", "Weighted Close Price",
    "high|low|close", "", "wcprice");

/* Wilders Smoothing */
static indicator^ wilders = gcnew indicator(99, "wilders", "Wilders Smoothing",
    "real", "period", "wilders");

/* Williams %R */
static indicator^ willr = gcnew indicator(100, "willr", "Williams %R",
    "high|low|close", "period", "willr");

/* Weighted Moving Average */
static indicator^ wma = gcnew indicator(101, "wma", "Weighted Moving Average",
    "real", "period", "wma");

/* Zero-Lag Exponential Moving Average */
static indicator^ zlema = gcnew indicator(102, "zlema", "Zero-Lag Exponential Moving Average",
    "real", "period", "zlema");
