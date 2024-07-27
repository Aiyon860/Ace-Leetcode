int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int count=0;
    int x[4]={0, 0, 1, -1};
    int y[4]={1, -1, 0, 0};
    for (int i=0; i<gridSize; ++i) {
        for (int j=0; j<gridColSize[i]; ++j) {
            if (grid[i][j]) {
                for (int k=0; k<4; ++k) {
                    int new_row=i+x[k];
                    int new_col=j+y[k];
                    if (new_row < 0 
                        || new_col < 0 
                        || new_row >= gridSize 
                        || new_col >= gridColSize[i] 
                        || !grid[new_row][new_col]) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}