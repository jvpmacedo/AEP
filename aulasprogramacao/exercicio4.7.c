#include <stdio.h>

int main()
{
   int n, x, y;
   
   printf("digite n: ");
   scanf("%d", &n);
   
   printf("digite x: ");
   scanf("%d", &x); 
   
   printf("digite y: ");
   scanf("%d", &y);
   
   if(n < x && n < y)
   {
       printf("n esta antes do intervalo");
   }
   
   else if(n > x && n > y)
   {
       printf("n esta depois do intervalo");
   }
   
   else
   {
       printf("n esta dentro do intervalo");
   }
}
