#include <stdio.h>

void print_roof (int n) {
    int m = n;
    for(int i=1; i<=n; i++) {
        m--;
        for(int j=0; j<m+2*i-1;j++) {
            if(j<m) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

void print_wall (int n) {
    for(int i=0; i<n+2; i++) {
        for(int j=0; j<2*n-1; j++) {
            if(i==0||i==n+1) {
                printf("*");
            } else if(j==0||j==2*n-2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n = 4;
    print_roof(n);
    print_wall(n);
    return 0;
}
