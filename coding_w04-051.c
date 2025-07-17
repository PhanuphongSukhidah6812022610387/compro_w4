#include <stdio.h>

void countCall() {
    static int counter = 0;  // ใช้ static
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}