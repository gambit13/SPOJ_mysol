#include<stdio.h>
int main()
{
    long long int t,f,n,z;
    scanf("%lld",&t);
    while(t)
    {
        t=t-1;
        scanf("%lld",&n);
        z=0;
        while(n)
        {
            z=z+n/5;
            n=n/5;

        }
        printf("%lld\n",z);
    }
    return 0;
}
