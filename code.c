#include <stdio.h>
int gcd(int n1,int n2);
int main(){
input_start://label for goto statement
int num1,num2;
printf("\nEnter first integers: ");
scanf("%d", &num1);
printf("\nEnter second integer:");
scanf("%d",&num2);

if (num1 < 0|| num2 < 0) {
printf("One of the two  numbers is negative.\n");
printf("\nEnter positive numbers");
goto input_start;//go back to input start if one of the numbers is not positive         
       
        }
        
printf("\nG.C.D of %d and %d is %d.", num1, num2, gcd(num1,num2));
return 0;
}
    
int gcd(int n1,int n2){
//base condition if b==0 then a is the greatest common divisor
if(n2==0){
return n1;
   }
    
else{
 //recursive condition     
return gcd(n2,n1%n2);
}        
 
}
