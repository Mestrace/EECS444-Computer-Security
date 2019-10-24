#include <stdio.h>

int main(int argc, char* argv, char* envp) {

    int cnt = 0x64;
    int array[3];

    while (cnt < 0x3E7) {
        
        array[2] = cnt / 100;

        array[1] = (array[2] * -0x64 + cnt) / 10;
        
        array[0] = cnt - cnt / 10 * 10;

        if (array[0] * array[0] * array[0] +
            array[1] * array[1] * array[1] + 
            array[2] * array[2] * array[2] == cnt)
            printf("%d %d %d %d\n", array[0], array[1], array[2], cnt);
        cnt += 1;
    }

    return 0;
}