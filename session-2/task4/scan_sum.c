
#include <stdio.h>

int main( void ) {
    int i,j;
    char operator;
    char buff[100];  
    int n = 100;
  
    printf("Enter a string: ");
    // Read input from the user
    fgets(buff, n, stdin);
    printf("You entered: %s", buff);
    // define suitable data
    sscanf(buff, "%d %c %d",&i,&operator,&j);
    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    printf("Numbers extracted [%d, %d]\n",i,j);
    printf("Operator used %c\n", operator);
    return 0;
}