#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    Vector v1 = { .data = createVector(5, 0), .length = 5 };

    for (int i = 0; i < v1.length; i++)
    {
        v1.data[i] = i * i;
    }

    char path[] = "C:/Users/schaf/Dropbox/_Coding/UdemyC/Chapter11_Files/FileWrite/OutputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "w");

    if (fp == NULL)
    {
        return 1;
    }

    // Write the values to the file
    for (unsigned int i = 0; i < v1.length; i++)
    {
        if (i < v1.length - 1)
        {
            fprintf(fp, "%d\n", v1.data[i]);
        }
        else
        {
            fprintf(fp, "%d", v1.data[i]);
        }
    }

    // Close the file
    fclose(fp);

    // Free vector data
    freeVector(&v1);

    return 0;
}
