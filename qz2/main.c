#include <stdio.h>

int print_spec(int i) {
    int spec = i;
    for(int x=0; x<spec; x++) {
        printf("  ");
    }
}


int print_star(int now) {
    int star;
    for(int x=0; x<now; x++) {
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
    int row = 5;
    int now = row;
    for (int i=0; i<row; i++) {
        print_spec(i);
        print_star(now);
        now--;
        printf("\n");
    }
    
    return 0;
}
