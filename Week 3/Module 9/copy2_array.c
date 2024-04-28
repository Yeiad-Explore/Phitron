#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5};
    int b[]={60,70};
    int f[10];
    int size_a=sizeof(a) / sizeof(a[0]);
    int size_b=sizeof(b) / sizeof(b[0]);
    for(int i=0;i<5;i++){
        f[i] = a[i];
        for(int j =0; j<size_b;j++ ){ // used j for range
            f[size_a+j]=b[j];
        }

    }

    for (int i = 0; i <7; i++)
    {
        printf("Index a[%d] = %d\n",i,f[i]);
    }
    return 0;
}