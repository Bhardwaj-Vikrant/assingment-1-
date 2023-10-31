//switch with modulor function
#include<stdio.h>
void main(){
    int td,nod,rd;//td-today ,nod -number of days,rd- requried day
    printf("enter todays day number:");
    scanf("%d",&td);
    printf("enter number of days:");
    scanf("%d",&nod);
    rd = td + (nod%7); 
    if((td>7) || (td<1)){
        printf("invalid day! ");
    }
    else if((nod>=7) && (rd<=7)){
        switch(nod%7){
            case 0:printf("day %d",td);
            break;
            case 1:printf("day %d",td+1);
            break;
            case 2:printf("day %d",td+2);
            break;
            case 3:printf("day %d",td+3);
            break;
            case 4:printf("day %d",td+4);
            break;
            case 5:printf("day %d",td+5);
            break;
            case 6:printf("day %d",td+6);
            break;
        }
    }
     else if(rd>7){
            printf("day %d",rd-7);
        }
    else if((nod<7) && (rd<=7)){
        printf("day %d",td+nod);
    } 
   
}