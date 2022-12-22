#include <stdio.h>

int main()
{
    int i = 12345;
    int last = i % 10000;
    int new = i - last;
    
    new = new + (last % 10) * 1000;
    last = last - last % 10;
    new = new + last / 1000;
    last = last % 1000;
    new = new + last;
    printf("%d", new);

    return 0;
}
