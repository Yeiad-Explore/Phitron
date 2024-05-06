#include <stdio.h>

int main() {
    int n, i, j, num_chars, s, k;
    

    scanf("%d", &n);
    k = 2 * n - 1;  

    
    for (i = 0; i < k; i++) {
        if (i < n) {
            num_chars = 2 * i + 1;
        } 
        else {
            num_chars = 2 * (k - i - 1) + 1;
        }
        
        //sapce
        s = (k - num_chars) / 2;

        for (j = 0; j < s; j++) {
            printf(" ");
        }

       
        if (i % 2 == 0) {
            
            for (j = 0; j < num_chars; j++) {
                printf("#");
            }
        } 
        else {
           
            for (j = 0; j < num_chars; j++) {
                printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}
