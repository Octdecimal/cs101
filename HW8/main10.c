#include <stdio.h>

int get_digit(int n) {
    return n%10;
}

int main()
{
    int n = 1234;
    int sum = 0;
    int count = 1;
    while(n>0) {
        sum = sum*10;
        sum = sum+get_digit(n);
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
