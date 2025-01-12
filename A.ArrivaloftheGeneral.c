#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int min = 101, max = 0;
    int maxi = 0, mini = n-1;

    for (int j = 0; j < n; j++) {
        if (ar[j] > max) {
            max = ar[j];
            maxi = j;
        }
        if (ar[j] <= min) {
            min = ar[j];
            mini = j;
        }
    }
  
    if(mini>maxi)
    printf("%d\n",  maxi + (n - 1 - mini));   
    else 
  printf("%d\n",  maxi + (n - 2 - mini));   
     return 0;
}
