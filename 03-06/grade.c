#include <stdio.h>
/* The problem with the program was the fact that there are no bounds in the if statements. So every number put in that is above 60 would be a D because the program would take you all the way through the the if statements and they would all be true, but the last if statement would change letter and give it a valu e'D'.So if i put in 90 I would still get D as the value for letter, because the way the if statements are set up D would be true for 90. */ 
int main(void) {
  int grade = 80;
  char letter = 'f';    /* by default... */

  if (grade >= 90) {
    letter = 'a';
  }
  if (grade >= 80 & grade < 90) {
    letter = 'b';
  }
  if (grade >=  70 & grade < 80) {
    letter = 'c';
  }
  if (grade >= 60 & grade < 70) {
    letter = 'd';
  }
  printf("%c\n", letter);
  return 0;
}
