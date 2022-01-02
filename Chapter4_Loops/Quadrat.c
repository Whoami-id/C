#include <stdio.h>

int main()
{
    

    int is_valid_number = 0;
    float a;

    while (is_valid_number == 0)
    {
        printf("Please enter the value for a: ");
        scanf("%f", &a);

        if (a > 0.0)
        {
            is_valid_number = 1;
        }
        else
        {
            printf("You entered a not valid number!\n");
        }
    }

    float perimeter = 4 * a;
    float area = a * a;

    printf("Permieter %f, area %f", perimeter, area);

    return 0;
}
