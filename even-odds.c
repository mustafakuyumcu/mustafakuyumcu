//Mustafa Kuyumcu
//2000002006
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define N 5

float average_odds(int array[]);

float average_evens(int array[]);

bool compare(float first_num, float second_num);

int main()
{
    int array[N];
    float avera_odds, avera_evens;

    printf("Enter 5 numbers: "); // say user to write 5 numbers

    for (int x = 0; x < N; ++x) {
        scanf("%d", &array[x]);
    }

    avera_odds = average_odds(array);
    avera_evens = average_evens(array);

    printf("The average of odd(s) : %.1f\n", avera_odds);    //to find average of odds and evens
    printf("The average of even(s) : %.1f\n", avera_evens);

    if (compare(avera_odds, avera_evens) == true) {
        printf("The average of odd(s) is greater than the average of even(s).\n");  // to print the greatest average of evens
    }
    else {
        printf("The average of odd(s) is less than the average of even(s).\n");  // to print the greatest average of odds
    }

    return 0;
}

float average_odds(int array[]) {   // calling array to find odds and we find summation of odds
    float avera_odds, summation = 0, count = 0;

    for (int x = 0; x < N; ++x)
        if (array[x] % 2 != 0) {
            summation += array[x];
            count++;
        }
    

avera_odds = summation / count;

    return avera_odds;
}

float average_evens(int array[]) {  // calling array to find evens and we find summation of evens
    float avera_evens, summation = 0, count = 0;

    for (int x = 0; x < N; ++x) {
        if (array[x] % 2 == 0) {
            summation += array[x];
            count++;
        }
    }

    avera_evens = summation / count;

    return avera_evens;
}

bool compare(float first_num, float second_num) {   // taking avg odds and evends and define the biggest
    bool comp;

    if (first_num > second_num) {
        comp = true;
    }
    else {
        comp = false;
    }

    return comp;
}