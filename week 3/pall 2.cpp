#include <stdio.h>
int main() 
{
  int n, b = 0, r, o;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;

    
    while (n != 0)
	 {
        r = n % 10;
        b = b * 10 + r;
        n /= 10;
    }

    
    if (o == b)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);

    return 0;
}
