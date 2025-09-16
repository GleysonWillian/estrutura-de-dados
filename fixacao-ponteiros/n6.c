#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[3] = {1, 2, 3};
    int *p = v;

    for(int i = 0; i < 3; i++){
        *(p+i) = *(p+i) *2;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    

    return 0;
}