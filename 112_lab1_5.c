#include<stdio.h>
int main()
{
    int i,num,a1,max1=0,max2;
    scanf("%d" ,&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d" ,&a1);
        if(a1>max1)
        {
            if(max1==a1)
            {
                max2=i;
                break;
            }
            else
            {
                max2=i;
            }
            max1=a1;

        }
    }
    printf("%d %d" ,max2,max1);
    return 0;
}
