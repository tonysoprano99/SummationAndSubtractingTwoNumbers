#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x, y;
    float a, b;

    scanf("%d\t%d", &x,&y);
    scanf("%f\t%f", &a,&b);

    printf("%d\t", x+y);
    printf("%d\n", x-y);
    printf("%.1f\t", a+b);
    printf("%.1f\n", a-b);
    return 0;
}
