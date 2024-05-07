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
/*
    //For printing all columns
    for (int i = 0; i < row; i++)
    {   printf(" a[%d] = ",i);
        for (int j = 0;j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
*/
    printf("\n");
    //To print a specific row
    int r = 1;
    for (int i = 0; i < col; i++)
    {
        printf(" Row %d = %d \n",r,a[r][i]);
    }
    printf("\n");
    //To print a Specific column
    for (int i = 0; i < row; i++)
    {
         printf("Column %d = %d \n",r,a[i][r]);
    }
    

    return 0;
}