#include <iostream>
#include <string>

std::string to_camel_case(std::string text)
{
    std::string answer;
    bool toupperNext = false;

    for (char c : text)
    {
        if (c == '-' || c == '_')
        {
            toupperNext = true;
        }
        else if (toupperNext)
        {
            answer += toupper(c);
            toupperNext = false;
        }
        else
        {
            answer += c;
        }
    }

    return answer;
}

int main() {
    std::cout << to_camel_case("Semioshko-Eugene_11") << std::endl;  // outputs "SemioshkoEugene11"
    std::cout << to_camel_case("eugene_semioshko") << std::endl; // outputs "eugeneSemioshko"
    std::cout << to_camel_case("Semioshko_test") << std::endl;        // outputs "SemioshkoTest"
    return 0;
}




