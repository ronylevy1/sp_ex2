#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int function1(int **mat, int rowScanf, int colScanf){
    //Put the value in the matrixe
    for (int i = 0; i < rowScanf; i++)
    {
        for (int j = 0; j < colScanf; j++)
        {
           scanf("%d", &mat[i][j]);
        }
    }
    return 0;
}

void floydWarshall(int **mat, int col){
 //   int newMat[10][10];
   // for(int i = 0; i < rows; i++){
     //   for(int j = 0; j < cols; j++){
       //     newMat[i][j] = mat[i][j];
       // }
   // }


    for (int k = 0; k < 10; k++)
    {
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if (mat[i][j] != 0 || mat[i][k] != 0 || mat[k][j] != 0)
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


int isTherPath(int **mat, int path, int i, int j){
    floydWarshall(mat, path);
    if (mat[i][j] != 0)
    {
        return 1;
    }
    return 0;
}

int theSortestPst(int **mat, int path, int i, int j){
    floydWarshall(mat,path);
    if (mat[i][j] != 0)
    {
        return mat[i][j];
    }
    return -1;
}