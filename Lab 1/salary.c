#include <stdio.h>

int main() {
    //Define variables
    int salary, DA, HRA, GS;

    //Take user input 
    printf("Enter your basic salary = ");
    scanf("%d", &salary);
    printf("The basic salary of ramesh is %d \n",salary);

    //Adding checks
    if(salary<=178){
        printf("The salary is lower than the minimum wage.");
    }
    else {
        DA = (0.40*salary);
        printf("The dearness is %d \n", DA);

        HRA = (0.20*salary);
        printf("The house rent allowance is %d \n", HRA);

        GS = (salary + DA +HRA);
        printf("The gross salary is %d \n", GS);
    
    } 

    return 0;
}