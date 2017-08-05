#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float m,c1;
    int c,q=25,d=10,n=5,p=1,w=0,x=0,y=0,z=0,quarter=0,dime=0,nickel=0,penny=0,total=0;
    do
    {
    printf("Money owed to customer:");
    m=GetFloat();
    }
    while(m<0);
    c1=(m*100);
    c=round(c1);
    if(c>0)
    {
        w=(c)/q;
        quarter=round(w);
        x=(c-(quarter*q))/d;
        dime=round(x);
        y=(c-(quarter*q)-(dime*d))/n;
        nickel=round(y);
        z=(c-(quarter*q)-(dime*d)-(nickel*n))/p;
        penny=round(z);
        total=(quarter+dime+nickel+penny);
        printf("%d\n",total);
    return 0;
    }
}