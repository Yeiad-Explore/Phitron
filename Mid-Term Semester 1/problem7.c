#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {   
        int n;
        scanf("%d",&n);
        int a[n]; 
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &a[i]);
        }
        int x, flag=0;
        scanf("%d",&x);
        for (int i = 0; i < n; i++)
        {
            if (a[i]==x)
            {
               flag =1;
            }
            
        }
        if (flag==1) {
            printf("YES\n"); 
        } 
        else {
            printf("NO\n"); 
        }
        
        
    }
    
    
    return 0;
}