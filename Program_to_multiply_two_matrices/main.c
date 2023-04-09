#include <stdio.h>
#include <stdlib.h>

#define R1 2
#define C1 2
#define R2 2
#define C2 2


void mulMat(int mat1[][C1], int mat2[][C2])
{
    int res[R1][C2];
    int row_count, col_count;
    
    if (C1 == R2)
    {
        for (row_count = 0 ; row_count < R1 ; row_count++)
        {
            for(col_count = 0 ; col_count < C2 ; col_count++)
            {
                res[row_count][col_count] = 0;
                
                for (int i = 0 ; i < R2 ; i++)
                {
                    res[row_count][col_count] += mat1[row_count][i] * mat2[i][col_count]; 
                }

                
                printf("%d  ", res[row_count][col_count]); //print result of multiplication
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error!! cannot be multiplied!");
        exit(EXIT_FAILURE);
    }
}


int main()
{

    int mat1[R1][C1] = { { 1, 1 },
                         { 2, 2 } };
  
    int mat2[R2][C2] = { { 1, 1 },
                         { 2, 2 } };
  

    mulMat(mat1, mat2);



    return 0;
}



