#include <stdio.h>

int number_plus(int n) {
    int i;
    int sum = 0;
    if(n<0) {
        i = 0-n;
    } else {
        i = n;
    }
    while(i>0) {
        if(n<0&&i<10) {
            sum = sum - i%10;
        } else {
            sum = sum + i%10;
        }
        i = i/10;
    }
    return sum;
}

int main()
{
    int a = -999;
    int b = 999;
    printf("%d\n",number_plus(a));
    printf("%d\n",number_plus(b));
    return 0;
}
