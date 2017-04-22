#include <iostream>

using namespace std;

class Solution{
public:
	static bool canWinNim(int n)
	{
		if (n % 4 == 0)
			return false;
		else
			return true;
	}
};