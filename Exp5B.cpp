// EXP 5B : Vowel or Consonant
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter any character :";
    cin >> a;
    if (a == 'A'|| a == 'a'|| a == 'E'|| a == 'e'||a == 'I'|| a =='i'|| a =='O'|| a =='o'||a =='U'||a =='u'){
        cout << "Character is vowel";
    }
    else{
        cout << "Character is consonant";
    }

    return 0;
}
