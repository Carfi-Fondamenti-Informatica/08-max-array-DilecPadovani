#include "lib.h"
float max_in_array(float array[], int lenght)
{

    float max = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (array
                [i] > max)
        {
            max = array[i];
        };
    }
    return max;
}