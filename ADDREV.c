#include<stdio.h>
long long int rev(long long int n)
{
    long long int x=0;
    int i,r,k;
    while(n)
    {
        r=n%10;
        n=n/10;
        x=x*10+r;
    }
    return x;
}
int main()
{
    long long int n1,n2,sum,r,d,t;
    scanf("%lld",&t);
    while(t)
    {
        t=t-1;
        scanf("%lld%lld",&n1,&n2);
        n1=rev(n1);
        n2=rev(n2);
        sum=n1+n2;
        sum=rev(sum);
        printf("%lld\n",sum);

    }
    return 0;
}
