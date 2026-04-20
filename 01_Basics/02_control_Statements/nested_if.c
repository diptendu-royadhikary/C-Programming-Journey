#include <stdio.h>
int main(){
int age;
int id;

printf("Enter your age: ");
scanf("%d",&age);

printf("Do you have id: (press 1 for yes and press 0 for no)\n");
scanf("%d",&id);

if(age>=18){
    if(id==1){
        printf("You are eligible for vote");
    }
    else{
    printf("You are not eligible because you don't have id!");
    }
}
else{
    printf("You are not eligible for your age");
}


    return 0;
}