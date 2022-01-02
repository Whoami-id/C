#include <stdio.h>


int Add(int a, int b){
    return a + b;
}

int main(){

    int c;

    //Pointer to function that should take (int, int) as argument and return int
    int (*p)(int, int);
    p = &Add;

    c = p(2,3);
    printf("%d", c);







    return 0;
}