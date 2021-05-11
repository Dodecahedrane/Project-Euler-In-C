//A palindromic number reads the same both ways. The largest palindrome made
//from the product of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.


//Is there a way to do this without just brute forcing it??????

#include<stdio.h>
#include<math.h>

int isPalindrome(int t){
  int tCopy = t;
  int len = 0;
  while (tCopy != 0) {
    tCopy /= 10;
    len++;
  }
  char chars[len] ;
  sprintf(chars, "%i", t);

  printf("Number is %i of len %i\n",t,len );

  for(int i = 0; i <= floor(len/2); i++){
    int j = len-i;  //opposit char to check
    printf("Char A is %c and Char B is %c\n",chars[i],chars[j]);
    if(chars[i]!=chars[j]){
        printf("")
      return 0;
    }
  }
  return 1;
}

void main(){
  printf("Project Euler - Problem 4\n\n");
  int max = 0;
  for(int i = 105; i>99; i--){
    for(int j = 105; j>99; j--){
      int p = i*j;
      if(isPalindrome(p) == 1 && p > max){
        max = p;
      }
    }
  }

  printf("%i\n", max);

}
