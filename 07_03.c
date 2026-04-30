#include <stdio.h>
int main(){
   double a,b,c=0;
   printf("apple:");
   scanf("%lf",&a);
   printf("\norange:");
   scanf("%lf",&b);
   printf("\nstrovery:");
   scanf("%lf",&c);
   a = a*100 + b*88 + c*398;
   printf("\nsum = %d", (int)a);
}