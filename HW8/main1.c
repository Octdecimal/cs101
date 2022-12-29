#include <stdio.h>

int print_spec(int i, int row) {
    for(int x=0; x<row-i; x++) {
        printf("  ");
    }
}


int print_star(int i) {
    int star;
    for(int x=0; x<i; x++) {
        if(x==0) {
            star = 1;
        } else {
            star = star + 2;
        }
    }
    for(int x=0; x<star; x++) {
        printf("* ");
    }
}

int main()
{
    int row = 10;
    for (int i=1; i<=row; i++) {
        print_spec(i, row);
        print_star(i);
        printf("\n");
    }
    
    return 0;
}
