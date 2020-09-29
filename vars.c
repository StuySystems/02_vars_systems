#include <stdio.h>

int main()
{
    int integer = 3;
    printf("The value of integer is %d\n", integer);
    long long_num = 3;
    printf("The sum of long_num and integer is %ld\n", integer + long_num);
    unsigned int unsignedInt = 4000000;
    printf("The value of the unsigned initialized integer is %d\n", unsignedInt);
    char letter = 'a';
    char number = 127;
    unsigned char unsChar = 255;
    printf("letter: %c, number: %c, unsigned char: %c\n", letter, number, unsChar);
    return 0;
}
