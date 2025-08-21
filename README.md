# Base10 to Binary Converter

## Overview

This program converts a base 10 (decimal) integer to its binary representation using a custom stack-based data structure.  
It demonstrates manual parsing of ASCII input, safe integer conversion, and binary conversion using bitwise operations.

## Building the Library

To build the static library (`libftprintf.a`) required for the program, run:

```sh
make
```

This will compile all source files and create `libftprintf.a` in your project directory.

## Compiling the Program

After building the library, compile the main program using:

```sh
gcc main.c libftprintf.a -o myprog
```

This will generate an executable named `myprog`.

## Usage

Run the program with a single integer argument:

```sh
./myprog <number>
```

**Example:**

```sh
./myprog 42
```

**Output:**

```
input:
42
decimal to binary expression:
101010
```

If no argument is provided or the input is invalid, the program will display a usage message or an error.
