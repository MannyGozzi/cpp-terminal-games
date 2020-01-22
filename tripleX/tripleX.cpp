#include <iostream>

void PrintIntroduction() {
    std::cout << "You need to get a steak from the freezer.";
    std::cout << "\nYou need to enter the correct combo to get into the freezer.";
}

void PlayGame() {
    // Declare 3 number code
    const int codeA = 5;
    const int codeB = 3;
    const int codeC = 2;

    const int codeSum = codeA + codeB + codeC;
    const int codeProduct = codeA * codeB * codeC;

    std::cout << "\n+ There are 3 numbers in the code";
    std::cout << "\n+ The sum of the 3 numbers is " << codeSum;
    std::cout << "\n+ and the product is " << codeProduct;
    std::cout << "\nEnter the correct code to continue...\n";

    int guessA, guessB, guessC;

    std::cin >> guessA >> guessB >> guessC;

    int guessSum = guessA + guessB + guessC;
    int guessProduct = guessA * guessB * guessC;

    if(guessSum == codeSum && guessProduct == codeProduct) {
        std::cout << "========YOU WIN!========\n   THE STEAK IS YOURS";
    } else {
        std::cout << "========YOU LOST========";
    }
    std::cout << "\nPress \"ctrl\" + \"c\" to quit\n\n\n\n";
}

int main() {
    PrintIntroduction();
    while(true) {
        PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}