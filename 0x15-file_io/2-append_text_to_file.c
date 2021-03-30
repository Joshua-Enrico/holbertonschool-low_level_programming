#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int _strlen(char *str)
{
    int x;
    for (x = 0; str[x]; x++)
        ;
    return (x);
}
int append_text_to_file(const char *filename, char *text_content)
{
    int ft;
    long _write;

    if (filename == NULL)
    {
        return (-1);
    }

    ft = open(filename, O_RDWR | O_APPEND);

    if (ft == -1)
    {
        close(ft);
        return (-1);
    }
    if (text_content != NULL)
    {
    _write = write(ft, text_content, _strlen(text_content));
    }
    close(ft);

    if (_write == -1)
    {
        return (-1);
    }
    return (1);
}
