#include <stdio.h>

int main()
{
    double PI = 4.0f;
    double sum = 0.00000f;
    int t;
    int x = 1;
    
    for(int i=1; ; x=x+2) {
        if (i%2==0) {
            sum = sum - PI/x;
        } else {
            sum = sum + PI/x;
        }
        t = sum * 100000;
        if (t==314159) {
            break;
        }
        i++;
    }
    printf("%d", x);
    
    return 0;
}
