#include<stdio.h>
void func(int x,int y ,int* p,int*q){
    if (x>y)
    {
        *p=x;
        *q=y;
        /* code */
    }
    else {
        *p=y;
        *q=x;
    }
    
}
int main(){
    int a=5,b=12;
    int large,small;
    func(a,b,&large,&small);
    printf("large %d\n small %d",large,small);
}