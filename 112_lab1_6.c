#include<stdio.h>
int main()
{
    int i,n,m,a=0,b=0; //n=�ӹǹ��á�����ҫ��¡�͹��仡�����Ң�� n ���� , m=�ӹǹ���ѧ��á�����Ң�ҡ�͹���С�Ѻ仡�����ҫ��� ,  t=�ӹǹ���Ƿ�����㹡���Թ���Ͷ֧�ش����
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
        }
    }
    else if(feet == 'R')
    {

    }
    printf("%c" ,direct);

    return 0;
}
