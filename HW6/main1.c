#include <stdio.h>

int main()
{
    int i = 23;
    
    if (i % 3 == 0) {
        printf("Love ");
    }
    if (i % 5 == 0) {
        printf("IU ");
    }
    if ((i % 3 != 0) && (i % 5 != 0)) {
        printf("%d", i);
    }

    return 0;
}
