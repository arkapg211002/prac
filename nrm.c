#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float function(float);
float func_der(float);
void nrm(float,float);

void main()
{
    float e=0.0,sv;
    printf("\nEnter seed value");
    scanf("%f",&sv);
    fflush(stdin);
    printf("\nEnter allowed error");
    scanf("%f",&e);
    fflush(stdin);
    nrm(sv,e);
}

void nrm(float sv,float e)
{
    float v,h;
    v=sv;
    h=-function(v)/func_der(v);
    for(;fabs(function(v))>=e;)
    {
        if(fabs(func_der(v)>0.000000001))
        {
            h=-function(v)/func_der(v);
        }
        else
        {
            printf("\nThe function is not differentiable");
        }
        v=v+h;
    }
    printf("\nThe root is %f",v);
    printf("\nThe function value is %f",function(v));
}

float function(float x)
{
    return(x*x*x-2);
}

float func_der(float x)
{
    return(3*x*x);
}
