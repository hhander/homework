#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = '*';
		}
	}
	
}

void PrintDiamond(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	if (i<(row+1)/2)
	{
		for (i = 0; i < (row + 1) / 2; i++)
		{
			for (j = 6; j >= 0; j--)
			{
				board[i][j] = ' ';
			}
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}

}