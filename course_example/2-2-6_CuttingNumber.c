#include <stdio.h>

void print_binary(int x)
{
    int mask = 1 << (sizeof(int) * 8 - 1);
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        putchar((x & mask) ? '1' : '0');
        mask >>= 1;
    }
}

int main()
{
    int x = 53191;
    short sx = (short)x;
    int y = sx;
    printf("%d\n", x);
    printf("binary representation of x: ");
    print_binary(x);
    putchar('\n');
    printf("%d\n", y);
    printf("binary representation of y: ");
    print_binary(y);
    putchar('\n');
    return 0;
}