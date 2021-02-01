#include<stdio.h>
int main()
{
    float time24,time12;
    scanf("%f" ,&time24);
    if(time24==12.00)
    {
        printf("%.2f p.m." ,time24);
    }
    else if(time24==0.00)
    {
        printf("%.2f a.m." ,time24);
    }
    else if(time24>12.00&&time24<24.00)
    {
        time12=time24-12;
        if(time24>0.00&&time24<12.00)
        {
            printf("%.2f a.m." ,time12);
        }
        else if(time24>12.00&&time24<24.00)
        {
            printf("%.2f p.m." ,time12);
        }
    }
    else
    {
        if(time24>0.00&&time24<12.00)
        {
            printf("%.2f a.m." ,time24);
        }
        else if(time24>12.00&&time24<24.00)
        {
            printf("%.2f p.m." ,time24);
        }
    }
    return 0;
}
