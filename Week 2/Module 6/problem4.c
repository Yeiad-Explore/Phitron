#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int m = 0;
    for(int i = 0; i<=n;i++){
        int x;
        scanf("%d",&x);
        if (x>m){
            m = x;
        }
    }
    printf("%d",m);
    return 0;
}