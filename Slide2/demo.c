#include <stdio.h>
int main(){
    #define PI 3.14
    float pii = 3.14;
    float r;
    printf("Nhap ban kinh: ");
    scanf("%f", &r);
    //xuat ban kinh va chu vi
    printf("Ban kinh: %.2f\n", r);
    printf("Chu vi 1: %.2f\n", 2*PI*r);
    printf("Chu vi 2: %.2f\n", 2*pii*r);
    //pii = 3.16;
    // PI = 3.16;
    printf("Chu vi 3: %.2f\n", 2*pii*r);
    return 0;
}