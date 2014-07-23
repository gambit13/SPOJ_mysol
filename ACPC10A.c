#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);
    while(!(a==b && b==c && c==0))
    {
        if((a+2*(b-a))==c)
        {
            d=a+3*(b-a);
            printf("AP %d\n",d);
        }
        else
        {
            d=b/a;
            c=c*d;
            printf("GP %d\n",c);

        }
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);

    }

    return 0;
}

