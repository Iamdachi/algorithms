#include <bits/stdc++.h>
using namespace std;

void helper(int die, int sum, vector<int> & chosen);
void diceSum(int die, int sum);

int main() {
    diceSum(3, 7);
    return 0;
}

void diceSum(int die, int sum)
{
    vector<int> chosen;
    helper(die, sum, chosen);
}

void helper(int die, int sum, vector<int> & chosen)
{
    if (die == 0)
    {
	if(sum == 0) {
	    for (auto element : chosen) {
            cout << element << " ";
            }
	    cout << endl;
	}
    } else
    {
	for(int i = 1; i <= 6; i++)
	{
	    chosen.push_back(i);
	    helper(die - 1, sum - i, chosen);
	    chosen.pop_back();
	
	}
	
    }
}
