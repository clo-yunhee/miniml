# MiniML Compiler

MiniML language compiler with the Lex/Yacc chain

This README is still on my to-do list, so this is just a placeholder.
I might add some stuff in the future, but this is by no means a priority, so don't expect it to be up to date.

### Current status (as of March 20th 2018)

The compiler generates a single bulky C source file. It compiles and runs fine as a standalone program. (see usage section) 

It also has command line options to run as an interpreter and from the standard input.
The standard input mode is not interactive yet, as you need to send an EOT character to process the code. (`^D` on shells)

The type inference and evaluation systems *should* be working fine.
If you happen to find a bug or possible improvements, you're welcome to use the issue tracker to report those.

### Build instructions

If you can read French, you can build a PDF file for a detailed report, from the main directory with the `report` Makefile rule.

Otherwise, here are basic instructions as to how to build the project:

* Install the [c-algorithms library](https://github.com/fragglet/c-algorithms) somewhere on your system.
* Edit the `CALGDIR` variable in the root Makefile to the install directory.
* Build the compiler with `make` and/or the report with `make report`.

### Usage

The compiler has four command line options:

* `--source` or `-i` : Specify the input source file.
* `--stdin` or `-s` : Read the source from the standard input.
* `--target` or `-o` : Specify the output target file.
* `--execute` or `-e` : Interpret the source in place.

There must be only one of either source/stdin and target/execute. Note that not having either is not allowed by the compiler.

When compiling generated code, make sure to link against the c-algorithms library (e.g. on GCC, with `-lcalg`) or you will get linkage errors.

The `graph` rule builds a `.dot` and `.png` for the grammar parser.
Note that the graph is very condensed, and the image generation can take a long time.

# Licensing

This project is licensed under the MIT License.

The `ml.pdf` file is not under this license and is the sole property of its creators, cited in the paper itself.
