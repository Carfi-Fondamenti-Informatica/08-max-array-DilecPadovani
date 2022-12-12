#include "lib.h";
float max_in_array(float array[])
{

    int length = sizeof(array) / sizeof(array[0]);

    float max = 0;
    for (int i = 0; i < length; i++)
    {
        if (array
                [i] > max)
        {
            max = array[i];
        };
    }
    return max;
}