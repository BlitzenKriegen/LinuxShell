#include <stdio.h>
#include <unistd.h>
#include "str.h"

#define USERLENGTH 31
#define CLLENGTH 256

int main(int argc, char *argv[])
{

    char userName[USERLENGTH];
    char userPass[USERLENGTH];

    write(1, "Welcome to the Linux Shell!\n", 28);
    write(1, "Enter your username (30 characters max): ", 41);

    read(0, userName, USERLENGTH);
    write(1, "Enter your password (30 characters max): ", 41);

    read(0, userPass, USERLENGTH);

    /* will need to have error check eventually */
    write(1, "Successfully logged in, Welcome!\n", 33);

    int bytesRead;

    char commandLineInput[CLLENGTH];
    bytesRead = read(0, commandLineInput, CLLENGTH);
    commandLineInput[bytesRead - 1] = '\0';

    while (cmp(commandLineInput, "exit"))
    {
        bytesRead = read(0, commandLineInput, (sizeof(commandLineInput)) - 1);
        commandLineInput[bytesRead - 1] = '\0';
    }

    return 0;
}
