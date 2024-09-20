#include <stdio.h>
#include <conio.h>
int main(){
int side=4, l=2 , b=5, r=5 , h=6;
printf("Area of square is %d\n",side*side);
printf("Perimeter of square is %d\n ",4*side);
printf("perimeter of rectangle is %d\n ",2*(l+b));
printf("area of rectangle is %d\n ",l*b);
printf("area of circle is %f\n ",3.14*r*r);
printf("perimeter of circle is %f\n",2*3.14*r);
printf("Area of triangle is %d\n",(b*h)/2);
getch();
return 0;
}
