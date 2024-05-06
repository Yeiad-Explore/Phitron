#include <stdio.h>
void fun(int *p){
    // Deference
    *p = 250;

}



int main() {
    int x = 10;
    printf("main x value initial = %d\n",x);
    printf("------------------------------\n");
    fun(&x);//x er address pass kora hoyeche
    printf("main x value after update = %d\n",x);    
    return 0;
}