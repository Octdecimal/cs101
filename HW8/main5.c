#include <stdio.h>
int spaces = 7;

void print_spaces(int i) {
    for(int x=0; x<i; x++) {
        printf(" ");
    }
}

void print_stars(int j) {
    for(int x=0; x<2*j+1; x++) {
        printf("*");
    }
    printf("\n");
}

void print_top() {
    int a = 3;
    int b = 5;
    int c = 7;
    for(int j=0, i=spaces; j<a; j++, i--) {
        print_spaces(i);
        print_stars(j);
    }
    for(int j=0, i=spaces; j<b; j++, i--) {
        print_spaces(i);
        print_stars(j);
    }
    for(int j=0, i=spaces; j<c; j++, i--) {
        print_spaces(i);
        print_stars(j);
    }
}

void print_truck() {
    for(int x=0; x<5; x++) {
        print_spaces(spaces);
        print_stars(0);
    }
}

int main()
{
    printf("  X'mas tree!\n");
    print_top();
    print_truck();
    return 0;
}
