
#include <stdio.h>
#include<math.h>
   void quadratic_roots(int a,int b,int c){
     float d=(b*b)-(4*a*c);
    float x1=(-b-sqrt(d))/((2)*a);
     float x2=(-b+sqrt(d))/((2)*a);
    if(d==0){
        printf("Roots: %0.2f, %0.2f\n",x1,x2);
        printf("Type: Real and Equal");
    }
    else if(d>0){
        printf("Roots: %0.2f, %0.2f\n",x2,x1);
        printf("Type: Real and Distinct");
    }
    else if(d<0){
        float x3=-b/((2.0)*a) ;
        float x4=sqrt(-d)/((2.0)*a);
        printf("Roots: %0.2f + %0.2fi, %0.2f - %0.2fi\n",x3,x4 ,x3,x4);
        printf("Type: Complex");
    }
       // return 0;
   }
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    quadratic_roots(a,b,c);
    
   return 0;
}