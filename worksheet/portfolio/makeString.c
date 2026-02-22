
/*
Name: Vishnu Pandaraparambath
Student ID: 201923075
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char result[60];

    for(int k = 1; k < argc; k++){
        // Ensuring the last character doesnt end with a hyphen
        if(k != argc - 1){
            char temp[10];
            strcpy(temp, argv[k]);
            strcat(temp, "-");
            strcat(result, temp);
        }
        //just adds the last character without the hyphen
        else{
            strcat(result, argv[k]);
        }
    }
    // process the command-line data using appropriate string functions

    printf("%s\n",result); // use only this single print statement in your submitted code

    return 0;
}

