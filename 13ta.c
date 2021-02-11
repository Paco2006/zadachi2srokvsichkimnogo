#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("a=");
    scanf ("%d",&a);
    printf ("b=");
    scanf ("%d",&b);
    c=a;
    a=b;
    b=c;
    printf ("novo a=%d",a);
    printf ("\nnovo b=%d",b);
    return 0;
}
