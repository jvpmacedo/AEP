#include <stdio.h>

int main()
{
    int n;
    
    printf("digite o valor de n: ");
    scanf("%d", &n);
    
    if(n % 2 == 0)
    {
        printf("n e par");
    }
    
    else if(n % 2 != 0)
    {
        printf("n e impar");
    }
}
