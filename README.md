RESEARCH:

Recursion is a programming technique where a function calls itself repeatedly until a specific base condition is met. A function that performs such self-calling behavior is known as a recursive function, and each instance of the function calling itself is called a recursive call.
https://www.geeksforgeeks.org/c/c-recursion/

ANALYSES:
Key Components of a Recursive Function:
Base Case: This is the condition that determines when the recursion should stop. Without a base case, the function would call itself indefinitely, leading to a stack overflow error. The base case provides a direct solution for the smallest subproblem.
Recursive Case: This is the part of the function where it calls itself with modified parameters, typically moving towards the base case. The function processes a portion of the problem and then delegates the remaining, simpler part to a new instance of itself.


IDEATE:
The greatest common divisor (GCD) of two numbers can be found using a recursive function in C.

gcd(int a, int b) function:
This function takes two integers, a and b, as input.
Base Case: if (b == 0): If b is 0, then a is the GCD, and the function returns a. This is the termination condition for the recursion.
Recursive Step: return gcd(b, a % b);: If b is not 0, the function calls itself with b as the new first argument and the remainder of a divided by b (a % b) as the new second argument. This process continues until the second argument becomes 0, at which point the base case is met.
BUILD:
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

    








    
TEST:
CASE 1:
Enter first integers: -6

Enter second integer:4
One of the two  numbers is negative.

Enter positive numbers
Enter first integers: 6

Enter second integer:4

G.C.D of 6 and 4 is 2.

=== Code Execution Successful ===

CASE 2:
Enter first integers: 12

Enter second integer:16
G.C.D of 12 and 16 is 4.

=== Code Execution Successful ===
CASE 3:
Enter first integers: -13

Enter second integer:2
One of the two  numbers is negative.

Enter positive numbers
Enter first integers: 13

Enter second integer:2

G.C.D of 13 and 2 is 1.

=== Code Execution Successful ===
CASE 4:
Enter first integers: 121

Enter second integer:144

G.C.D of 121 and 144 is 1.

=== Code Execution Successful ===
