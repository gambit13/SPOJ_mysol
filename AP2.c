#include"stdio.h"

int main (void)
{
    int i,t;
    long long int a2, a3,s,a,d,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a2,&a3,&s);
        if ( s==0 )
        {
            return 1;
        }
        n=2*s/(a2+a3);

        d = (a3-a2) / (n-5);
		a=a2-(2*d);


        printf("%lld\n", n);
        for (i=0; i<n; i++)
        {
            printf("%lld ", a+(i*d));
        }
        printf("\n");
    }
    return 0;
}
