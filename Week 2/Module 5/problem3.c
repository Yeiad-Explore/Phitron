#include <stdio.h>
/*this is the hard approach, but you can do it simple by just
if(char a >= 97 && a<=128)*/ 
int main() {
    
    char c ;
    scanf("%c", &c);
    int f = 0 ;

    for(int i =65; i<= 96; i++){
        if(c == i){
            c += 32;
            printf("%c", c);
            f = 1;
            break;

        }
        
    }
    if(f == 0)
    {
            for(int j = 97; j<=128; j++){
                if(c == j){
                int x = c - 32;
                printf("%c", x);
                break;

        }

    }
    }

    
    return 0;
}

