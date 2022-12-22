#include <stdio.h>

int main()
{
    int x = 1;
    int y = 1;
    
    for (int y=1;x<10;y++) {
        printf("%d*%d=%d\t",x,y,x*y);
        if (y==9) {
            y=0;
            x++;
            printf("\n");
        }
    }
    
    return 0;
}
