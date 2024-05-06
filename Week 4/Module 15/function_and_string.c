#include <stdio.h>
#include <string.h>
void fun(char *c){
    int len = strlen(c);
    printf("%d\n",len);
}
int main() {
    
    char c[20]="Hello";
    fun(c);
    
    return 0;
}