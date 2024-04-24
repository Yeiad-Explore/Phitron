#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg =  0;
    for (int i =1; i<=n;i++){
        int x;
        scanf("%d",&x);
        if(x%2==0){
            even +=1;
        }
        if(x%2!=0){
            odd+=1;
        }
        if(x>0){
            pos+=1;
        }
        if(x<0){
            neg+=1;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}