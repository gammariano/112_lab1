#include<stdio.h>
int main()
{
    int i,n,m,a=0,b=0; //n=จำนวนการก้าวเท้าซ้ายก่อนจะไปก้าวเท้าขวา n ก้าว , m=จำนวนคร้ังการก้าวเท้าขวาก่อนที่จะกลับไปก้าวเท้าซ้าย ,  t=จำนวนก้าวที่ตอ้งใชในการเดินเพื่อถึงจุดหมาย
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
