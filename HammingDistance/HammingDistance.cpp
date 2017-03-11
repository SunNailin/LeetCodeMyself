#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	int hammingDistance(int x, int y)
	{
		int distance = 0;
		int z = x^y;
		while (z > 0)
		{
			if (z%2==1)
			{
				distance++;
			}
			z /= 2;
		}
		return distance;
	}
	int hammingDistanceMine(int x, int y)
	{
		int hammingDistance = 0;
		int zero = 0;
		vector<int> x2b = intToBinary(x);
		vector<int> y2b = intToBinary(y);
		int xLen = x2b.size();
		int yLen = y2b.size();
		if (xLen > yLen)
		{
			for (int count = 0; count < xLen - yLen; count++)
			{
				y2b.insert(y2b.begin(),0);
			}
		}
		else
		{
			for (int count = 0; count < yLen - xLen; count++)
			{
				x2b.insert(x2b.begin(),0);
			}
		}
		for (int count = 0; count < max(xLen, yLen); count++)
		{
			hammingDistance += x2b[count] ^ y2b[count];
		}
		return hammingDistance;
	}

	vector<int> intToBinary(int x)
	{
		vector<int> binary;
		while (x >= 1)
		{
			int ahead;
			ahead = x % 2;
			binary.insert(binary.begin(),ahead);
			x /= 2;
		}
		return binary;
	}
};

int main(){
	Solution s;
	int x, y, hamDis;
	cin >> x;
	cin >> y;
	hamDis = s.hammingDistance(x, y);
	cout << hamDis << endl;
	system("Pause");

}