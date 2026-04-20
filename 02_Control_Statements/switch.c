#include <stdio.h>
int main(){
    int choice;

    printf("Enter your choice:(1/2/3)\n");
    scanf("%d",&choice);

    switch(choice){
    
        case 1:
        printf("You have selected one");
        break;
        
        case 2:
        printf("You have entered two");
        break;

        case 3:
        printf("You have enetered three");
        break;

        default:
        printf("Invalid");// not match any case

    }
    

    return 0;
}