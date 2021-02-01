#include<stdio.h>
int main()
{
    int num,n,i,max;
    scanf("%d" ,n);
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&num);
        if(max<num)
        {
            max=num;
        }
    }
}
