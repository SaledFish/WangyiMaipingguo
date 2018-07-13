#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Process(int sum, vector<int>& vec, int count)
{
	if (sum < 0)
		return;
	if (sum == 0)
	{
		vec.push_back(count);
		return;
	}

	Process(sum - 8, vec, count + 1);
	Process(sum - 6, vec, count + 1);
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> vec;
		int count = 0;
		Process(n, vec, count);
		if (vec.empty())
			cout << -1 << endl;
		else
			cout << *(min_element(vec.begin(), vec.end())) << endl;
	}
	return 0;
}