
#include <stdio.h>

int main()
{

    
    int i = 0, j;
    int count = 0;

    
    do {
        j = 0;

        do {
            printf("%d  ", count++);
            j++;
        } while (j < 3);
    

        printf("\n");
        i++;
    } while (i < 3);

    return 0;
}