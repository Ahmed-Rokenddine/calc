#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>


int main() {
    float a,b;
    char op;
        printf("a : ");
        scanf("%f", &a);
        printf("op : ");
        scanf("%s", &op);
        printf("b: ");
        scanf("%f", &b);

        switch (op) {
            case '+' :
                printf("a + b = %.2f \n", a + b);
                break;
            case '-' :
                printf("a - b = %.2f \n", a - b);
                break;
            case '*' :
                printf("a * b = %.2f \n", a*b);
                break;
            case '/' :
                printf("a / b = %.2f \n",a/b);
                break;
        }
    float x,s,c,t;
         printf("                                welcome to the sin,cos,tan  calculator:\n");
         printf("donne la valeur de x:");
         scanf("%f",&x);
         s = sin(x);
         c = cos(x);
         t = tan (x);
         printf ("x=%f\n",x);
         printf("le sin de a est :%.2f \n le cos de a est :%.2f \n le tan de a est ;%.2f \n",s,c,t);
}









