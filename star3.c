#include <stdio.h>

int main() {
    int lines;
    printf("Enter the lines");
    scanf("%d",&lines);
   for(int i=0;i<=lines;i++){  //for rows
       for(int j=0;j<=lines;j++){ // for column
      if(i==0||i==lines-1||j==lines-i-1){
          printf("*");
      }else{
          printf(" ");
      }
          
       }
       printf("\n");
   }

    return 0;
}