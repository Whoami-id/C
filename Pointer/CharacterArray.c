#include <stdio.h>


 // *(A + i) is same as A[i]
 // (A + i) is same as &A[i]


void print(char *c){

    c[0] = 'A';
    while(*c != '\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n");
}


int main(){



char *s = "Hallo"; // string gets stored as compile time constanct
//s[0] = 'A'; //can not be modified

char c [] = "Hello";
print(c);




    





    return 0;
}