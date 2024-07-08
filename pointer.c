#include<stdio.h>
int main()
{
    int a;
    int* p;
    int ara[3]={5,6,7};
    printf("%p\n",ara);
    p=&a;
    printf("%p\n",p);
     a =5;
    
    *p=7;
    printf("%d\n",a);
    //pointer to pointer
    int x=10;
    int* poin = &x;
    printf("%p\n",poin);
    int** q=&poin;
    **q=10;
    printf("%d\n",x);
}