#include <stdio.h>

void expt(double x, int y){
  
  double answer = 1.0;

  int counter = abs(y);

  for(int i = 0; i < counter; i++){
    answer = x* answer;
    
  }  
   if(y < 0)
     printf("%lf\n", (1.0/ answer));
   else if
     (y==0)
     printf("%lf\n", 1.0);
   else
     printf("%lf\n",  answer);
}


void main(void){
  expt (0.5, 0);
  expt(0.5, 2);
  expt(0.25, -2);
  expt (2, 3);
  expt(-2, -3);
  expt(-0.4, 2);
  expt(1.2, 2);
}
