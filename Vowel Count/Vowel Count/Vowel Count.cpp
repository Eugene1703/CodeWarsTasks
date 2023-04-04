
#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr) {
    int num_vowels = 0;
    for (char c : inputStr)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            num_vowels++;
    }
    return num_vowels;
}
int main()
{
    cout << getCount("eugene") << endl; //output "4"
    cout << getCount("aboba") << endl; //output "3"
    cout << getCount("qprtsvf") << endl; //output "0"
}
