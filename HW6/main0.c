#include <stdio.h>

int main()
{
    int i = 23;
    
    if((i==1)||(i<<1==1024)||(i<<2==1024)||(i<<3==1024)||(i<<4==1024)||(i<<5==1024)||(i<<6==1024)||(i<<7==1024)||(i<<8==1024)||(i<<9==1024)||(i<<10==1024)) {
        printf("%d is true", i);
    } else {
        printf("%d is false", i);
    }
    
    return 0;
}
