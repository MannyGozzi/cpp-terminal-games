#include <iostream>

void PrintIntroduction(int difficulty) {
    std::cout << "You need to get a steak from the freezer.";
    std::cout << "\nYou need to enter the correct combo to get into a level " << difficulty << " freezer.";
}

bool PlayGame(int difficulty) {

    PrintIntroduction(difficulty);

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
        return true;
    } else {
        std::cout << "========YOU LOST========";
        return false;
    }
    std::cout << "\nPress \"ctrl\" + \"c\" to quit\n\n\n\n";
}

int main() {        // loop game until all levels are completed
    int levelDifficulty = 1;
    const int maxDifficulty = 5;

    while(levelDifficulty <= maxDifficulty) {
        bool levelComplete = PlayGame(levelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (levelComplete)
        {
            std::cout << "\nWell done, you have extracted the steak from the freezer!\n\n\n\n";
            ++levelDifficulty;
        } else {
            levelDifficulty = 1;
        }
        
    }
    std::cout << "\nCONGRATULATIONS, YOU BEAT THE GAME!";
    return 0;
}