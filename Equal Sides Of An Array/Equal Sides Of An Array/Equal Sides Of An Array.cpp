
#include <iostream>
#include <vector>
using namespace std;

int find_even_index(const vector <int> numbers)
{
    int sum = 0, left_sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        sum -= numbers[i];
        if (left_sum == sum) return i;

        left_sum += numbers[i];

    }
    return -1;
}
int main()
{
    cout << find_even_index({ 1,2,3,4 }) << endl; //ouput "-1"
    cout << find_even_index({ 20,10,30,10,10,15,35 }) << endl; // output "3"
    cout << find_even_index({ 10,-80,10,10,15,35,20 }) << endl; // output "6"
}
