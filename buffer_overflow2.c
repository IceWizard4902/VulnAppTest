#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A 64
#define B 128

int main(void) {
    char buf[A];
    int index;
    memset(buf, 0, A);
    scanf("%d", &index);
    buf[index] = 90
    printf("%d", buf[index]);
}