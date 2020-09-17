//Author: Cole Black-Stallard cdb5655@psu.edu
//Collaborator: Nicholas Cole nyc5096@psu.edu
//Collaborator: Khalil Stroman kzs5955@psu.edu
//Collaborator: Emanuel Bassill Chuckran eab6017@psu.edu
//Section: 012R
//Breakout: 8 
#include <stdio.h>
#include<readline/readline.h>
#include<math.h>
#include<stdlib.h>

void print_n(const char*s, int n) {
  if (n == 0) {
    return;
  }
  printf("%s\n", s);
  print_n(s, n - 1); 
}
int sum_n(int n) {
  if (n != 0) 
    return n + sum_n(n - 1);
  else 
    return n; 
} 


int main(void) {
  char *nIN = readline("Enter an int: ");
  int n = atof(nIN);
  int nOUT = sum_n(n);
  printf("sum is: %d.\n", nOUT);
 
  char *sIN = readline("Enter a string: ");
  print_n(sIN, n);
  
  return 0;
}