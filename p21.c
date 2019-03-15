#include <stdio.h>
int main ()
{
    int A,D,N,i,b,c=0;
    scanf ("%d",&N);
    scanf ("%d",&A);
    scanf ("%d",&D);
    for(i=0;i <N;i++)
    {
    b=A+(i*D);

c=c+b;
    }
    printf ("%d",c);
    return 0;
}
