#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, size_t n)
{

    if (n <= 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    size_t maxLength = 1;
    size_t currentLength = 1;

    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[i - 1])
        {
            ++currentLength;

            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
        }
        else
        {
            currentLength = 1;
        }
    }
    return maxLength;
}

