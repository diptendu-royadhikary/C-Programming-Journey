#include <stdio.h>
int main(){
int bill,unit;

printf("Enter the unit: ");
scanf("%d",&unit);

if(unit<=100)
bill=unit*1; // 1-100 = 1 rs/unit
else if(unit<=200)
bill=100*1+(unit-100)*2;// first 100 unit*1 then remaining(unit-100) *2
else
bill=100*1+100*2+(unit-200)*3;

printf("Your bill for %d units is = %d rupees",unit,bill);
    return 0;
}