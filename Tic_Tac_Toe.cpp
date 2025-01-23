#include <iostream>
using namespace std;

int main()
{
    // Input the size of the Tic-Tac-Toe board
    int n;
    cin >> n;
    char arr[n][n];

    // initialize the tic tac toe board with '.'
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = '.';
        }
    }

    // initialize counter to switch between two players
    int cnt = 0;
    while (true)
    {
        int a, b;

        // player X's turn
        if (cnt % 2 == 0)
        {
            cout << "player X turn. please enter an empty box (r,c): ";
            cin >> a >> b;
            cnt++;

            // handling invalid input
            if (arr[a - 1][b - 1] != '.')
            {
                cout << "Invalid box. Please try again\n";
                cnt++; // increment the counter to allow the player choose another box after invaolid input
            }

            // assigning the box to the player
            else
            {
                arr[a - 1][b - 1] = 'X';
            }

            // printing the borad after the player played
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << "\n";
            }

            // check for win of player X
            for (int i = 0; i < n - 2; i++)
            {
                for (int j = 0; j < n - 2; j++)
                {
                    if (((arr[i][j] == arr[i + 1][j]) && (arr[i + 1][j] == arr[i + 2][j])) || ((arr[i][j + 1] == arr[i][j]) && (arr[i][j]) == (arr[i][j + 2])) || ((arr[i][j] == arr[i + 1][j + 1]) && (arr[i][j] == arr[i + 2][j + 2])) || ((arr[i][j] == arr[i - 1][j - 1]) && (arr[i][j] == arr[i - 2][j - 2])) && (arr[i][j] == 'X'))
                    {
                        cout << "Player X won. Congratulations!!";
                        return 0;
                    }
                }
            }

            // check for a Tie!!
            int empty = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] == '.')
                    {
                        empty++;
                    }
                }
            }
            if (empty == 0)
            {
                cout << "Tie!!";
                return 0;
            }
            continue;
        }

        // player o's turn
        else
        {
            cout << "player O turn. please enter an empty box (r,c): ";
            cin >> a >> b;
            cnt++;

            // check for invalid input
            if (arr[a - 1][b - 1] != '.')
            {
                cout << "Invalid box. Please try again\n";
                cnt++; // increment the counter to allow the player play again after invalid input
            }

            // assigning the box to the player O
            else
            {
                arr[a - 1][b - 1] = 'O';
            }

            // printitng the board after the player had played
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << "\n";
            }

            // check for winning of the player O
            for (int i = 0; i < n - 2; i++)
            {
                for (int j = 0; j < n - 2; j++)
                {
                    if (((arr[i][j] == arr[i + 1][j]) && (arr[i + 1][j] == arr[i + 2][j])) || ((arr[i][j + 1] == arr[i][j]) && (arr[i][j]) == (arr[i][j + 2])) || ((arr[i][j] == arr[i + 1][j + 1]) && (arr[i][j] == arr[i + 2][j + 2])) || ((arr[i][j] == arr[i - 1][j - 1]) && (arr[i][j] == arr[i - 2][j - 2])) && (arr[i][j] == 'O'))
                    {
                        cout << "Player O won. Congratulations!!";
                        return 0;
                    }
                }
            }

            // check for a tie
            int empty = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] == '.')
                    {
                        empty++;
                    }
                }
            }
            if (empty == 0)
            {
                cout << "Tie!!";
                return 0;
            }
            continue;
        }
    }
    return 0;
}