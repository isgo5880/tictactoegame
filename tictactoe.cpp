#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Welcome to the game!
    cout << "Hello! You will be playing a game of Tic-Tac-Toe against the computer. Please enter your username: " << endl;
    string username;
    cin >> username;

    cout << "Hello, " << username << "! You will be playing a game of Tic-Tac-Toe. Do you want to be x's or o's (X/O)?" << endl;
    char player_character;
    cin >> player_character;

    int top_left_square = 1;
    int top_middle_square = 2;
    int top_right_square = 3;
    int middle_left_square = 4;
    int middle_square = 5;
    int middle_right_square = 6;
    int bottom_left_square = 7;
    int bottom_middle_square = 8;
    int bottom_right_square = 9;

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
    } else {
        cout << "Incorrect input, sorry." << endl;
    }

    return 0;
}