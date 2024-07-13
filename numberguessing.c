#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main() {
  int random_number;

  // Seed the random number generator (optional for better randomness)
  srand(time(NULL));

  // Generate a random number between 0 and RAND_MAX (system-defined maximum)
  random_number = rand();

  // Scale the number to the desired range (0 to 100)
  random_number = random_number % 101;

  //printf("Random number between 0 and 100: %d\n", random_number);
int no_of_guesses=7;
int guess;

do{
  printf("Guess the number: \n");
  scanf("%d",&guess);
  if (guess>random_number)
  {
    printf("lower no. please!\n");
  }
  else{
    printf("Higher no. please!\n");
  }
  no_of_guesses--;
}while(no_of_guesses!=0);
printf("you exhausted your lives Now you have %d attempts\n",no_of_guesses);
  
  return 0;
}
