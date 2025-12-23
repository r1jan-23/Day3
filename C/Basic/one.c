#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    if (a < b && a > c) {
        p   rintf("a is smallest");
    }
    else if (b < a && b > c) {
        printf("b is smallest");
    }
    else {
        printf("c is smallest");
    }

    return 0;
}
