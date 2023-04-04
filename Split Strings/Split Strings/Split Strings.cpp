
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> solution(string& s)
{
    vector<string> result;
    int i = 1;
    if (s.length() % 2 != 0)
    {
        s += '_';
    }

    for (int i = 0; i < s.length(); i += 2) 
    {
        result.push_back(s.substr(i, 2)); 
    }

    return result;
}


int main()
{
    vector<string> vect = { "abcdef","abc","string" };
    for (int j = 0; j < vect.size(); j++) 
    {
        vector<string> solutionResult = solution(vect[j]);
        for (int i = 0; i < solutionResult.size(); i++)
        {
            cout << solutionResult[i] << " ";
        }
        cout << endl;
    }
   //output 
   //   "ab cd ef"
   //   "ab c_"
   //   "st ri ng"
}

