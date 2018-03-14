# MiniML Compiler
MiniML language compiler with the Lex/Yacc chain

This README is still on my to-do list, so this is just a placeholder.
I might add some stuff in the future, but this is by no means a priority, so don't expect it to be up to date.

If you can read French, you can build a PDF file for the report from the main directory with the `report` Makefile rule.

Otherwise, here are *very basic* instructions as to how to build the project:

* Install the [c-algorithms library](https://github.com/fragglet/c-algorithms) somewhere on your system.
* Edit the `CALGDIR` variable in the root Makefile to the install directory.
* Build the compiler with `make` and/or the report with `make report`.

At the moment, the program does not support command line arguments, so it reads the source code from the standard input.

To compile a source file, you can redirect stdin from the command line like so: `./miniml test.ml`.

The Makefile also has a special `*.ml` rule that ensures the executable is up to date before feeding the file.

The `graph` rule builds a `.dot` and `.png` for the grammar parser.
Note that the graph is very condensed, and the image generation can take a long time.
