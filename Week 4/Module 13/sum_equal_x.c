#include <stdio.h>

int main() {
    // Your code goes here
    int x = 8;
    int a[]={5,2,3,10,7};
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 1; i < len ; i++)
    {
        for (int j = i+1; j <=len; i++)
        {
            if (a[i]+a[j]==x)
            {
                printf("YES FOUND\n");
                printf("%d + %d = %d",a[i],a[j],x);
                break;
            }
            
        }
        
    }
    
    return 0;
}   