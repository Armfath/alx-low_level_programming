#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /*_MAIN_H*/
