#include<stdio.h>
int main()
{
int a,b,c,sum,i,j;
scanf("%d",&c);
{for(j=1;j<=c;j++)
    {scanf("%d%d",&a,&b);
    sum=0;
    if(a%2==0)
    a=a+1;
    if(b%2==0)
    b=b-1;
    for(i=a;i<=b;i=i+2)
    sum=sum+i;
    printf("Case %d: %d\n",j,sum);}
}
return 0;
}
