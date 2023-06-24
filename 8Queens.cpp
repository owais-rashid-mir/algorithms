// 8 queens problem using backtracking
#include <bits/stdc++.h>
using namespace std;
int countt = 0;

// A function to print a solution
void print(int board[][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
}

// Function to check whether a position is valid or not
bool isValid(int board[][8], int row, int col)
{

    // loop to check horizontal positions
    for (int i = col; i >= 0; i--)
    {
        if (board[row][i])
            return false;
    }
    int i = row, j = col;

    // loop to check the upper left diagonal
    while (i >= 0 && j >= 0)
    {
        if (board[i][j])
            return false;
        i--;
        j--;
    }
    i = row;
    j = col;

    // loop to check the lower left diagonal
    while (i < 8 && j >= 0)
    {
        if (board[i][j])
            return false;
        i++;
        j--;
    }
    return true;
}

// function to check all the possible solutions
void ninjaQueens(int board[][8], int currentColumn)
{
    if (currentColumn >= 8)
        return;
    // loop to cover all the columns
    for (int i = 0; i < 8; i++)
    {
        if (isValid(board, i, currentColumn))
        {
            board[i][currentColumn] = 1;
            if (currentColumn == 7)
            {
                print(board);
                countt++;
            }
            // recursively calling the function
            ninjaQueens(board, currentColumn + 1);
            // backtracking
            board[i][currentColumn] = 0;
        }
    }
}

int main()
{

    // initial board situation
    int board[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0}};
    ninjaQueens(board, 0);
    
    /* In total, 92 solutions exist for 8x8 board. This statement will verify our code*/
    cout << countt << endl;
    return 0;
}