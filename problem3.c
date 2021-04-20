//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include<stdio.h>
#include<math.h>

long int n = 600851475143;


long int getMaxPF(){
  int p = 2;
  while (n>=p*p){
    if(n%p==0){
      printf("%i *", p);
      n = n/p;
    } else{
      p++;
    }
  }
  
  return n;
}


void main(){
  printf("Project Euler - Problem 3\n\n");

  long int max = getMaxPF();

  printf("%li\n", max);
}
