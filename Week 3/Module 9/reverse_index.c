#include <stdio.h>

int main() {
    int n=5;
    int a[n];
    int temp;
    for (int i = 0; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }
    int i=0, j=n-1;
    while(i<j){
        int temp=a[i];
        a[i] = a[j];
        a[j]= temp;
        i++;
        j--;

    }
    //print all the values
    for (int i = 0; i <n; i++)
    {
        printf("Index a[%d] = %d\n",i,a[i]);
    }
    
    
    return 0;
}