#include <stdio.h>


int count_before_one(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            return i; 
        }
    }
    return n; 
}

int main() {
    int N;
    
    scanf("%d", &N); 

    int a[N]; 
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]); 
    }

 
    int count = count_before_one(a, N);
    printf("%d\n", count);

    return 0;
}
