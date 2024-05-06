#include <stdio.h>
#include <string.h> 


int is_palindrome(char s[]) {
    int length = strlen(s); 
    for (int i = 0; i<length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
           
            return 0; 


        }
    }
    return 1; 
}

int main() {
    char s[1000]; 
    fgets(s, 1000, stdin); 
    s[strcspn(s, "\n")] = 0; 

    int result = is_palindrome(s);
    if (result == 1) {
        printf("Palindrome\n");
    } 
    else {
        printf("Not Palindrome\n");
    }

    return 0;
}
