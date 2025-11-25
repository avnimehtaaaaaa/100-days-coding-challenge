//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Month {
    JANUARY = 10,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    printf("Months with explicit enum values starting from 10:\n\n");

    printf("JANUARY   = %d\n", JANUARY);
    printf("FEBRUARY  = %d\n", FEBRUARY);
    printf("MARCH     = %d\n", MARCH);
    printf("APRIL     = %d\n", APRIL);
    printf("MAY       = %d\n", MAY);
    printf("JUNE      = %d\n", JUNE);
    printf("JULY      = %d\n", JULY);
    printf("AUGUST    = %d\n", AUGUST);
    printf("SEPTEMBER = %d\n", SEPTEMBER);
    printf("OCTOBER   = %d\n", OCTOBER);
    printf("NOVEMBER  = %d\n", NOVEMBER);
    printf("DECEMBER  = %d\n", DECEMBER);

    return 0;
}
