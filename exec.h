#ifndef EXEC_H
#define EXEC_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include "str.h"
#include "shell.h"

#define MAX_LINE 256
#define ERR_VAL -1

int execFunc(char *[], int);

#endif