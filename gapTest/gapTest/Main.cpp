// you can use includes, for example:
#include <algorithm>
#include <string>
#include <iostream>
#include <bitset>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	//std::string binStr = std::bitset<8>(N).to_string();
	//std::string flipStr = reverse(binStr.begin(), binStr.end());
	//std::cout << flipStr << std::endl;
	int maxi = 0;
	int countz = 0;
	std::vector<int> gapList;
	bool trigger = false;
	bool gap = false;
	//std::cout << binStr;
	//for (char& c : binStr)
	while (N != 0)
	{
		if (N & 0x01)
		{
			if (!gap)
				trigger = true;
			else
			{
				gap = false;
				gapList.push_back(countz);
				countz = 0;
			}
		}
		else
		{
			if (trigger)
				gap = true;
				countz++;
		}
		N >>= 1;
	}
	for (int i : gapList)
	{
		std::cout << i << std::endl;
		if (i > maxi)
			maxi = i;
	}
	return maxi;
}
int main()
{
	int x = 1041;
	int test = solution(x);
	std::cout << test << std::endl;
	std::cin.get();
	return 0;
}