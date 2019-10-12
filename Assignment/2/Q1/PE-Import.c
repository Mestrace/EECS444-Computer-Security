// EECS 444 Homework 2 Question 1, Author: Yida Liu, Oct. 10, 2019s
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>


/**
 * Function to check whether a file exists or not using 
 * access() function. It returns 1 if file exists at 
 * given path otherwise returns 0.
 */
int isFileExists(const char *path)
{
    // Check for file existence
    if (access(path, F_OK) == -1)
        return 0;

    return 1;
}

void main()
{
    const char *filepath = "/PE-1.txt";
    const char *words = "I want to learn PE file format!";

    FILE *file;
    char *buffer;

    if (isFileExists(filepath))
    {
        // file exists
        file = fopen(filepath, "r+");
        fseek(file, 0, SEEK_END);
        long filesize = ftell(file);

        // allocate memory to contain the whole file:
        buffer = (char *)malloc(sizeof(char) * filesize);
        if (buffer == NULL)
        {
            fputs("Memory error", stderr);
            exit(2);
        }

        // write file to buffer
        fseek(file, 0, SEEK_SET);
        size_t fread_result = fread(buffer, 1, filesize, file);
        if (fread_result != filesize) {
            printf("%d - %d\n", fread_result, filesize);
            fputs ("Reading error",stderr); exit (3);
        }

        // scan the occurances of words in buffer
        if (strstr(buffer, words) == NULL) {
            // append the words to the back of the file
            fputs(words, file);
        }
        else{
            printf("%s", buffer);
        }
    }
    else
    {
        // file does not exist
        file = fopen(filepath, "a");
        fputs(words, file);
    }
    // finish up
    fclose(file);
    free(buffer);
    return;

}