#include"stdio.h"
#include<math.h>
int main (void)
{
    long long int i,j,temp=0,ans=0,n;
    scanf("%lld",&n);
    for(i=1;(i*i)<=n;++i)
    {
        temp=0;
        j=i;
        while(temp<n)
        {
            temp=j*i;
            if(temp<=n)
            {
                j++;
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}
