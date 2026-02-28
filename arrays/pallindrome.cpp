#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word to check palindrome: " << endl;
    getline(cin, word);

    int l = 0, r = word.length() - 1;
    bool isPalindrome = true;

    while (l < r) {
        if (word[l] != word[r]) {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }

    if (isPalindrome)
        cout << "It is palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}