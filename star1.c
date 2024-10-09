#include <stdio.h>

int main() {
   for(int i=1;i<=4;i++){  //for rows
       for(int j=1;j<=4;j++){ // for column
           if(j==1&& i==2 || j==2 && i==2){  for spacing
               printf(" ");
           }
           else{
               printf("*");
           }
       }
       printf("\n");
   }

    return 0;
}