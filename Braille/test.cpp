#include <iostream>
#include <unordered_map>
#include <string>
#include <array>

using BrailleArray = std::array<std::array<int, 2>, 3>;

std::unordered_map<std::string, BrailleArray> brailleMap;

void install(const std::string &letter, const BrailleArray &braille)
{
    brailleMap[letter] = braille;
}

void printBraille(const BrailleArray &braille)
{
    for (const auto &row : braille) {
        for (int dot : row) {
            std::cout << dot << " ";
        }
        std::cout << std::endl;
    }
}

void getBrailleForLetter(const std::string &letter)
{
    if (brailleMap.find(letter) != brailleMap.end()) {
        std::cout << "Braille for " << letter << ":\n";
        printBraille(brailleMap[letter]);
    } else {
        std::cout << "Braille mapping for " << letter << " not found.\n";
    }
}

int main()
{
    BrailleArray brailleA = {{{1, 0}, {0, 0}, {0, 0}}};  // A
    BrailleArray brailleB = {{{1, 0}, {1, 0}, {0, 0}}};  // B
    BrailleArray brailleC = {{{1, 1}, {0, 0}, {0, 0}}};  // C
    BrailleArray brailleZ = {{{1, 0}, {0, 1}, {1, 1}}};  // Z

    install("A", brailleA);
    install("B", brailleB);
    install("C", brailleC);
    install("Z", brailleZ);

    getBrailleForLetter("A");
    getBrailleForLetter("B");
    getBrailleForLetter("C");
    getBrailleForLetter("Z");
    getBrailleForLetter("D"); 

    return 0;
}
