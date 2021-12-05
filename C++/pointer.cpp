
#include <stdio.h>
#include <stdlib.h>

void update(int *x,int *y) {
    // Complete this function
    int c=*x;
    *x = *x+*y;
    *y= (abs(c-*y));
}

int main() {
    int x, y;
    int *pa = &x, *pb = &y;

    scanf("%d %d", &x, &y);
    update(pa, pb);
    printf("%d\n%d", x, y);

    return 0;
}
