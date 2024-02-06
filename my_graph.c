#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
char tempChar;
int i = 0,j = 0;
int** tempMat = (int **)malloc(10*sizeof(int*));
for (int i = 0; i < 10; i++)
{
    tempMat[i] = (int *)malloc(10*sizeof(int));
}

for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        tempMat[i][j] = 0;
    }
}
 
do{
scanf("%c", &tempChar);
switch (tempChar)
{
case 'A':
{
    function1(tempMat,10);
    break;
}

case 'B':
{
    scanf("%d%d", &i ,&j);
    printf("%s\n", isTherePath(tempMat,10,i,j) ? "True":"False");
    break;
}

case 'C':
{
    scanf("%d%d", &i ,&j);
    printf("%d\n", theSortestPst(tempMat,10,i,j));
    break;
}

default:
    break;
}
}
while (tempChar != 'D');

    for (int i = 0; i < 10; i++)
    {
        free(tempMat[i]);
    }
    free(tempMat);

return 0;
}