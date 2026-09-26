#include <stdio.h>
#include<stdlib.h>

int* findDiagonalOrder(int mat[][3], int rows, int cols) {
    int row=0,col=0;
    int direction=1;

    for(int i=0;i<row*col;i++){
        printf("%d",mat[row][col]);
    }

           if (direction == 1) {
            // Moving upward-right
            if (col == cols - 1) {
                row++;
                direction = -1;
            }
            else if (row == 0) {
                col++;
                direction = -1;
            }
            else {
                row--;
                col++;
            }
        }
        else {
            // Moving downward-left
            if (row == rows - 1) {
                col++;
                direction = 1;
            }
            else if (col == 0) {
                row++;
                direction = 1;
            }
            else {
                row++;
                col--;
            }
        }
    } 
    int main(){
        int mat[3][3]={
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int rows=3;
        int cols=3;

        printf("Diagonal Traverse: %d",mat[rows][cols]);
        findDiagonalOrder(mat,3,3);
        return 0;
}