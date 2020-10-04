// Weekly 4.cpp //

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>



// Task 1
std::string sentence;

// Task 2

const int size = 10;
char player = 64;
int array[size]{};
std::vector <char> board(100, ' ');

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

void player_input() {


}

//Task 3 - Functions

phonebook get_phonebook_data[10] {

    phonebook 

}

void print_phonebook( phonebook) {

}

int main()
{

    

}

