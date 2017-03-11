#include <stdio.h>
#include <vector>
#include <iostream.h>
#include <windows.h>
#include <unordered_map>

using namespace std;

class Solution{
public:
	vector<vector<int>> threeSum(vector<int>& nums)
	{

	}
	
	vector<int> twoSum(vector<int>& nums, unsigned int target)
	{
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i <= nums.size(); i++)
		{

		}
	}
};

int main(){
	vector<vector<int>> result;
	vector<int> nums;
	int vecLen;
	cin >> vecLen;
	for (int i = 0; i < vecLen; i++)
	{
		cin >> nums[i];
	}
	result = threeSum(nums);

}