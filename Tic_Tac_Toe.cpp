//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;



void print_board(const vector<vector<char>>& board) {
        cout << "Welcome To TIC-TAC-TOE GAME ! \n";
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}


bool check_win(const vector<vector<char>>& board, char player) {
   
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}


bool is_draw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == '-') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, '-'));
    int row, col;
    bool player_x_turn = true;

    while (true) {
        print_board(board);
        cout << "Player " << (player_x_turn ? "X" : "O") << ", enter your move (row and column): ";
        cin >> row >> col;
        row--; col--; 

        if (board[row][col] == '-') {
            board[row][col] = player_x_turn ? 'X' : 'O';
            if (check_win(board, 'X')) {
                cout << "Player X wins!" << endl;
                break;
            } else if (check_win(board, 'O')) {
                cout << "Player O wins!" << endl;
                break;
            } else if (is_draw(board)) {
                cout << "It's a draw!" << endl;
                break;
            }
            player_x_turn = !player_x_turn;
        } else {
            cout << "Cell already occupied. Try again." << endl;
        }
    }

    
    char response;
    cout << "Do you want to play again? (y/n): ";
    cin >> response;
    if (response == 'y') {
        main();
    }

    return 0;
}