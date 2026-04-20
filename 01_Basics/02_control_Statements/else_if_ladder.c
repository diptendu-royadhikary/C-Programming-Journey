#include <stdio.h>
int main(){
float marks,fmarks;
float per;

printf("Enter your marks:");
scanf("%f",&marks);

printf("Enter full marks:");
scanf("%f",&fmarks);

per=(marks/fmarks)*100;

printf("Your percentage is: %.2f\n",per);

printf("Your grade is: ");

if(per>=80.0){
    printf("A");
}
else if(per>=60.0 && per<80.0){
    printf("B");
}
else{
    printf("Fail");
}
return 0;
}