#include <stdio.h>

void update(int *a,int *b) {
    int ko =*a+*b;
    int jo =*a - *b;
    *a=ko;
    
    *b= (jo < 0) ? -jo : jo; // make sure to use this as in some cases a can be bigger
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
