# clox

This is my C implementation of Lox - a small programming language for scripting -
from the book [Crafting Interpreters](https://www.craftinginterpreters.com/).

Code-wise, it follows the [reference implementation](
https://github.com/munificent/craftinginterpreters) of clox exactly. However, I
decided to use [Meson](https://mesonbuild.com/) as the build system, rather than
a Makefile, out of pure curiosity.

# Prerequisites

1. Install a C compiler on your system, if it doesn't have one already.
2. Ensure it is on your system's PATH.
2. Install Meson either using the [instructions](
   https://mesonbuild.com/Getting-meson.html) from the official website, or by
   searching how to install it with your system's package manager.
   
   Commands for common Unix-like operating systems include:
   - macOS with [Homebrew](https://brew.sh/):
     ```sh
     brew install meson
     ```
   - Ubuntu:
     ```
     sudo apt-get install python3 python3-pip python3-setuptools python3-wheel ninja-build
     pip3 install --user meson
     ```

# Build the executable

```sh
meson setup build
cd build
meson compile
cd ..
```

# Run the executable as a REPL

```sh
build/clox
```

# Run the executable with a Lox script

```sh
build/clox <path-to-lox-script>
```
