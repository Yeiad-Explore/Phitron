#include <stdio.h>
int fun(char*c,int i){
   
    if (c[i] == '\0') return 0;
    i++;
    int len=fun(c,i);
    return len+1;
}
int main() {
    // Your code goes here
    char c[6]="HELLO";
    int l= fun(c,0);
    printf("%d\n", l);
    return 0;
}