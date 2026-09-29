#include <iostream>
#include <iomanip>
using namespace std;

void printBoard(char t[3][3]) {
    // Print the game board
    for (int i = 0; i < 3; i++) {
        for (int l = 0; l < 3; l++) {
            cout << t[i][l];
            if (l < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------" << endl;
    }
}

bool isValidMove(char t[3][3], int i, int l) {
    // Check if the move is valid (the cell must be empty)
    return i >= 0 && i < 3 && l >= 0 && l < 3 && t[i][l] == ' ';
}

bool checkWinner(char t[3][3], char player) {
    // Check rows, columns, and diagonals for a winner
    for (int i = 0; i < 3; i++) {
        if (t[i][0] == player && t[i][1] == player && t[i][2] == player) return true;
        if (t[0][i] == player && t[1][i] == player && t[2][i] == player) return true;
    }
    if (t[0][0] == player && t[1][1] == player && t[2][2] == player) return true;
    if (t[0][2] == player && t[1][1] == player && t[2][0] == player) return true;
    
    return false;
}

int main() {
    char t[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };  // Initialize the board
    int i, l;
    char player = 'X';  // Start with player X
    
    cout << "Tic-Tac-Toe Game!" << endl;
    
    while (true) {
        printBoard(t);  // Display the current state of the board
        
        cout << "Player " << player << ", enter your move (row and column): ";
        cin >> i >> l;
        
        if (cin.fail() || !isValidMove(t, i, l)) {
            // Clear error flag and ignore input buffer if move is invalid
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "(Error) Invalid move. Try again!" << endl;
            continue;
        }
        
        // Make the move
        t[i][l] = player;
        
        // Check if the current player won
        if (checkWinner(t, player)) {
            printBoard(t);
            cout << "Player " << player << " wins!" << endl;
            break;
        }
        
        // Check if the board is full (tie game)
        bool boardFull = true;
        for (int i = 0; i < 3; i++) {
            for (int l = 0; l < 3; l++) {
                if (t[i][l] == ' ') {
                    boardFull = false;
                    break;
                }
            }
        }
        if (boardFull) {
            printBoard(t);
            cout << "It's a tie!" << endl;
            break;
        }
        
        // Switch to the other player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}