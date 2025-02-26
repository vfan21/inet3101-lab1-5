#include <stdio.h>
#include "math.h"

int main() {

    int a = 10, b = 5;
    
    int sum = addTwoInts(a, b);
    int difference = subtractTwoInts(a, b);

    printf("Adding %d and %d gives us: %d\n", a, b, sum);
    printf("Subtracting %d from %d gives us: %d\n", b, a, difference);

    return 0;
}