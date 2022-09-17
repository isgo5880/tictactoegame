#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
    //Welcome to the game!
    cout << "Hello! You will be playing a game of Tic-Tac-Toe against the computer. Please enter your username: " << endl;
    string username;
    cin >> username;

    cout << "Hello, " << username << "! You will be playing a game of Tic-Tac-Toe. Do you want to be x's or o's (X/O)?" << endl;
    char player_character;
    char computer_character;
    cin >> player_character;

    if (player_character == 'X' || player_character == 'x')
    {
        computer_character = 'O';
    } else if (player_character == 'O' || player_character == 'o') {
        computer_character = 'X';
    } else {
        cout << "Please enter a valid character." << endl;
        return 0;
    }

    int top_left_square = 1;
    int top_middle_square = 2;
    int top_right_square = 3;
    int middle_left_square = 4;
    int middle_square = 5;
    int middle_right_square = 6;
    int bottom_left_square = 7;
    int bottom_middle_square = 8;
    int bottom_right_square = 9;
    int computer_choice;

    cout << "Let's begin!" << endl;
    cout << "Play as follows: " << endl;
    cout << "     |     |     " << endl;
    cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
    cout << "     |     |     " << endl;

    cout << "Each number corresponds to the square you want to play in. Where do you want to place your " << player_character << "?" << endl;
    int first_play;
    cin >> first_play;

    if (first_play == top_left_square) {
        char top_left_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;
        
        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = top_middle_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_left_square;
        } else if (computer_choice == 2) {
            computer_choice = middle_square;
        }
        if (computer_choice == top_middle_square)
        {
            char top_middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_left_square) {
            char middle_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == top_middle_square) {
        char top_middle_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;
        
        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = top_left_square;
        } else if (computer_choice == 1) {
            computer_choice = top_right_square;
        } else if (computer_choice == 2) {
            computer_choice = middle_square;
        }

        //Creating tic tac toe board
        if (computer_choice == top_left_square) {
            char top_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == top_right_square) {
            char top_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == top_right_square) {
        char top_right_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;
        
        //Generating computer position
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = top_middle_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_square;
        } else if (computer_choice == 2) {
            computer_choice = middle_right_square;
        }
        
        //Creating tic tac toe board
        if (computer_choice == top_middle_square) {
            char top_middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_right_square) {
            char middle_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == middle_left_square) {
        char middle_left_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;
        
        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = top_left_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_square;
        } else if (computer_choice == 2) {
            computer_choice = bottom_left_square;
        }

        //Adding computer choice to tic tac toe board
        if (computer_choice == top_left_square) {
            char top_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == bottom_left_square) {
            char bottom_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == middle_square) {
        char middle_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;
        
        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 4 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = top_middle_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_left_square;
        } else if (computer_choice == 2) {
            computer_choice = middle_right_square;
        } else if (computer_choice == 3) {
            computer_choice = bottom_middle_square;
        }

        //Creating tic tac toe board
        if (computer_choice == top_middle_square) {
            char top_middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_left_square) {
            char middle_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_right_square) {
            char middle_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == bottom_middle_square) {
            char bottom_middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == middle_right_square) {
        char middle_right_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;

        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = top_right_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_square;
        } else if (computer_choice == 2) {
            computer_choice = bottom_right_square;
        } 

        //Creating tic tac toe board
        if (computer_choice == top_right_square) {
            char top_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == bottom_right_square) {
            char bottom_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == bottom_left_square) {
        char bottom_left_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;

        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = middle_left_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_square;
        } else if (computer_choice == 2) {
            computer_choice = bottom_middle_square;
        } 

        //Creating tic tac toe board
        if (computer_choice == middle_left_square) {
            char middle_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == bottom_middle_square) {
            char bottom_middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == bottom_middle_square) {
        char bottom_middle_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;

        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = bottom_left_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_square;
        } else if (computer_choice == 2) {
            computer_choice = bottom_right_square;
        } 

        //Creating tic tac toe board
        if (computer_choice == bottom_left_square) {
            char bottom_left_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == bottom_right_square) {
            char bottom_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else if (first_play == bottom_right_square) {
        char bottom_right_square = player_character;
        cout << "     |     |     " << endl;
        cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
        cout << "     |     |     " << endl;

        //Generating computer choice
        srand(time(0));
        computer_choice = rand() % 3 + 0;
        cout << computer_choice << endl;
        if (computer_choice == 0) {
            computer_choice = bottom_middle_square;
        } else if (computer_choice == 1) {
            computer_choice = middle_square;
        } else if (computer_choice == 2) {
            computer_choice = middle_right_square;
        } 

        //Creating tic tac toe board
        if (computer_choice == bottom_middle_square) {
            char bottom_middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_square) {
            char middle_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        } else if (computer_choice == middle_right_square) {
            char middle_right_square = computer_character;
            cout << "     |     |     " << endl;
            cout << "  " << top_left_square << "  |  " << top_middle_square << "  |  " << top_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << middle_left_square << "  |  " << middle_square << "  |  " << middle_right_square << "  " << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << bottom_left_square << "  |  " << bottom_middle_square << "  |  " << bottom_right_square << "  " << endl;
            cout << "     |     |     " << endl;
        }
    } else {
        cout << "Incorrect input, sorry." << endl;
    }

    return 0;
}