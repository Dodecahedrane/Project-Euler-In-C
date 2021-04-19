//Each new term in the Fibonacci sequence is generated by adding the previous
//two terms. By starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not
//exceed four million, find the sum of the even-valued terms.

#include<stdio.h>
#include<math.h>
int sum;

void main(){
  printf("Project Euler - Problem 2\n\n");
  int cTerm = 2;  //current term
  int pTerm = 1;  //previous term

  while (cTerm < 4000000){
    if(cTerm%2 == 0){
      sum = sum + cTerm;
    }
    int nTerm = cTerm + pTerm;    //next term
    pTerm = cTerm;
    cTerm = nTerm;
  }

  printf("%i\n", sum);
}
