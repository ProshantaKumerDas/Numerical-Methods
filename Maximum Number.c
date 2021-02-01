#include <stdio.h>

int main()
{
    int x[20][20];
    int i,j,n1,n2,n;

    printf("Enter number of Row\n",n1);
    scanf("%d",&n1);

    printf("\nEnter number of Collum\n",n2);
    scanf("%d",&n2);
    printf("\n");

    for (i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            scanf("%d",&x[i][j]);

            if (x[i][j]<n)
            {
                n=x[i][j];
            }

        }

    }
    printf("The smallest number is %d\n",n);

    return 0;
}
