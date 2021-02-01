#include<stdio.h>
#include<math.h>

double func(double x)
{
    //return (pow(x,3)+3*x-5);
    return (pow(x,10)-1);
}

void bisection(double xl,double xu,double E,int maxit)
{
    int it;
    double Ea,xr;
        for(it=1;it<=maxit;it++)
      {
        xr=xu-((func(xu)*(xl-xu))/(func(xl)-func(xu)));
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
