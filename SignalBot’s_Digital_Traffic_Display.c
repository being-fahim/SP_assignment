#include <stdio.h>

int main(){
    int M = 1; //As my id is 262-16-115, so M = 1
    int R = (M % 3) + 4;
    int i, j;

    for( i = 1; i <= R; i++){  //outer loop

        for( j = 1; j <= i; j++){  //inner loop

            printf("%d", i);
        }
        printf("\n");
    }

}

