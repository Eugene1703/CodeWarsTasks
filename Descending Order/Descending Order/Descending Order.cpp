
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
uint64_t descendingOrder(uint64_t a)
{
    vector<uint64_t> descendingVector;
    while (a != 0)
    {
        descendingVector.push_back(a % 10);
        a /= 10;
    }
    sort(descendingVector.begin(), descendingVector.end());
    uint64_t result = 0;
    for (int i = 0; i < descendingVector.size(); i++)
    {
        result += descendingVector.at(i) * pow(10, i);
    }
    return result;
}
int main()
{
    uint64_t a = 42145;
    cout << descendingOrder(a) << endl; // Output: 54421
    a = 145263;
    cout << descendingOrder(a) << endl; // Output: 654321
    a = 123456789;
    cout << descendingOrder(a) << endl; // Output: 987654321
    return 0;
}