#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution{
public:
	static vector<int> twoSum(vector<int> &numbers, int target)
	{
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < numbers.size(); i++) {
			int numberToFind = target - numbers[i];
			if (hash.find(numberToFind) != hash.end()) {
				result.push_back(hash[numberToFind]);
				result.push_back(i);
				return result;
			}
			hash[numbers[i]] = i;
		}
		return result;
	}
};

int main(){
	int num, target;
	cin >> target;
	cin >> num;
	vector<int> numbers;
	vector<int> result;
	int temp;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		numbers.push_back(temp);
	}
	result = Solution::twoSum(numbers, target);
	for (int i = 0; i < 2;i++)
	cout << result[i]<<endl;
	system("Pause");
	return 0;
}