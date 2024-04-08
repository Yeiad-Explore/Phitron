#include <stdio.h>

int main() {
    int tk;
    printf("Enter Amount: ");
    scanf("%d",&tk);
    if (tk>=100)
    {
        printf("Godo to go");
    }
    else if(tk>=50){
        printf("cholbe");
    }
    else{
        printf("Hobena");
    }
    
    
    return 0;
}