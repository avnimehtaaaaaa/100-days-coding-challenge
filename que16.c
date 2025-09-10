#include <stdio.h>
int main()
 {
    int a, b ,c ;
    printf("enter a number :");
    scanf("%d %d %d" , &a, &b, &c);

    if (a >= b && a >= c) {
        printf("largest is %d\n",a);
    }
    else if (b >= a && b >= c) {
        printf("largest is %d\n",b);
    }
    else {
        printf("largest is %d\n",c);
    }
     return 0;

    }