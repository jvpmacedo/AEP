#include <stdio.h>

int main()
{
    int x, y;
    
    printf("digite x: ");
    scanf("%d", &x);
    
    printf("digite y: ");
    scanf("%d", &y);
    
    if(x % y == 0)
    {
        printf("y divisor de x");
    }
    
    else if(y % x == 0)
    {
        printf("x divisor de y");
    }
    
    else
    {
        printf("x nao e divisor de y e y nao e divisor de x");
    }
    
}
