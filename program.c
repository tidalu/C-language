#include <stdio.h>
#define N 5


int peaks(int grid[][N], int size);

int main() {
    int size;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    int elevation_grid[N][N];

    printf("Enter the elevation values for each cell:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter the value for cell (%d,%d): ", i, j);
            scanf("%d", &elevation_grid[i][j]);
        }
    }

    int counter_peak = peaks(elevation_grid, N);
    printf("Number of peaks: %d\n", counter_peak);

    return 0;
}


int peaks(int grid[][N], int size) 
{
    int counter = 0;
    for (int i = 1; i < size-1; i++) {
        for (int j = 1; j < size-1; j++) {
            int cen_elevation = grid[i][j];
            if (i == 0 || j == 0 || i == size-1 || j == size-1) {
                continue; 
            }
            if (cen_elevation > grid[i-1][j] && cen_elevation > grid[i+1][j] &&
                cen_elevation > grid[i][j-1] && cen_elevation > grid[i][j+1]) {
                counter++;
            }
        }
    }
    return counter;
}
