#include <stdio.h>
int main(){
   double a,b,c=0;
   scanf("%lf %lf %lf", &a,&b,&c);
   a = (a+b+c)/3;
   printf("avarage = %d", (int)a);
}