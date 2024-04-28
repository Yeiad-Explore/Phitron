#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int total = m1 + m2;
        int new_days;

        if (total > 0) {
            
            new_days = (m1 * d) / total;
        } 
        else {
            
            new_days = d;
        }


        int few_days = d - new_days;
        printf("%d\n", few_days);
    }
    
    return 0;
}
