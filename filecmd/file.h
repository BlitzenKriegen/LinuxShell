/*
  Names: Kiril S.
         Enrik R

  Module: File Commands

  Purpose: The File module is meant to hold all of the
  commands within the custom shell that deal with file management.

  Details: The module is activated by a call to one of its
  functions in the shell prompt, which then passes in the
  arguements made by the user to to program.
 */
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER 256
#define INSUFFICIENT_ERR 26
#define FEW_ARG "Error: Too Few Arguements\n"
struct stat st;

/*
  Input: File to display
  Output: Contents of the file
  Purpose: To display the contents of a given file or pseudo-file.
  Details: Assuming no errors, the function reads in a file into a buffer
  and then outputs the buffer onto the console, using the read() and write()
  system calls respectively.
*/
int catFunction(char *argv[]);

/*
  Input: Name of Source file, Name of Destination file
  Purpose: Copy the contents of one file into another file
  Details: The function passes in the names of the source and destination files.
  Assuming no errors, the function will then read in the contents of the source file
  (using read()) into a buffer. Once this is completed, the function will then write
  to the destination file (using write()) with the buffer given.
  
  NOTE: The files created by cp are being interpreted as an excecutable when
  displayed using bash ls. However, the contents of the file are indeed copied
  from source to destination.
*/
int cpFunction(char *argv[]);

/*
  Input: File to be removed
  Purpose: Delete a file
  Details: The function takes in the name of the file and calls the unlink()
  system call to delete the file from the filesystem.
*/
int rmFunction(char *argv[]);

/*
  Input: File to be moved.
  Purpose: Move a file/rename a file
  Details: The function takes in the name of the file and calls the link()
  system call to give a file a new relative path to be identified with in the
  filesystem.
*/
int mvFunction(char *argv[]);
