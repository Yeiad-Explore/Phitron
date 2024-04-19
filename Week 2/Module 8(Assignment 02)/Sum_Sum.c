#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int pos = 0;
    int neg = 0;
    int val;

    for(int i=0; i<n; i++){
        scanf("%d", &val); 
        if (val > 0){
            pos += val; 
        } 
        else if (val < 0){
            neg += val; 
        }
        
    }

    printf("%d %d\n", pos, neg); 

    return 0;
}
