#include <stdio.h>


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
    //Checking unit
    for (int i = 0; i < row; i++)
    {   
        for (int j = 0;j < col; j++)
        {
            if (i==j)
            {
                if (a[i][j]!=1)
                {
                    flag=1;
                }
                
            }
            else if (a[i][j]!=0)
            {
                flag=1;
            }
            
        }

    }
    if (flag==0)
    {
        
        printf("Its a Unit Matrix");
    }
    else{
        printf("Not a Unit Matrix");
    }




    return 0;
}