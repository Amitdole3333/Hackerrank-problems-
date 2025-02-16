#include <stdio.h>

int main() {

   int Age,Annual_Income,Risk_Tolerance;
    scanf("%d %d %d",&Age,&Annual_Income,&Risk_Tolerance);
    
    if(Age<30 || (Age>=30 && Age<=50 && Annual_Income>75000 && Risk_Tolerance==3) || ( Age>50 && Annual_Income>75000 && Risk_Tolerance==3)){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
   
}
    else if((Age>=30 && Age<=50 && Annual_Income<=75000 && Risk_Tolerance==2) || (Age>=30 && Age<=50 && Annual_Income>75000 && (Risk_Tolerance==1 || Risk_Tolerance==2))){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
}
    else  if((Age>50 && !(Annual_Income>75000 && Risk_Tolerance == 3)) || ( Annual_Income<=30000 && (Risk_Tolerance==1 || Risk_Tolerance==2))){ 
        printf("Low Risk Portfolio: Suitable for conservative investments.");
        return 0;
    }
    return 0;
}