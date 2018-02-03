#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int intX,intY;
    intX = -28;
    
    float floatX = 28.25;
    intY = abs(intX);
    
    printf("abs(%d)= %d \n", intX,intY);
    intY = abs(floatX);
    printf("abs(%.2f)= %d \n", floatX, intY);
    return 0;
    
    }
