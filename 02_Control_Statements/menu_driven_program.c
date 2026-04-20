    /* 1.Number type check(even/odd,pos/neg,zero) 2.largest of 3 number
 3.simple calculator 4.grade system 5.character check(vow/const),exit*/

#include <stdio.h>
int main(){
int choice;

printf("-----\nMENU\n-----\n");
printf("1.Number type check\n");
printf("2.Largest of 3 numbers & middle number\n");
printf("3. Simple Calculator\n");
printf("4. grade system\n");
printf("5.character check\n");
printf("6. exit \n");


printf("Enter your choice: ");
scanf("%d",&choice);


switch(choice){

case 1:{
int number;

printf("Hey! please enter the number: ");
scanf("%d",&number);

if(number!=0){

if(number%2==0){
    printf("the number is even.\n");
}
else{
    printf("the number is odd.\n");
}
if(number>=1){
    printf(" & it is positive");
}
else{
    printf("& the no  is  negative");
}

}
else {
    printf("the number is zero.");
}
break;
}
case 2:{
    int num1,num2,num3;

    printf("Please enter the three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>=num2 && num1>=num3) printf("%d is the greatest\n",num1);
    else if(num2>=num1 && num2>=num3) printf("%d is the greatest\n",num2);
    else printf("%d is the greatest\n",num3);
    

    if((num1>num2 && num1<num3)||(num1<num2 && num3<num1)) printf("%d is middle",num1);
    else if((num2>num1 && num2<num3)||(num2<num1 && num2>num3)) printf("%d is middle",num2);
    else printf("%d is middle\n",num3);

    
    break;
}

case 3:{
int a,b,choice;

printf("Enter the two number here : ");
scanf ("%d %d",&a,&b);

printf("What you want to do:\n1.add\n 2.substract\n 3.multiply\n 4.division\n ");
scanf("%d",&choice);

switch (choice){

    case 1:
    printf("add= %d",a+b);
    break;
    
    case 2:
    printf("Substract= %d",a-b);
    break;

    case 3:
    printf("Multiplication= %d",a*b);
    break;
    
    case 4:
    if(b!=0){
    printf("Div= %f",(float)a/b);
    }
    else{
        printf("division by 0 not allowed");
    }
    break;
    default:
    printf("Invalid");

}
break;
}

case 4:{
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
break;
}
case 5:{
    char ch;

    printf("Enter a character: ");
    scanf(" %c",&ch);

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U'){
        printf("yes vowel\n");
        }
        
        else {
        printf("yes consonant\n");
        }
    }
    break;
}

case 6:
{
    printf("Exiting the  program.....");
    break;
}
default:
    printf("Invalid input");


}
    return 0;
}