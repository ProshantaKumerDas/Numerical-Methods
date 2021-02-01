#include<stdio.h>
#include<math.h>

float func(float x)
{
    return (pow(x,3)+3*x-5);
}

void bisection(double xl,double xu,double E,int maxit)
{
    int it;
    double Ea,xr;
    if(xl==0)
    {
        xr=xl;
    }
    else if(xu==0)
    {
        xr=xu;
    }
    else {
    for(it=1;it<=maxit;it++)
    {
        xr=(xl+xu)/2;
        if(func(xl)*func(xr)<0)
        {
            Ea=((xr-xu)/xr)*100;
            xu=xr;
        }
        else if(func(xl)*func(xr)>0)
        {
            Ea=((xr-xu)/xr)*100;
            xl=xr;
        }
//        else if(Ea<E)
//        {
//            printf("After %d Iteration the root is: %lf",it,Ea);
//        }
    }

    }
    printf("After %d Iteration the error is: %lf \n",it,Ea);
    printf("The root is: %lf ",xr);

}

int main()
{
    double xl,xu;
    double E;
    int maxit;
    printf("Enter Lower bound & Upper bound:\n");
    scanf("%lf %lf",&xl,&xu);
    printf("Enter allowed Error E:\n");
    scanf("%lf",&E);
    printf("Enter max iteration:\n");
    scanf("%d",&maxit);
    bisection(xl,xu,E,maxit);
    return 0;
}
