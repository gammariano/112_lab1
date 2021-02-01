#include<stdio.h>
int main()
{
    int i,n,m,a=0,b=0;
    signed long int t;
    char feet,direct;
    scanf("%d %d %li" ,&n,&m,&t);
    fflush(stdin);
    scanf("%c" ,&feet);
    if(feet == 'L')
    {
        for(i=1;i<=t+1;i++)
        {
            a=a+n;
            if(a>t)
            {
                direct='L';
                break;
            }
            a=a+m;
            if(a>t)
            {
                direct='R';
                break;
            }
        }
    }
    else if(feet == 'R')
    {
        for(i=1;i<=t+1;i++)
        {
            a=a+n;
            if(a>t)
            {
                direct='L';
                break;
            }
            a=a+m;
            if(a>t)
            {
                direct='R';
                break;
            }
        }
    }
    printf("%c" ,direct);
    return 0;
}
