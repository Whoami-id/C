#include <stdio.h>


int main(){


    int A[] = {2,4,5,7};
    printf("%d\n",A);
    printf("%d\n",&A[0]);
    printf("%d\n",A[0]);
    printf("%d\n",*A);


    for(int i = 0; i< 4; i++){
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+1);
        printf("Address = %d\n", A[i]);
        printf("Address = %d\n", *(A+1));
    }




    return 0;
}