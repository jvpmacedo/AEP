#include <stdio.h>

int main()
{
   int x, y;
   
   printf("digite o valor de x: ");
   scanf("%d", &x);
   
   printf("digite o valor de y: ");
   scanf("%d", &y);
   
   if(y == 0)
   {
       printf("imposivel dvisao por zero");
   }
   
   else
   {
       printf("divisao por x e y: %d", x / y);
   }
}
