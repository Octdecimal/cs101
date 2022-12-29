#include <stdio.h>

int count(int i) {
    int j=i;
    int bina=0;
    while(j!=0) {
        if(j%2==1) {
            bina++;
        }
        j=j/2;
    }
    return bina;
}

int main()
{
    int i = 15;
    printf("%d",count(i));
    
    return 0;
}
