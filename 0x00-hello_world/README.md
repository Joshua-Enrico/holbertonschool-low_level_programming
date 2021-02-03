0. Preprocessor:
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c.

Following [Source](https://serverfault.com/questions/107078/create-file-with-variable-value-in-unix)
here we use a variable that have main.c file. also we use `>>` to save the output in file `c`
the result is `gcc -E $CFILE >> c`.
