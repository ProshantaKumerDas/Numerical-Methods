//Proshanta Kumer Das
#include<stdio.h>
#include<math.h>

void trapezoidal(int n,double h,double f[])
{
    int i;
    double sum,trap;
    sum=f[0];
    for(i=1;i<n-1;i++)
    {
        sum=sum+(2*f[i]);
    }
    sum=sum+f[n];
    trap = h*sum/2;
    printf("The integral value is: %lf",trap);

}

float INT(float n)
{
    n=n/2;
    return n=ceil(n);
}

double simpson_1_3(double h,int n, double f[])
{
    int i;
    double sum,sim_1_3;
    sum=f[0];
    for(i=1;i<n-2;i++)
    {
        sum=sum+(4*f[i])+(2*f[i+1]);
    }
    sum=sum+(4*f[n-1])+f[n];
    sim_1_3=h*(sum/3);
    return sim_1_3;
}

double simpson_3_8(double h,double f0,double f1,double f2,double f3)
{
    double sim_3_8;
    return sim_3_8=(3*h*(f0+3*(f1+f2)+f3))/8;
}

void simpson(int n,double a,double b,double f[])
{
    int m;
    double h,odd,sum=0,simp;
    h=(b-a)/n;
    if(n>1){
        m=n;
        odd=n/2-INT(n/2);
        if(odd>0 && n>1)
        {
            sum=sum+simpson_3_8(n,f[n-3],f[n-2],f[n-1],f[n]);
            m=n-3;
        }
        if(m>1)
        {
            sum=sum+simpson_1_3(h,m,f);
        }
    }

    simp=sum;
    printf("The integral value is: %lf",simp);
}

int main()
{
    int n,i,flag=0;
    double f[20],x[20],temp,temp2;
    printf("Enter number of data points:\n");
    scanf("%d",&n);
    printf("Enter X & F(X)\n");
    for(i=0;i<n;i++)
    {
         printf("Enter X%d : \n",i);
         scanf("%lf",&x[i]);
         printf("Enter f[%d] : \n",i);
         scanf("%lf",&f[i]);
    }

    temp=x[1]-x[0];
    for(i=0;i<n-2;i++)
    {
        temp2=x[i+2]-x[i+1];
        if(temp==temp2)
        {
            flag++;
        }
        else {
            flag=0;
        }
    }

    if(flag==n-2)
    {
        simpson(n-1,x[0],x[n-1],f);
    }
    else
    {
        float h;
        h=(x[n-1]-x[0])/n;
        trapezoidal(n-1,h,f);
    }
    return 0;
}
