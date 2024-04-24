#include <stdio.h>

int main() {
    
    // char a[5]= {'Y','E','I','A','D'}; or apply below approach
    char a[6]="YEIAD"; // dont forget to use null --> \0 and add 1 more size for this null 

    /*
    Approach 1:
    for(int i=0; i<5;i++){
        printf("%c\n",a[i]);
    }
    */
   //Approach 2
    printf("%s",a);
    
    return 0;
}