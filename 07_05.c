#include <stdio.h>
int main(){
   double a,b=0;
   printf("高さ:");
   scanf("%lf",&a);
   printf("\n底辺:");
   scanf("%lf",&b);
   a = a*b/2.0;
   printf("\n面積:%lf",a);
}