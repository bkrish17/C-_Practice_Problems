#include <iostream>
using namespace std ;
    
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
  
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    }
   
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    }
  
    else {
        cout << "Special Character" << endl;
    }
    return 0;
}