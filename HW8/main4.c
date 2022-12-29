#include <stdio.h>

int round_func(float f) {
    int i = f * 10;
    if(i%10>=5) {
        return i/10 + 1;
    } else {
        return i/10;
    }
}

int main()
{
    float f = 1.4f;
    printf("%d",round_func(f));
    
    return 0;
}
