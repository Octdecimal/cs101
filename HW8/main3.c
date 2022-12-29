#include <stdio.h>
int layer = 0;
void get_binary(int i) {
    if(layer%4==0&&i/2==0&&i%2==0) {
        return;
    }
    layer++;
    get_binary(i/2);
    layer--;
    printf("%d",i%2);
    if(layer%4==0) {
        printf(" ");
    }
}

int main()
{
    int i = 6;
    get_binary(i);
    
    return 0;
}
