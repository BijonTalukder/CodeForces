// #include <stdio.h>

// int main()
// {      
//     int m,n,d,p,q,t;
//     scanf("%d%d%d%d%d%d",&m,&n,&d,&p,&q,&t);
//     int total_days_people=m*n*d;
//     printf("%lld",total_days_people*t*p);
//     int total_days = (total_days_people*p)/(p+q);
//     unsigned long long int total_charge1= (total_days_people*t*p);
//     unsigned long long int total_charge2= total_days*t*(p+q);
//     printf("Person : %d\nDays   : %d Days\nCharge : %llu Taka \n \nPerson : %d\nDays   : %d Days\nCharge : %llu Taka",p,total_days_people,total_charge1,p+q,(total_days_people*p)/15,total_charge2);
   
//     return 0;
// }

#include <stdio.h>

int main() {
    int M, N, D, P, Q, T;

    // Get input values
    scanf("%d %d %d %d %d %d", &M, &N, &D, &P, &Q, &T);

    // Calculate total rooms, days for P people, and total cost for P people
    int total_rooms = M * N;
    int total_days_P = total_rooms * D;
    int total_cost_P = total_days_P * P * T;

    // Calculate total people after Q people join, days for total people, and total cost
    int total_people = P + Q;
    int total_days_total = total_rooms * D / total_people;  // Adjust days based on more people
    int total_cost_total = total_days_total * total_people * T;

    // Print output in the specified format
    printf("Person : %d\n", P);
    printf("Days   : %d Days\n", total_days_P);
    printf("Charge : %d Taka\n\n", total_cost_P);
    printf("Person : %d\n", total_people);
    printf("Days   : %d Days\n", total_days_total);
    printf("Charge : %d Taka\n", total_cost_total);

    return 0;
}
