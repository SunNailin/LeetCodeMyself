#include <iostream>

using namespace std;

bool isBadVersion(int version)
{

}
class Solution{
public:
	static int firstBadVersion(int n)
	{
		int low = 1, high = n;
		while (low <= high)
		{
			int mid = low + (high - low) / 2;
			if (isBadVersion(mid))
				high = mid - 1;
			else
				low = mid + 1;
		}
		return low;
	}
};