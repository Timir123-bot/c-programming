#include <stdio.h>
union Number {
    int i;
    float f;
};
int main() {
    union Number num;
    num.i = 1024;  
    printf("Integer: %d\n", num.i);
    num.f = 3.14; 
    printf("Float: %.2f\n", num.f);
    printf("After assigning float, integer: %d\n", num.i);
    return 0;
}
