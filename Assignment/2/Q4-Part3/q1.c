#include <stdio.h>

int main(int argc, char* argv, char* envp) {
    int a = 3, b = 5, c = 0;
    c = (a * b) - (a / 2);
    printf("%d", c);
    return 0;
}