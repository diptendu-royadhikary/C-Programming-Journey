#include <stdio.h>
int main(){
int n,i;
int sum=0;

printf("Enter the value of n:");
scanf("%d",&n);

printf("1");
for(i=2;i<=n;i++){
    sum=sum+i;

printf("+%d",i);
}
printf("\nThe sum=%d",sum+1);

    return 0;
}
