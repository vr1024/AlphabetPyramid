//
//  main.c
//  PyramidTwo
//
//  Created by Vibhaw on 07/05/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i,j;
    char limit,value='A';
    printf("Enter uppercase character to be printed in triangle at last row: ");
    scanf("%c",&limit);

    for (i=1; i<=(limit - 'A' + 1); i++) {
        for (j=1; j<=i; j++) {
            printf("%c", value);
        }
        value++;
        printf("\n");
    }
    return 0;
}
