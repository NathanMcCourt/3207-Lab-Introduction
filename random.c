#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(char*[]);

int main() {
    char*[] ucase = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    printf(randchar());
}
char randchar(char*[] ucase) {
    srand(time(NULL));
    char randomletter;
    for(int i = 0; i < 1; i++) {
        char randomletter = 'A' + (rand() % 26);
    }
    return randomletter;
}