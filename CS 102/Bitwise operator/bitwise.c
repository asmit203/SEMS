#include <stdio.h>
#include <stdlib.h>
int recr(int);
int main()
{
    char buffer[50];
    int subject = 0x27; //hexadecimal 0x11 is hexadecimal -> 1*16+1
    printf("%d",subject);

    return 0;
}

int recr(int a)
{
    if (a == 0)
    {
        return 0;
    }

    // printf("%d\n", a % 2);
    return a % 2 + 10 * recr(a / 2);
}

