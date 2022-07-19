#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A 64
#define B 128

int main(void) {
    char buf[A];
    memset(buf, 0, A);
    buf[B] = 90;
    printf("%d", buf[B]);
}