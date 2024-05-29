#include <stdio.h>
int main ()

{
   int a ,b,c, sum;
   scanf("%d%d%d",&a,&b,&c);
   if(c==1){
      sum = a+b;
      printf("%d + %d = %d",a,b,sum);
   }
   else if(c==2){
      sum = a-b;
      printf("%d - %d = %d",a,b,sum);
   }
   else if(c==3){
      sum = a*b;
      printf("%d * %d = %d",a,b,sum);
   }
   else {
      sum = a/b;
      printf("%d / %d = %d",a,b,sum);
   }
   return 0;
}