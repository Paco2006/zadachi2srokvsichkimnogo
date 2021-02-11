#include<stdio.h>

int main()
{
    int n,k=2;
    printf("n= ");
    scanf("%d",&n);
    while(n%k!=0)
    {
        k=k+1;
    }
    if(n==k)
    {
        printf("Da, n e prosto chislo");
    }
    else
    {
        printf("Ne, n ne e prosto chislo");
    }

    return 0;
}
