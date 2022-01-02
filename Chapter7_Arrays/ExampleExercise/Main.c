#include <stdio.h>
#include <stdbool.h>

#include "FunctionsBib.h"

int main()
{
   

    int data[1000] = { 0 };

    int user_input;
    int length = 0;

    printf("Start with your input!\n");
    do
    {
        scanf("%d", &user_input);

        if (user_input > 0)
        {
            data[length] = user_input;
            length++;
        }
        else
        {
            break;
        }
    } while (true);

    int min = minArray(data, length);
    int max = maxArray(data, length);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}
