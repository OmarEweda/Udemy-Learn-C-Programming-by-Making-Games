#include <iostream>

int main() {
    char ch;

    std::cout << "Enter an alphabet: " << std::endl;
    std::cin >> ch;

    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << ch << " is a vowel." << std::endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                std::cout << ch << " is a consonant." << std::endl;
            } else {
                std::cout << "Invalid input, please enter an alphabet." << std::endl;
            }
            break;
    }

    return 0;
}
