#include<stdio.h>
int main()
{
    unsigned long long int n,a,b;
    scanf("%llu" ,&n);
    a=n%3;
    b=n%11;
    printf("%llu %llu" ,a,b);
    return 0;
}
