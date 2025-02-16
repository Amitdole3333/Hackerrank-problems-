#include <stdio.h>

int main() {
int path;
    scanf("%d",&path);
    switch(path){
        case 1: {printf("Player chooses the Left path.\n");
            int x;
            scanf("%d",&x);
            if(x==1){
                printf("Poor choice, Game Over!\n");
                break;
                     }
            else if(x==2){
                printf("Player found a bridge.\n");
                int y;
                scanf("%d",&y);
                if(y==1){
                    printf("Player crosses the bridge safely.\n");
                    int c;
                    scanf("%d",&c);
                    if(c==1){
                    printf("All that glitters is not gold, Game Over!\n");
        
                }
                else if(c==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                    
                }
                else if(c==3){
                    printf("Congratulations!! You won the treasure.\n");
                   
                             }
                }
                else if(y==2){
                    printf("Poor luck, Game Over!\n");
                    
                             }
            }
            break;
    }
        case 2:{printf("Player chooses the Middle path.\n");
       int num;
            scanf("%d",&num);
            if(num==582){
                printf("Player solved the puzzle.\n");
                int z;
                scanf("%d",&z);
                if(z==1){
                    printf("All that glitters is not gold, Game Over!\n");
                    
                }
                else if(z==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                    
                }
                else if(z==3){
                    printf("Congratulations!! You won the treasure.\n");
                    
                 }
            }
                 else{
                    printf("Foolish player, Game Over!\n");
                   
                }
    break;
}
                case 3:{printf("Player chooses the Right path.\n");
                int a;
                scanf("%d",&a);
                if(a==30){
                    printf("Player solved the puzzle.\n");
                    int b;
                    scanf("%d",&b);
                    if(b==1){
                    printf("All that glitters is not gold, Game Over!\n");
                       
                }
                else if(b==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                    
                }
                else if(b==3){
                    printf("Congratulations!! You won the treasure.\n");
                    
                             }
                }
                else{
                    printf("Foolish player, Game Over!\n");
                   
                }
             break;   
    }
           
    }
 
    return 0;
}