#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int z;
    int y = 0;
    for(int x = 1; x<=10; x++){
        y = x+y;
        z = x*y;
        printf("%d, %d, %d, \n", x, y, z);
    }
}
