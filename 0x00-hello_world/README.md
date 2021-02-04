0. Preprocessor:
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c.

Following [Source](https://serverfault.com/questions/107078/create-file-with-variable-value-in-unix)
here we use a variable that have main.c file. also we use `>>` to save the output in file `c`
the result is `gcc -E $CFILE >> c`.

1. Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o.
[Source](https://studio.segger.com/index.htm?https://studio.segger.com/cc_option_compile_only.htm)the result is `gcc -c $CFILE >> main.o`.

2.Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
[Source](https://stackoverflow.com/questions/137038/how-do-you-get-assembler-output-from-c-c-source-in-gcc).
the result is `gcc -S $CFILE >> main.s`

3.Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE

Following this [Source](https://www.cyberciti.biz/faq/compiling-c-program-and-creating-executable-file/) the syntax will be `gcc "file" -o "executable file"`

the result is `gcc $CFILE -o cisfun`.

4.C program that prints `"Programming is like building a multilingual puzzle`using `puts`.

5. A C program that prints `with proper grammar, but the outcome is a piece of art,`
[Source](https://www.programiz.com/c-programming/examples/print-sentence).

6.C program that prints the size of various types on the computer it is compiled and run on.
[Source](https://www.programiz.com/c-programming/examples/sizeof-operator-example).


8.[Source](https://stackoverflow.com/questions/199966/how-do-you-use-gcc-to-generate-assembly-code-in-intel-syntax).

9.C program that prints exactly and that piece of art is useful" - 
Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
[Source](https://www.quora.com/How-can-we-print-the-Hello-world-without-printf),[Source](https://bytefreaks.net/programming-2/c-programming-2/c-implicit-declaration-of-function-read-and-write).
