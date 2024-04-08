#include <stdio.h>

int main() {
    int x,y;
    float fl;
    char c;
    printf("Enter 2 numbers, 1 flat and a character\n");
    scanf("%d%d %f %c", &x,&y, &fl, &c);
    printf("Num 1: %d, Num 2: %d, float: %.2f, Character %c", x, y, fl, c);
    
    return 0;
}