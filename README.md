# MiniML Compiler

MiniML language compiler with the Lex/Yacc chain

This README is still on my to-do list, so this is just a placeholder.
I might add some stuff in the future, but this is by no means a priority, so don't expect it to be up to date.

### Current status (as of April 17th 2018)

The compiler generates a single bulky C source file. It compiles and runs fine as a standalone program. (see usage section) 

It also has command line options to run as an interpreter and from the standard input.
The standard input mode is not interactive yet, as you need to send an EOT character to process the code. (`^D` on shells)

The type inference and evaluation systems *should* be working fine.
If you happen to find a bug or possible improvements, you're welcome to use the issue tracker to report those.

### Build instructions

If you can read French, you can build a PDF file for a detailed report, from the main directory with the `report` Makefile rule.

Otherwise, here are basic instructions as to how to build the project:

* Clone this repository recursively (dependency as submodule!).
```
git clone --recursive https://github.com/ichi-rika/miniml
```
Note that if you already had an older version of the repository, you might need to run a submodule update.
```
git submodule update
```

* Build the libcalg submodule. It will run autogen, build the library and install it in the submodule directory.
```
make libcalg
```

* Build the compiler.
```
make miniml
```

### Usage

The compiler has four command line options:

* `--source` or `-i` : Specify the input source file.
* `--stdin` or `-s` : Read the source from the standard input.
* `--target` or `-o` : Specify the output target file.
* `--execute` or `-e` : Interpret the source in place.

There must be only one of either source/stdin and target/execute. Note that not having either is not allowed by the compiler.

When compiling generated code, make sure to link against the c-algorithms library, or you will get linking errors.
It is recommended to link statically, so as to not depend on the target system.

The `graph` rule builds a `.dot` and `.png` for the grammar parser.
Note that the graph is very condensed, and the image generation can take a long time.

# Licensing

This project is licensed under the MIT License.

The `ml.pdf` file is not under this license and is the sole property of its creators, cited in the paper itself.
