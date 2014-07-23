#include<stdio.h>
int main()
{
    int t,x,y,n;
    scanf("%d",&t);
    while(t)
    {
        t=t-1;
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            if(x%2==0)
                n=2*x;
            else
                n=2*x-1;
            printf("%d\n",n);
        }
        else if(x==y+2)
        {
            if(x%2==0)
                n=x+y;
            else
                n=x+y-1;
            printf("%d\n",n);
        }
        else
            printf("No Number\n");
    }
    return 0;
}
