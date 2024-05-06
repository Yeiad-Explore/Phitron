#include <stdio.h>

void odd_even() {
    int n,num;
    int count_e = 0, count_o = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            count_e++; 
        } else {
            count_o++; 
        }
    }

    
    printf("%d %d\n", count_e, count_o);
}

int main() {
    odd_even(); 
    return 0;
}
