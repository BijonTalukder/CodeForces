#include<stdio.h>
void swap(int* x,int* y)
{
    int temp = *x;
    *x=*y;
    
    *y=temp;

}
int main(){
    int a=5,b=9;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}