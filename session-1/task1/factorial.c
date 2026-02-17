
/*
 * Factorial
 */

 #include <stdio.h>

 int factorial(int n){
   int d = 0;
   
   if(n==0){
      printf("0! = 1");
   }

   else{
                  
      while (n > 0)
      {
         d = d + (factorial(n) * factorial(n-1));
      }
      return d;
      
   }
 }

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   for (int k=0; k<20; k++){
      int value = factorial(k);
      printf("%d",value);
   }
    
    return 0;
 }




