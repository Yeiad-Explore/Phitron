#include <stdio.h>

int main() {
    
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {   
        for (int j = 0;j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
        
    }
    printf("\n");
    printf("----------------------------");
    printf("\n");

    //For printing all columns
    for (int i = 0; i < row; i++)
    {   printf(" a[%d] = ",i);
        for (int j = 0;j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }

    printf("----------------------------");
    printf("\n");
    int count = 0;
        for (int i = 0; i < row; i++)
    {   
        for (int j = 0;j < col; j++)
        {
            if (a[i][j]==0)
            {
                count++;
            }
            
        }
        printf("\n");
        
    }
    printf("%d\n",count);

    return 0;
}