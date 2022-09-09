
#include <stdio.h>
#include <math.h>


int main() {
    int a,b,c;
    printf("                                Welcome to equations calculator:\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
    float x,delta,x1,x2;
    delta=pow(b,2)-4*a*c;
    if (delta < 0)
    {
       printf("cette equation n'as pas de solution!");
    }
    else if (delta == 0)
    {
        printf("cette equation a une seule solution : %f",x=-b/2*a);
    }
    else if (delta> 0)
    printf("cette equation a deux solution : x1=\n x2=\n",x1=-b-sqrt(delta)/2*a,x2=-b+sqrt(delta)/2*a);
}
    

