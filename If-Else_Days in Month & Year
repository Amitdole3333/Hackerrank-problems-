#include <stdio.h>

int main() {
    int month, year;
    scanf("%d", &month);
    scanf("%d", &year);
    if(year<1 && (month<1 || month>12)){
     printf("Invalid Month\n");
      printf("Invalid Year\n");
  }
    else if(month<1 || month>12){
     printf("Invalid Month\n");
  }
    else if(year<1 ){
     printf("Invalid Year\n");
  }
    if(year>=1 && month>=1 && month<=12){
switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31");
            break;
            
        case 2: 
             if(year%4 != 0)
        {
            printf("28");
        }
            else if(year%100 != 0)
            {
                printf("29");
            }
            else if(year%400 == 0)
            {
                printf("29");
            }
            else
            {
                printf("28");
            }
            break;
            
        case 4:
        case 6:
        case 9:
        case 11: printf("30");
            break;
    }
    }
    
    return 0;
}
