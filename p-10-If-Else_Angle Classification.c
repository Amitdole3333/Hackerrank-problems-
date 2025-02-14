#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x;
    scanf("%d",&x);
    int y=x%360;
    if(x==0){
            printf("Acute Angle");
}
       else if( y>0 && y<90){
            printf("Acute Angle");
        }
        else if(y==90){
            printf("Right Angle");
        }
        else if(y>90 && y<180){
            printf("Obtuse Angle");
        }
        else if(y==180){
            printf("Straight Angle");
        }
        else if(y>180 && y<360){
            printf("Reflex Angle");
        } 
        else if(y==0 && x!=0){
            printf("Full Rotation");
        } 
    
    return 0;
}
