#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[10000]; 
        scanf("%s", s); 

        int c_up = 0, c_low = 0, c_dig = 0;
       
        for (int i = 0; s[i] != '\0'; i++) {
            if (isupper(s[i])) {
                c_up++;
            } 
            else if (islower(s[i])) {
                c_low++;
            } 
            else if (isdigit(s[i])) {
                c_dig++;
            }
        }


        printf("%d %d %d\n", c_up, c_low, c_dig);
    }

    return 0;
}
