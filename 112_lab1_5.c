#include<stdio.h>
int main()
{
    int i,num,a1,max1=0,max2;
    scanf("%d" ,&num);
    for(i=0;i<num;i++)
    {
        scanf("%d" ,&a1);
        if(max1<a1)
        {
            max2=a1;
        }
    }

    return 0;
}
