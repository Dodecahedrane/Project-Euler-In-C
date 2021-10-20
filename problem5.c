//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<stdio.h>
#include<math.h>
#include <stdbool.h>

bool IsDivisableToInts(double test){
    bool AllInts = true;
    for(double i = 1; i <= 20; i++){
        double res = test/i;
        int intOnly = res;
        if(res != intOnly){
            AllInts = false;
            break;
        }
    }
    return AllInts;
}

void main(){
  printf("Project Euler - Problem 5\n\n");

  bool found = false;
  double test = 20;

  while (!found){
    if(IsDivisableToInts(test)){
        found = true;
        printf("Answer: %f \n",test);
     }
     test++;
  }
}
