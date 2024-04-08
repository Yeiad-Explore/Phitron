#include <stdio.h>

int main() {

    char x;
    scanf("%c", &x);
    if (x >=48 && x<64){
        printf("IS DIGIT");
    }
    else if(x>='A' && x<='Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else{
         printf("ALPHA\n");
        printf("IS SMALL");
    }
    return 0;
}