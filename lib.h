#ifndef AGE_CHECK
#define AGE_CHECk
#include <stdio.h>

void verifyAge(int age) {
    if (age < 0 || age > 130) printf("Wrong Age!");
    printf("You are ");

    if (age < 12) printf("Child");
    else if (age < 18) printf("Teenager");
    else if (age < 55) printf("Adult");
    else printf("Old");
    printf("\n");
}

#endif
