#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 0; i <= 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 10; i > 0; i--) {
    printf("%d\n", i);
  }
  for (int i = 10; i >= 0; i--) {
    printf("%d\n", i);
  }

  return 0;
}
/* 1. To create a loop that iterates 10 times one can initialize i as 0, have a test expression i < 10, and then increment by one (i++) and then have whatever statement you want repeated inside the body of the loop.
2. Start by initializing i as 0 and then having the test expression be i <= 10, and then increment i++. Then print out the value of i in the body of the loop.
3.Start by initializing i as 10, having the test expression i>=0 and then decrement i--. Then in the body of the loop there should be a statement that prints out the value of i. */
