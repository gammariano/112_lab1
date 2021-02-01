#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,total;
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    if(0<=a<=pow(10,9))
    total=a+b;
    printf("%d" ,total);
    return 0;
}
