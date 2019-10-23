#include <stdio.h>

int main(int argc, char* argv, char* envp) {
    int array[8] = {0xC, 0xF, 0xDD, 3, 0x1B0, 0x36, 0x10, 0x43};
    int var = 0, cnt = 0;

    while(cnt <= 7) {
        if (array[cnt] > var) {
            var = array[cnt];
        }
        cnt += 1;
    }

    printf("%d", var);
}