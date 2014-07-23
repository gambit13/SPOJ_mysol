#include<stdio.h>
long long int last (long long int a,long long int b)
{
    a=a%10;
    long long int res=1,x,r,p;
    p=a;
    while(b)
    {
        r=b&1;
        if(r==1)
        {
            res=res*p;
            res=res%10;

        }
        p=(p*p)%10;
        b=b>>1;
    }
    return res;
}
int main()
{
    long long int a,b,c,t;
    scanf("%lld",&t);
    while(t)
    {
        t=t-1;
        scanf("%lld %lld",&a,&b);
        c=last(a,b);
        printf("%lld\n",c);
    }
    return 0;
}

