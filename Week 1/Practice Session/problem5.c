#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){

        if(i%5==0){
            printf("%d",i);
            printf(" Yes\n");
        }
        else{
             printf("%d",i);
             printf(" No\n");

        }

    }
    return 0;
}