#include<stdio.h>
int main()
{
    double time24,time12;
    scanf("%lf" ,&time24);
    if(time24==12.00)
    {
        printf("%.2lf p.m." ,time24);
    }
    else if(time24==0.00)
    {
        printf("%.2lf a.m." ,time24);
    }
    else if(time24>12.00&&time24<24.00)
    {
        time12=time24-12;
        if(time24>0.00&&time24<12.00)
        {
            printf("%.2lf a.m." ,time12);
        }
        else if(time24>12.00&&time24<24.00)
        {
            printf("%.2lf p.m." ,time12);
        }
    }
    else
    {
        if(time24>0.00&&time24<12.00)
        {
            printf("%.2lf a.m." ,time24);
        }
        else if(time24>12.00&&time24<24.00)
        {
            printf("%.2lf p.m." ,time24);
        }
    }
    return 0;
}
