#include <stdio.h>

int main(void) {
    printf("char: %d\n", sizeof(char));
    printf("shorts: %hd\n", sizeof(short));
    printf("int: %d\n", sizeof(int));
    printf("unsigned int: %u\n", sizeof(unsigned int));
    printf("long: %ld\n", sizeof(long));
    printf("long long: %ld\n", sizeof(long long));
    printf("float: %d\n", sizeof(float));

    return 0;
}
