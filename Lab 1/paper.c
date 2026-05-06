#include <stdio.h>

int main()
{
    int height = 1189;
    int width = 841;
    int temp, i;

    for (i = 0; i <= 8; i++)
    {
        printf("A%d = %d mm x %d mm \n", i, height, width);

        temp = height;
        height = width;
        width = temp / 2;
    }

    return 0;
}