#include<stdio.h>
int main()
{
    int i,n,m,a=0,b=0; //n=จำนวนการก้าวเท้าซ้ายก่อนจะไปก้าวเท้าขวา n ก้าว , m=จำนวนคร้ังการก้าวเท้าขวาก่อนที่จะกลับไปก้าวเท้าซ้าย ,  t=จำนวนก้าวที่ตอ้งใชในการเดินเพื่อถึงจุดหมาย
    signed long int t;
    char feet,direct;
    scanf("%d %d %li" ,&n,&m,&t);
    fflush(stdin);
    scanf("%c" ,&direct);
    for(i=1;i<=t;i++)
    {
        if(direct == 'L')
        {

        }
        else if(direct == 'R')
        {

        }
    }
    printf("%c" ,direct);

    return 0;
}
