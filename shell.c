#include "shell.h"
#include <stdio.h>
#include <unistd.h>
#include "str.h"

#define USERLENGTH 31
#define CLLENGTH 256

int main(int argc, char *argv[])
{
    char userName[USERLENGTH];
    char userPass[USERLENGTH];
    pid_t pid;

    write(1, "Welcome to the Linux Shell!\n", 28);
    write(1, "Enter your username (30 characters max): ", 41);

    read(0, userName, USERLENGTH);
    write(1, "Enter your password (30 characters max): ", 41);

    read(0, userPass, USERLENGTH);

    /* will need to have error check eventually */
    write(1, "Successfully logged in, Welcome!\n", 33);

    int bytesRead;

    char commandLineInput[CLLENGTH];
    write(1, "mysh$ ", 6);
    bytesRead = read(0, commandLineInput, CLLENGTH);
    commandLineInput[bytesRead - 1] = '\0';

    while (cmp(commandLineInput, "exit"))
    {
        write(1, "mysh$ ", 6);
        bytesRead = read(0, commandLineInput, (sizeof(commandLineInput)) - 1);
        commandLineInput[bytesRead - 1] = '\0';
        pid = fork(); 

        /*
        if (pid == 0) { 
            // Some set up
            //execve();
        }
        */
    }
    


    return 0;
}
