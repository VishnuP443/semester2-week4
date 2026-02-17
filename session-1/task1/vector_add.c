
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];
    int length = sizeof(a)/4;

    /*
    Code to compute the sum
    Store your answer in array c
    Print your final answer
    */
   for (int k=0; k<length; k++){
      c[k] = a[k] + b[k];
   }
   
   for (int i=0; i<length; i++){
      printf("%.2f\n", c[i]);
   }
    return 0;
 }
