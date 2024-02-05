#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define rows 10
#define cols 10

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

void floydWarshall(int **mat){
    int newMat[10][10];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            newMat[i][j] = mat[i][j];
        }
    }


    for (int k = 0; k < 10; k++)
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
               if(newMat[i][j] > newMat[i][k] + newMat[k][j]){
                newMat[i][j] =  newMat[i][k] + newMat[k][j];
               } 
            }
        }
    }
}


int isTherPath(int **mat, int path, int i, int j){
    floydWarshall(mat);
    if (mat[i][j] != 0)
    {
        return 1;
    }
    return 0;
}

int theSortestPst(int **mat, int path, int i, int j){
    floydWarshall(mat);
    if (mat[i][j] != 0)
    {
        return mat[i][j];
    }
    return -1;
}