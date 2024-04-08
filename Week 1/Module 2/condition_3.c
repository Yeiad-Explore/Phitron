#include <stdio.h>

int main() {
    // Your code goes here
    int tk;
    printf("Enter Amount: ");
    scanf("%d",&tk);

    if (tk>= 5000)
    {
        printf("Will go to Cox bazar\n");
        if (tk>=10000)
        {
            printf("Will also go to saint martin\n");
        }

        
    }
    else{
        printf("Skip the tour\n");
    }
    




    return 0;
}