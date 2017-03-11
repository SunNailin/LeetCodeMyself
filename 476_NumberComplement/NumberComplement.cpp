#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int findComplement(int num)
	{
		unsigned int mask = ~0;
		while (num & mask)
			mask <<=1;
		return ~mask & ~num;
	}
};

int main(){
	Solution s;
	int num;
	cin >> num;
	int complement = s.findComplement(num);
	cout << complement;
	system("Pause");
}