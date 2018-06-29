
#TINet (Tulip Indicators .NET Wrapper)

##Introduction

TINet is a .NET wrapper for Tulip Indicators that provides access to all the
technical analysis functions from the [Tulip
Indicators](https://tulipindicators.org) library.

##Usage

Add a reference to the proper tinet.dll (matching whether you need x86 or x64, debug or release).

All TINet indicators have the same interface. They take an array of inputs, an array of options, and an array of outputs.

Example in C#:

```
    //Run SMA on close prices using a smoothing period of 4 bars.

    double[] close_prices = new double[] {5, 4, 5, 4, 4, 6, 5, 4, 5, 2, 5, 5, 5, 4, 4, 3};
    double[] options = new double[] {4};
    int output_length = close_prices.Length - tinet.indicators.sma_start(options);
    double[] output = new double[output_length];

    double[][] inputs = {close_prices};
    double[][] outputs = {output};
    int success = tinet.indicators.sma(inputs, options, outputs);

    Console.WriteLine("Input bars:");
    Console.WriteLine(string.Join(",", close_prices));

    Console.WriteLine("SMA Output:");
    Console.WriteLine(string.Join(",", output));
```
