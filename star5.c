#include <stdio.h>

int main() {
    int lines;
    printf("Enter the lines");
    scanf("%d",&lines);
   for(int i=1;i<=lines;i++){  //for rows
       for(int j=1;j<=i;j++){ // for column
      printf("%d",j);
          
       }
       printf("\n");
   }

    return 0;
}