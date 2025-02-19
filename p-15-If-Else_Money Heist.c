#include <stdio.h>

int main() {

     int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9;
    scanf("%d %d %d %d %d %d %d %d %d %d",&d0,&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);
    int index1,rotation1;
    int index2,rotation2;
    int index3,rotation3;
    scanf("%d %d\n",&index1,&rotation1);
    scanf("%d %d\n",&index2,&rotation2);
    scanf("%d %d\n",&index3,&rotation3);
    
    if(index1==0)
    {
        d0=(d0+rotation1)%10;
    }
    else if(index1==1) {
        d1=(d1+rotation1)%10;
    }
     else if(index1==2) {
        d2=(d2+rotation1)%10;
    }
     else if(index1==3) {
        d3=(d3+rotation1)%10;
    }
     else if(index1==4) {
        d4=(d4+rotation1)%10;
    }
     else if(index1==5) {
        d5=(d5+rotation1)%10;
    }
     else if(index1==6) {
        d6=(d6+rotation1)%10;
    }
     else if(index1==7) {
        d7=(d7+rotation1)%10;
    }
     else if(index1==8) {
        d8=(d8+rotation1)%10;
    }
     else if(index1==9) {
        d9=(d9+rotation1)%10;
    }
    
    if(index2==0)
    {
        d0=(d0+rotation2)%10;
    }
    else if(index2==1) {
        d1=(d1+rotation2)%10;
    }
     else if(index2==2) {
        d2=(d2+rotation2)%10;
    }
     else if(index2==3) {
        d3=(d3+rotation2)%10;
    }
     else if(index2==4) {
        d4=(d4+rotation2)%10;
    }
     else if(index2==5) {
        d5=(d5+rotation2)%10;
    }
     else if(index2==6) {
        d6=(d6+rotation2)%10;
    }
     else if(index2==7) {
        d7=(d7+rotation2)%10;
    }
     else if(index2==8) {
        d8=(d8+rotation2)%10;
    }
     else if(index2==9) {
        d9=(d9+rotation2)%10;
    }
    
    if(index3==0)
    {
        d0=(d0+rotation3)%10;
    }
    else if(index3==1) {
        d1=(d1+rotation3)%10;
    }
     else if(index3==2) {
        d2=(d2+rotation3)%10;
    }
     else if(index3==3) {
        d3=(d3+rotation3)%10;
    }
     else if(index3==4) {
        d4=(d4+rotation3)%10;
    }
     else if(index3==5) {
        d5=(d5+rotation3)%10;
    }
     else if(index3==6) {
        d6=(d6+rotation3)%10;
    }
     else if(index3==7) {
        d7=(d7+rotation3)%10;
    }
     else if(index3==8) {
        d8=(d8+rotation3)%10;
    }
     else if(index3==9) {
        d9=(d9+rotation3)%10;
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n",d0,d1,d2,d3,d4,d5,d6,d7,d8,d9);
    
    
    return 0;
}