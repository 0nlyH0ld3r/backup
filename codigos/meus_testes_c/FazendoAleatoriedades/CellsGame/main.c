#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX 40

int grid[MAX][MAX];

int start_grid	(void);
int check	(int grid[MAX][MAX], int i, int j);
void status	(int grid[MAX][MAX]);

int main(){
	start_grid();
	system("clear");
	while(1){
		status(grid);
		for(int i = 0; i < MAX; ++i) {
			for (int j = 0; j < MAX; ++j) {
				printf("%c ", grid[i][j] ? '*' : ' ');
			}
			printf("\n");
		}
		usleep(120000);
		system("clear");
	}
}


int start_grid(void){
	srand(time(NULL));
	for (int i = 0; i < MAX; ++i)
		for (int j = 0; j < MAX; ++j)
			grid[i][j] = (float)rand() / RAND_MAX * 1.5;

	return 0;
}

int check(int grid[MAX][MAX], int i, int j){
	int neighbours = 0;
	// Checking in + directions
	if (i > 0 && grid[i-1][j])						++neighbours;
	if (i < MAX - 1 && grid[i+1][j])					++neighbours;
	if (j > 0 && grid[i][j-1])						++neighbours;
	if (j < MAX - 1 && grid[i][j+1])					++neighbours;
	// Checking in  x directions
	if (j > 0 && i > 0 && grid[i-1][j-1])					++neighbours;
	if (j > 0 && i > 0 && grid[i+1][j-1])					++neighbours;
	if (j > 0 && i > 0 && grid[i-1][j+1])					++neighbours;
	if (j > 0 && j < MAX - 1 && i > 0 && i < MAX - 1 && grid[i+1][j+1])	++neighbours;
	return neighbours;
}

void status(int grid[MAX][MAX]) {
	int tmp[MAX][MAX];
	for (int i = 0; i < MAX; ++i)
		for (int j = 0; j < MAX; ++j)
			tmp[i][j] = grid[i][j];

	for (int i = 0; i < MAX; ++i){
		for (int j = 0; j < MAX; ++j){
			if (check(grid, i, j) < 2 || check(grid, i, j) > 3)
				tmp[i][j] = 0;
			else if (check(grid, i, j) == 3)
				tmp[i][j] = 1;
		}
	}
	for (int i = 0; i < MAX; ++i)
		for (int j = 0; j < MAX; ++j)
			grid[i][j] = tmp[i][j];
}

