#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool flag = false;

    scanf("%d", &n);

    if (n % 3 == 0) {
        printf("Fizz");
        flag = true;
    }
    if (n % 5 == 0) {
        printf("Buzz");
        flag = true;
    }
    if (!flag) {
        printf("%d", n);
    }
    printf("\n");

    return 0;
}