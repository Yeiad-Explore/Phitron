#include <stdio.h>

int main() {
    int a[]={20,40,10,30};
    int temp;
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            printf("%d %d \n",  a[i], a[j]);
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
    return 0;
}