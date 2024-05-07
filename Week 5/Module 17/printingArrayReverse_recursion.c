#include <stdio.h>

void fun(int *ar,int n,int i){

    if (i<0) return;
    printf("%d\n",ar[i]);
    i-=1;
    fun(ar,5,i);
    
   
}



int main() {
    // Your code goes here
    int ar[]={1,2,3,40,50};
    fun(ar,5,4);
    return 0;
}