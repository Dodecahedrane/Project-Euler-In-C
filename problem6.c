//The sum of the squares of the first ten natural numbers is,
//1^2+2^2+3^2+4^2+5^2+6^2+7^2+8^2+9^2+10^2 = 385
//The square of the sum of the first ten natural numbers is,
//(1+2+3+4+5+6+7+8+9+10)^2 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
//3025-385 = 2640

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<stdio.h>
#include<math.h>
#include <stdbool.h>

int sumOfSquares(int max){
    int sum = 0;
    for(int i = 0; i <= max; i++){
        sum = sum + pow(i,2);
    }
    return sum;
}

int squareOfSum(int max){
    int sum = 0;
    for(int i = 0; i <= max; i++){
        sum = sum + i;
    }
    return pow(sum,2);
}

void main(){
  printf("Project Euler - Problem 6\n\n");
  int diff = squareOfSum(100) - sumOfSquares(100);
  printf("Difference = %i\n",diff);

}
