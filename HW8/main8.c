#include <stdio.h>
int layer = 0;
void binary_triangle (int i) {
    for(int x=0; x<layer+2*i-1; x++) {
        if(x<layer) {
            printf(" ");
        } else {
            printf("*");
        }
    }
    printf("\n");
    if(i==1) {
        return;
    } else {
        layer++;
        binary_triangle(i-1);
        layer--;
    }
    for(int x=0; x<layer+2*i-1; x++) {
        if(x<layer) {
            printf(" ");
        } else {
            printf("*");
        }
    }
    printf("\n");
}

int main()
{
    int i = 4;
    binary_triangle(i);
    return 0;
}
