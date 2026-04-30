#include <stdio.h>
int main(){
   double a,b,c=0;
   printf("a:");
   scanf("%lf",&a);
   printf("\nb:");
   scanf("%lf",&b);
   printf("\nc:");
   scanf("%lf",&c);
   a = a-9*b-6*c;
   printf("\n参加できないのは%d人", (int)a);
}