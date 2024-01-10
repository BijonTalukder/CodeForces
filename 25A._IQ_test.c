#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int odd=0,even=0,x,y;
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        {
            even++;
            x=i;
        }
        else{
            odd++;
            y=i;
        }
    }
    if(even>odd)
        printf("%d\n",y+1);
    else
      printf("%d\n",x+1); 

    // printf("%d\n",abs(even-odd));

    //  printf("%d\n",abs(even-odd));
   
}