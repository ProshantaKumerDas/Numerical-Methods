#include <stdio.h>

int main()
{
    int x,y=0,i;
    int diff=2;

    printf("Enter a Number\n");
    scanf("%d",&x);

    for (i=1; i<=x; i++)
    {
        y=y + (diff*i);
        printf("%d,",y);
    }
    printf("\n");
    return 0;
}
