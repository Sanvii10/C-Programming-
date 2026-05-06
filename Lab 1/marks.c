#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, agg, per;

    printf("Enter your marks for subject 1 = ");
    scanf("%f", &m1);

    printf("Enter your marks for subject 2 = ");
    scanf("%f", &m2);

    printf("Enter your marks for subject 3 = ");
    scanf("%f", &m3);

    printf("Enter your marks for subject 4 = ");
    scanf("%f", &m4);

    printf("Enter your marks for subject 5 = ");
    scanf("%f", &m5);

    if (m1 < 0 || m2 < 0 || m3 < 0 || m4 < 0 || m5 < 0 || m1 > 100 || m2 > 100 || m3 > 100 || m4 > 100 || m5 > 100)
    {
        printf("The marks can't be negative or greater than 100");
        
    }
    else {
        agg = (m1+m2+m3+m4+m5);
        printf("The aggregate marks are %.2f \n", agg);

        per = ((agg/500)*100);
        printf("The percentage marks are %.2f \n", per);
    }

    return 0;
}