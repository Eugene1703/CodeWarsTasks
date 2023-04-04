
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int find_short(string str)
{
    vector<int> vect;
    int nmbr = 0;
    for (char c : str) 
    {
        if (c != ' ')
        {
            nmbr++;
        }
        else 
        { 
            vect.push_back(nmbr); 
            nmbr = 0;
        }
    }
    vect.push_back(nmbr);
    sort(vect.begin(), vect.end());
    for (int i = 0; i < vect.size(); i++) 
    {
        cout << vect[i] << endl;
    }
    return vect[0];
}
int main()
{
    cout << find_short("Let's travel abroad shall we"); // output "2"
}
