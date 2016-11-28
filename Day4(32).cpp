//Дані три слова. Виявити чи є серед них паліндроми
#include <algorithm>
#include <iostream>
#include <string>
 
bool isPalindromeString(std::string userString);
 
int main()
{
    const size_t wordsCount(3);
    std::string userString;
    for (size_t i = 0; i < wordsCount; i++) {
        std::cout << std::endl << (i + 1) << " word: ";
        std::cin >> userString;
        std::cout << "Is palindrome? - " << std::boolalpha << isPalindromeString(userString) << std::endl;
    }
 
    std::system("pause");
    return 0;
}
 
bool isPalindromeString(std::string userString)
{
    std::string reverseString(userString);
    std::reverse(reverseString.begin(), reverseString.end());
    return userString == reverseString;
}
