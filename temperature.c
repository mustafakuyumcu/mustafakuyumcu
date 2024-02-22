// MUSTAFA KUYUMCU
// 2000002006


#include <stdio.h>

int main()
{
    //printf("Hello World");

    int temperatures[7][3] = { { 7, 9, 7},
{ 11, 12, 7 },
{ 11, 13, 9 },
{ 12, 15, 10 },
{ 13, 16, 12 },
{ 14, 16, 12 },
{ 14, 16, 12} };
    int count[7] = { 0,0,0,0,0,0,0 };
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        int* row = temperatures[i];
        for (int j = 0; j < 3; j++) {


            count[i] += row[j];
            sum += row[j];

        }
        printf(" The average temperature on the %d of April is %d \n", i + 1, count[i] / 3);
    }
    printf(" The average temperature in April is %d \n", sum / 21);


    return 0;
}