#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int *ptr;
    // ptr=malloc(28);//28 byte
    //calloc(n,sizeof(int ))
     ptr=(int*)malloc(n*sizeof(int));
     for ( i = 0; i < n; i++)
     {
        scanf("%d",(ptr+i));
        /* code */
     }
       for ( i = 0; i < n; i++)
     {
      printf("%d th position -> %d\n",i,*(ptr+i));
     }
     free(ptr);
}