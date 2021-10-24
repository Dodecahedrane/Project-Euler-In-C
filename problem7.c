//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?

#include<stdio.h>
#include<math.h>
#include <stdbool.h>

bool isPrime(int n){
    //https://en.wikipedia.org/wiki/Primality_test
    for(int i = 2; i < n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void main(){
  printf("Project Euler - Problem 7\n\n");

  int primesFound = 0;
  int maxPrime = 0;
  int i = 1;
  while(primesFound != 10001){
      if(isPrime(i)){
          primesFound++;
          maxPrime = i;
          i = i + 2;  //+2 because no primes are even
      } else{
        i = i + 2;  //+2 because no primes are even
      }
  }
  
  printf("10,001th prime is %i \n", maxPrime);
}
