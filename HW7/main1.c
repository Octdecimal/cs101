#include <stdio.h>

int main()
{
    int n = 7;
    
    for (int i=1; i<=n; i++) {
        for (int a=(n-i)+i; a>0; a--) {
        	if (a>i) {
        		printf(" ");
			} else {
				printf("%d ", i);
			}
		}
        printf("\n");
    }

    return 0;
}
