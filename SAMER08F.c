#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    while(n!=0)
    {
        n=n*(n+1)*(2*n+1);
        n=n/6;
        printf("%lld\n",n);
        scanf("%lld",&n);
    }
    return 0;
}
