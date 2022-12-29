#include <stdio.h>
int rows = 5;
void print_spaces(int i) {
    int spaces = i;
    for(int x=0; x<spec; x++) {
        printf("  ");
    }
}


void print_star(int now) {
    for(int x=0; x<2*now-1; x++) {
        printf("* ");
    }
}

int main()
{
    int now = rows;
    for (int i=0; i<rows; i++) {
        print_spaces(i);
        print_star(now);
        now--;
        printf("\n");
    }
    
    return 0;
}
