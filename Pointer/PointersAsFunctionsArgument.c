#include <stdio.h>


// Call by value/ Reference

void increment(int a){

    a = a + 1;
    printf("Address of variable a in increment  = %d\n", &a);
}

void increment2(int *a){

    *a = *a + 1;
    printf("Address of variable a in increment2  = %d\n", &a);
}



int main(){

    int a;
    a = 10;
    printf("Address of variable a in main = %d\n", &a);
    increment(a);
    printf("a = %d\n", a);
    increment2(&a);
    printf("a = %d\n", a);


    return 0;
}