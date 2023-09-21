#include <stdio.h>

int main()
{
    int a, b;
    
    printf("digite o valor de a: ");
    scanf("%d", &a);
    
    printf("digite o valor de b: ");
    scanf("%d", &b);
    
    if(a <= b )
    {
        printf("a menor ou igual a b");
    }
    
    else
    {
        printf("a maior que b");
    }
}
