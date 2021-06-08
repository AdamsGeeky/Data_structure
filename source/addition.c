#include<stdio.h>
/*
program explanation
%d is a format spacefication which is d For intarger
&a id variable addressing pointer 
scanf() is build in funtion user for taking input form the user
printf() also is build in funtion used for printing text to the screen
int main() ist the universal global funtion whiout the program woundt execute
return 0, 0 indecate succseful complilation
*/
int main(){
    // variable declaration
    int a, b, c;
//taking input from the user for a
    printf("\t \t enter the value of a ");
    scanf(" %d", &a);
printf("\n\n");
//taking input form the user for b
    printf("\t \t  enter the value of b  ");
    scanf(" %d", &b);
printf("\n\n");

// for addition of two number
     c = a + b;
//printing out the result
    printf("\t \t the sum of two number is  %d \n ", c);

   

    return 0;
}