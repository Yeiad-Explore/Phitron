#include <stdio.h>
void fun(int i){
    if (i <1) return; //Base Case
    printf("%d\n",i);
    fun(i-1);
}
int main() {
    
    fun(5);
    return 0;
}