#include <stdio.h>


int main(){

    int a;
    a = 10;
    int *p;
    p = &a;

   *p = 23;


    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);




    return 0;
}