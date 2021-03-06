// Weekly 4.cpp //

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <algorithm>



// Task 1
std::string sentence;

// Task 2

const int size = 10;
char level_up = '\\';
char level_down = '/';
char game_over = 'G';
char player_avatar = '@';
int player = -1;
int array[size]{};
std::vector <char> board(100, ' ');
bool game_loop = true;


// Task 3

struct phonebook {
    std::string name;
    int phone_number;
};

// Task 1 - Functions

void input_sentence() {

    std::cout << "Please type a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << std::endl;

}

void capitalize_sentence() {

    std::cout << "\n The all capitalized version of ''" << sentence << "'' is:\n ";
    
    for (int i = 0; i < sentence.length(); i++) {
        putchar(toupper(sentence[i]));
    }
    std::cout << std::endl;
}

//Task 2 - Functions

void generate_board() {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int up = -1;
    int down = -1;
    int game = -1;
    

    up = std::rand() % 99 + 1; 
    board[up] = level_up;

    do {
        down = std::rand() % 99 + 1;
        if (down != up) {
            board[down] = level_down;
        }
    } while (down == up);

    do {
        game = std::rand() % 99 + 1;
        if ((game != up) && (game != down)) {
            board[game] = game_over;
        }
    } while (game == up || game == down);

    do {
        player = std::rand() % 99 + 1;
        if (player != up && player != down && player != game) {
            board[player] = player_avatar;
        }
    } while (player == up || player == down || player == game);

}

void display_board() {
    for (int i = 0; i < board.size(); i++) {
        if (i % size == 0) {
            std::cout << "\n-----------------------------------------\n| ";
        }
        std::cout << board[i] << " | ";
    }
    std::cout << "\n-----------------------------------------";
    std::cout << std::endl;
}

void player_control() {

    char player_input = _getch();
    
    switch (player_input) {
    
        case 'W':
        case 'w':
            if (player < 10) {
                break;
            }
            board[player] = ' ';
            player -= 10;
            break;
        case 'A':
        case 'a':
            if (player == 0) {
                break;
            }
            board[player] = ' ';
            player -= 1;
            break;
        case 'S':
        case 's':
            if (player >= 90) {
                break;
            }
            board[player] = ' ';
            player += 10;
            break;
        case 'D':
        case 'd':
            if (player == 99) {
                break;
            }
            board[player] = ' ';
            player += 1;
            break;

    } 
    if (board[player] == level_down) {
        if ((player + 10) < 100) {
            player += 10;
        }          
    }
    else if (board[player] == level_up) {
        if ((player - 10) >= 0) {
            player -= 10;
        }
    }
    else if (board[player] == game_over) {
        game_loop = false;
    }

    board[player] = player_avatar;
}

//Task 3 - Functions

//struct phonebook myphone[10]{
//    
//    int i;
//
//    for (i = 0; i < 10; i++) {
//        std::cout << "Phone entry " << i + 1 << std::endl;
//        }
//    
//
//};
//
//void print_phonebook(struct phonebook myphone) {
//
//}

int main()
{

    generate_board();
    display_board();
    
    do {
        player_control();
        system ("CLS");
        display_board();
    } while (game_loop == true);

    std::cout << "\n\n\t Congratulations! You've reached the goal! ";


}

