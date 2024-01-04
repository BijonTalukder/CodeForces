#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        // int a, b , c, d;
         int array[4];
   for(int i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
int temp = array[0];
int count=0;
    for(int j=0;j<4;j++)
    {

        // printf("%d init",array[j]);
        if(temp<array[j]){
            //  printf("%d ad %d",array[j],temp);
            count++;

        }

    }

printf("%d\n",count);

        /* code */
    }
    
   
    // printf ("%d %d %d %d", a, b, c, d);
}