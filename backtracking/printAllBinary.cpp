#include <bits/stdc++.h>
using namespace std;

void helper(int digits, string & result);
void printAllBinary(int digits);

int main() {

    cout << "dachi" << endl;
    printAllBinary(2);
    return 0;
}

void printAllBinary(int digits)
{
    string result = "";
    helper(digits, result);
}

void helper(int digits, string & result)
{
    if (digits == 0)
    {
        cout << result << endl;
    } else
    {
        result.push_back('0');
	helper(digits - 1, result);
	result.pop_back();
        result.push_back('1');
        helper(digits - 1, result);
	result.pop_back();
    }
}
