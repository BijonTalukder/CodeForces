#include <stdio.h>
#include<math.h>
void Fair_Division(int n){
	while(n--){

		long long int t;
		scanf("%lld",&t);

		long long int ar[t-1];
		long long int total_1=0,total_2=0;
		for(long long int i=1;i<=t;i++){
			scanf("%lld",&ar[i]);
			if(ar[i]==2)
			total_2++;
			else
			total_1++;

		}
        if(abs(total_2*2-total_1)%2==0 && total_1!=0)
        {
            printf("YES\n");
        }
		else if(total_2*2==total_1)
			printf("YES\n");
		else if(total_1%2==0 && total_2%2==0 ){
			printf("YES\n");
		}
		else{
				printf("NO\n");
		}
		}



}
 int main() {
long long int n;
scanf("%d",&n);
Fair_Division(n);
	return 0;
}