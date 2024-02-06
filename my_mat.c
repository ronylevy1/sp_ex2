#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int function1(int **mat, int size)
{
    //Put the value in the matrixe
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           scanf("%d", &mat[i][j]);
        }
    }
    return 0;
}

void floydWarshall(int **mat, int col)
{
    for (int k = 0; k < 10; k++)
    {
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if (mat[i][j] != 0 && mat[i][k] != 0 && mat[k][j] != 0)
                {
                    if(mat[i][j] > mat[i][k] + mat[k][j])
                    {
                        mat[i][j] =  mat[i][k] + mat[k][j];
                    }   
                }
            }
        }
    }
}


int isTherePath(int **mat, int path, int i, int j)
{
    floydWarshall(mat, path);
    if (mat[i][j] != 0)
    {
        return 1;
    }
    return 0;
}

int theSortestPst(int **mat, int path, int i, int j)
{
    floydWarshall(mat,path);
    if (mat[i][j] != 0)
    {
        return mat[i][j];
    }
    return -1;
}