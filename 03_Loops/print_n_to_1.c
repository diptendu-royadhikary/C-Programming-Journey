#include <stdio.h>
int main(){
int n;

printf("Enter the value of n:");
scanf("%d",&n);
// if i is less then 1 then it will go infinite
for(int i=n;i>=1;i--){
    printf("%d\n",i);// negaative no not allowed
}


    return 0;
}