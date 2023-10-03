#include <stdio.h>

int main()
{
    int b, d = 0, base = 1, r;
    
    printf("Enter the Binary Number = ");
    scanf("%d", &b);

    int t = b;
    while(t > 0)
    {
        r = t % 10;
        d = d + r * base;
        t = t / 10;
        base = base * 2;
    }

    printf("The Binary Value  = %d\n", b);
    printf("The Decimal Value = %d\n", d);

    return 0;
}
