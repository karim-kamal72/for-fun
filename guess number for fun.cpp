#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
  int X, Y ;

  srand (time(0));

  X = rand() % 10 + 1;

  do {
    printf ("Guess the number (1 to 10): ");
    scanf ("%d",&X);
    if (X<Y) puts ("The secret number is lower");
    else if (X>Y) puts ("The secret number is higher");
  } while (X!=Y);

  puts ("Congratulations!");
  return 0;
}
