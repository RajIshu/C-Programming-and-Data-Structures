// Demonstrate the concept of call by value and call by reference. Use a C program to swap two numbers.

#include <stdio.h>
#include <stdbool.h>

float percent(int, int, int, int);
bool passFail(float *);

int main(){

    int maths, science, english, hindi;

    printf("Enter respective subjects marks: ");
    printf("\nMaths: ");
    scanf("%d", &maths);
    printf("Science: ");
    scanf("%d", &science);
    printf("English: ");
    scanf("%d", &english);
    printf("Hindi: ");
    scanf("%d", &hindi);

    // Call by Value
    float per = percent(maths, science, english, hindi);
    printf("Percentage: %.2f", per);

    // Call by Reference
    bool status = passFail(&per);

    if(status)
        printf("\nPass");
    else
        printf("\nFail");

    return 0;
}

float percent(int maths, int science, int english, int hindi){
    int total = maths + science + english + hindi;

    float percent = ((float)total / 400) * 100;

    return percent;
}

bool passFail(float *perc){
    // printf("\nper: %u", perc);
    // *perc += 36;
    if(*perc > 35){
        return true;
    }
    return false;
}
