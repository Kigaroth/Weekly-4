// Weekly 4 - Task 1.cpp //

#include <iostream>
#include <string>
#include <locale>


std::string sentence;


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



int main()
{

    input_sentence();
    capitalize_sentence();

}

