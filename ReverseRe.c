#include<stdio.h>
void solve(int i,int n)
{
    if (i>n)
    {
        return;
        /* code */
    }
    solve(i+1,n);
    printf("%d",i);
    

}
int main()
{
    solve(1,10);
}