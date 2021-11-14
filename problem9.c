//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

//a^2 + b^2 = c^2

//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool evalPythag(int a,int b, int c){
    if((a*a) * (b*b) == (c*c)){
        return true;
    }
    return false;
}

bool evalOneK(int a, int b, int c){
    if(a+b+c == 1000){
        return true;
    }
    return false;
}

bool evalGreaterThan(int a, int b, int c){
    if(a < b & b < c){
        return true;
    }
    return false;
}


void main(){
  printf("Project Euler - Problem 9\n\n");
  int a = 1;
  int b = 2;
  int c = 3;

  //How to do this?
  //Is brute forcing this the best solution?

  bool found = false;
  while(!found){


      found = evalGreaterThan(a,b,c);
      found = evalOneK(a,b,c);
      found = evalPythag(a,b,c);

  }

  printf("A=%i, B=%i, C=%i",a,b,c);

}
