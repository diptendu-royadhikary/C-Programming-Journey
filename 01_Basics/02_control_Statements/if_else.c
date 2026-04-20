#include<stdio.h>
int main(){
int age;

printf("Enter your age: ");
scanf("%d",&age);

if(age>=18){
    printf("Eligible for vote");
}
else{
    printf("You are not eligible for vote");// whwn condition false automatically = else run
}
    return 0;
}