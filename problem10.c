//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//Find the sum of all the primes below two million.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(long int n){
    //refactor to use sieve of Eratosthenes
    for(long int i = 2; i < n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void main(){
  printf("Project Euler - Problem 10\n\n");
  long int sum = 2; //2 is prime but not check in loop

  
  for(long int i = 3; i < 2000000; i=i+2){

      if(isPrime(i)){
          printf("Prime: %ld\n",i);
          sum = sum + i;
      }
  }

  printf("%ld\n",sum);
}
