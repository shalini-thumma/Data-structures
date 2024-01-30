#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,cols;
    printf("enter no. of rows: ");
    scanf("%d",&rows);
    printf("enter no. of columns: ");
    scanf("%d",&cols);

    int **matrix=(int**)calloc(rows,sizeof(int *));

    for(int i=0;i<rows;i++)
    {
        matrix[i]=(int*)calloc(cols,sizeof(int));
    }
    printf("enter elements of the matrix:\n");
    for(int i = 0; i < rows;i++)
     {
        for(int j=0;j<cols;j++)
        {
            printf("enter matrix[%d][%d] element = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The entered matrix is as below:\n");
    for (int i=0;i<rows;i++)
        {
        for (int j=0;j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
