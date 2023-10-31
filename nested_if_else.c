//Nested if else statement
#include<stdio.h>
void main(){
    int num;
    printf("Enter the number here: ");
    scanf("%d",&num);
    if(num%3==0){
        printf("Divisible by 3\n ");
     if(num%7==0){
        printf("Divisible by 7\n ");
      if(num%5==0){
        printf("Divisible by 5\n ");
       if(num%8==0){
        printf("Divisible by 8\n ");
        if(num%6==0){
        printf("Divisible by 6\n ");
    } else{
        printf("Not Divisible by 6\n");
    }
    } else{
        printf("Not Divisible by 8\n");
    }
    } else{
        printf("Not Divisible by 5\n");
    }
    } else{
        printf("Not Divisible by 7\n");
    }
    } else{
        printf("Not Divisible by 3\n");
    }



}