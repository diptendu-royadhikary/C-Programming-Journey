#include <stdio.h>
int main(){

printf("even numbers:\n");
for(int i=1;i<=100;i++){
    if(i%2==0){
        printf("%d\n",i);
    }
}
printf("\nodd numbers:\n");
for(int i=1;i<=100;i++){
    if(i%2!=0){
        printf("%d\n",i);
    }
}

    return 0;
}