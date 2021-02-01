#include<stdio.h>
#include<math.h>

#define PI 3.141592
#define True 1.366025
#define h (-PI/12)

double factorial(double n)
{
    if(n>1)
    {
        return (n*factorial(n-1));
    }
    else return 1;
}

double radian(double degree)
{
    double angle_radian=degree*(PI/180);
    return angle_radian;
}

double fx1(double x,double deg)
{
    if (x==1)
    {
        return (cos(radian(deg))-sin(radian(deg)))*(h);
    }
}
double fx2(double x,double deg)
{
    if(x==2)
    {
        return (-sin(radian(deg))-cos(radian(deg)))*pow((h),2)/factorial(2);
    }
}
double fx3(double x,double deg)
{
    if(x==3)
    {
        return (-cos(radian(deg))+sin(radian(deg)))*pow((h),3)/factorial(3);
    }
}
double fx4(double x,double deg)
{
    if(x==4)
    {
        return (sin(radian(deg))+cos(radian(deg)))*pow((h),4)/factorial(4);
    }
}
double fx5(double x,double deg)
{
    if(x==5)
    {
        return (cos(radian(deg))-sin(radian(deg)))*pow((h),5)/factorial(5);
    }
}
double fx6(double x,double deg)
{
    if(x==6)
    {
        return (-sin(radian(deg))-cos(radian(deg)))*pow((h),6)/factorial(6);
    }
}

void find_derivatives(double xi,double deg)
{
    double i,fx,E;
    for(i=0;i<=xi;i++)
    {
        if(i==0)
        {
            fx=sin(radian(deg))+cos(radian(deg));
            printf("%lf\n",E=((True-fx)/True)*100);
        }
        else if(i==1)
        {
            fx=sin(radian(deg))+cos(radian(deg))+fx1(1,deg);
            printf("%lf\n",E=((True-fx)/True)*100);
        }
        else if(i==2)
        {
            fx=sin(radian(deg))+cos(radian(deg))+fx1(1,deg)+fx2(2,deg);
            printf("%lf\n",E=((True-fx)/True)*100);
        }
        else if(i==3)
        {
             fx=sin(radian(deg))+cos(radian(deg))+fx1(1,deg)+fx2(2,deg)+fx3(3,deg);
             printf("%lf\n",E=((True-fx)/True)*100);
        }
        else if(i==4)
        {
             fx=sin(radian(deg))+cos(radian(deg))+fx1(1,deg)+fx2(2,deg)+fx3(3,deg)+fx4(4,deg);
             printf("%lf\n",E=((True-fx)/True)*100);
        }
        else if(i==5)
        {
             fx=sin(radian(deg))+cos(radian(deg))+fx1(1,deg)+fx2(2,deg)+fx3(3,deg)+fx4(4,deg)+fx5(5,deg);
             printf("%lf\n",E=((True-fx)/True)*100);
        }
        else if(i==6)
        {
             fx=sin(radian(deg))+cos(radian(deg))+fx1(1,deg)+fx2(2,deg)+fx3(3,deg)+fx4(4,deg)+fx5(5,deg)+fx6(6,deg);
             printf("%lf",E=((True-fx)/True)*100);
        }
    }
}

int main()
{
    double degree;
    double n;
    printf("Find Error of SinX+cosX by Taylor series: \n");
    printf("Enter order of the series: \n");
    scanf("%lf",&n);
    printf("Enter angle in degree: \n");
    scanf("%lf",&degree);
    find_derivatives(n,degree);
    return 0;
}
