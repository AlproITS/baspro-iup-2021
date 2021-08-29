#include <stdio.h>

int main()
{
    // & means the address
    float a, c;
    char b;
    int answer;
    scanf("%d %c %d", &a, &b, &c);
    if (b == '+')
    {
        answer = a + c;
    }
    if (b == '*')
    {
        answer = a * c;
    }
    if (b == '-')
    {
        answer = a - c;
    }
    if (b == '/')
    {
        answer = a / c;
    }
    printf("%d\n", answer);
}
