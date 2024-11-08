#include<stdio.h>
int main()
{
    int n;
    FILE *inputFile;
    inputFile = fopen("newf.txt","r");
    char ch =fgetc(inputFile);
    // fputc for write file
    while (1)
    {
        char ch = fgetc(inputFile);
        if(ch ==EOF){
            break;
        }
        /* code */
    }
    
    scanf("%d",&n);
    int s=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
        s+=a;
      
    }
    printf("sum -> %d",s);
    
}