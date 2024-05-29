#include<stdio.h>
int factorial(int n){
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
int n;
scanf("%d",&n);
printf("fact %d",factorial(n));

}
// 4! = 4x3x2x1