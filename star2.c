#include <stdio.h>

int main() {
    int count =0;
   for(int i=1;i<=4;i++){  //for rows
       for(int j=1;j<=i;j++){ // for column
       count=count+1;
       printf("%d",count);
          
       }
       printf("\n");
   }

    return 0;
}