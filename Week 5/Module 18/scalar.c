#include <stdio.h>
//Square Matrix hote hbe
//Only diagonal bade baki shb value 0 thakbe

int main() {
int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int flag=0;

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
    if (row != col)
    {
        int flag = 1;
    }
    
    printf("----------------------------");
    printf("\n");
    //Checking Scalar
    for (int i = 0; i < row; i++)
    {   
        for (int j = 0;j < col; j++)
        {
            if (i==j)
            {
                if (a[i][j]==a[0][0])
                {
                    continue;
                }
                else{
                    flag=0;
                }
            }
            else  if (a[i][j]!=0)
            {
                flag=1;
            }
            
        }

    }
    if (flag!=0)
    {
        printf("Not a Scalar");
    }
    else{
        printf("Its a Scalar");
    }




    return 0;
}