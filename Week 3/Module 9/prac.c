#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {60, 70};
    int f[7];
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    
    for (int i = 0; i < size_a; i++) {
        f[i] = a[i]; // Copying elements from a[] to f[]
        
        if (i == size_a - 1) { // Check if it's the last iteration of the outer loop
            // If so, start the inner loop to copy elements from b[]
            for (int j = 0; j < size_b; j++) {
                f[size_a + j] = b[j]; // size_a is the offset here
            }
        }
    }

    // Print all the values from array 'f'
    for (int i = 0; i < size_a + size_b; i++) {
        printf("Index f[%d] = %d\n", i, f[i]);
    }

    return 0;
}
