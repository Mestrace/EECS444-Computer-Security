#include <stdio.h>
#include <string.h>
#ifndef min
    #define min(a,b) ((a) < (b) ? (a) : (b))
#endif


int main() {
    char src[30], dest[30];
    fgets(src, sizeof(src), stdin);
    if (!strchr(src, '\n')){
        int c;
        while ((c=getchar()) != '\n' && c != EOF);
    }
    
    char *pos;
    if ((pos=strchr(src, '\n')) != NULL) *pos = '\0';
    printf("src: |%s|\n", src);

    fgets(dest, sizeof(dest), stdin);
    if ((pos=strchr(dest, '\n')) != NULL) *pos = '\0';

    printf("src: |%s|\n", src);
    printf("dest: |%s|\n", dest);
    
    printf("dest remain: %d\n", sizeof(dest) - strlen(dest) - 1);
    
    if (sizeof(dest) - strlen(dest) - 1 > 0) {
        strncat(dest, src, min(sizeof(dest) - strlen(dest) - 1, strlen(src)));
    }
    printf("src: |%s|\n", src);
    printf("dest: |%s|\n", dest);
}