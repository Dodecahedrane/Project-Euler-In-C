//A palindromic number reads the same both ways. The largest palindrome made
//from the product of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.

#include<stdio.h>
#include<math.h>
#include <stdbool.h>

int isPalindrome(int intToCheck){
  char strToCheck[6];
  sprintf(strToCheck, "%d", intToCheck);

  //This is a proper shit solution. need to do this properly at some point
  char a = strToCheck[0];
  char b = strToCheck[1];
  char c = strToCheck[2];
  char d = strToCheck[3];
  char e = strToCheck[4];
  char f = strToCheck[5];

  if(a==f & b==e & c==d){
      return 1;
  }
  else{
      return 0;
  }
}

void main(){
  printf("Project Euler - Problem 4\n\n");

  int max = 0;
  for(int i = 999; i>99; i--){
      for(int j = 999; j>99; j--){
        int p = i*j;
        if(isPalindrome(p) == 1){
            if(p>max){
                max = p;
            }
        }
    }
  }

  printf("%i\n",max);
}
