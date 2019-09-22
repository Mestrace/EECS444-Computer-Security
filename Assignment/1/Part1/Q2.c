#include <stdio.h>
#include <string.h>

int main() {
    char src[30], dest[30];
    gets(src);
    gets(dest);
    strcat(dest, src);
    printf("String after concatenation: |%s|", dest);
    return(0);
}