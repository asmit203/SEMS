#include <stdio.h>

int main()
{
    char subject = 0x0;//00000000
    char mask = 0x1;//00000001
    mask <<= 2;//00000100
    subject |= mask;//00000100
    printf("%i", subject);

    return 0;
}