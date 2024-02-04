#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
char tempChar;
int i,j;
int** tempMat = (int **)malloc(10*sizeof(int*));
for (int i = 0; i < 10; i++)
{
    tempMat[i] = (int *)malloc(10*sizeof(int));
}


printf("enter A, B, C or D:/n");

do{
scanf("%c", &tempChar);
switch (tempChar)
{
case 'A':
{
    function1(tempMat,10,10);
}
    break;

case 'B':
{
    scanf("%d%d", &i ,&j);
    printf("%s/n", isTherPath(tempMat,10,i,j) ? "True":"False");
}
case 'C':
{
    scanf("%d%d", &i ,&j);
    printf("%s/n", theSortestPst(tempMat,10,i,j));
}
default:
    break;
}
}
while (tempChar != 'D');
{
    for (int i = 0; i < 10; i++)
    {
        free(tempMat[i]);
    }
    free(tempMat);
    
}

return 0;
}