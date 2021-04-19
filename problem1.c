//If we list all the natural numbers below 10 that are multiples of 3 or 5,
//we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

//arithmetic series sum formula: 1/2 * n * (a1 + an)
//n number of terms
//a1 is the first term (3 or 5)
//an is the nth term (999 or 995)

#include<stdio.h>
#include<math.h>

int sumSeries(int n, int f, int l){
  int i;
  i = n*(f+l);
  i = i*0.5;
  return i;
}

int main(){
  printf("Project Euler - Problem 1\n\n");

  // +3
  int three = sumSeries(floor(1000/3),3,floor(999/3)*3);

  // +5
  int five = sumSeries(floor(1000/5),5,floor(999/5)*5);

  //The set of multiples of 3 and 5 both have a common sub set of multiples of 15
  //Therefor all multiples of 15 (both 3 and 5) are counted twice. Therefor they need to be removed
  // -15
  int fifteen = sumSeries(floor(1000/15),15,floor(1000/15)*15);

  int sum = (three + five - fifteen);

  printf("%i\n", sum);
}
