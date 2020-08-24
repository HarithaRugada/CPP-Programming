#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string sentence, findWord, replaceWord;
    cout << "Enter the sentence : ";
    getline(cin, sentence); 
    cout << "enter the words to be replaced : ";
    getline(cin, findWord);
    cout << "enter the replacing words : ";
    getline(cin, replaceWord);
    sentence.replace(sentence.find(findWord), findWord.length(), replaceWord);
    cout << "Modified sentence is > " << sentence;
    return 0;
}
