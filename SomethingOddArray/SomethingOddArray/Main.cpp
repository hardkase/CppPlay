#include <array>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
//this version doesn't work at the moment, submitted version got 75%
int genNums();
int solution(std::vector<int> A);
int getLen();

int solution(std::vector<int> A)
{
		std::vector<int> newVec;
		newVec = A;
		size_t size = newVec.size();
		int oddOne = 0;
		if (newVec.empty())
		{
			std::cout << "Empty!" << std::endl;
			return oddOne;
		}
		std::sort(newVec.begin(), newVec.end());
		for (size_t s = 0; s < size - 1; s = s + 2)
		{
			if ((newVec)[s] != (newVec)[s + 1])
			{
				oddOne = (newVec)[s];
				break;
			}

		}
		//delete[] newArray;
		return oddOne;
}
int main()
{
	
	//int arrLen = 2;
	int arrLen = getLen();
	std::vector<int> theVector;
	int num;
	for (int f = 0; f < (arrLen-1)/2; f+2)
	{
		if (arrLen % 11 == 0)
			num = 0;
		else
			num = genNums();
		theVector.push_back(num);
		theVector.push_back(num);
	}
	num = genNums();
	theVector.push_back(num);
	std::random_shuffle(theVector.begin(), theVector.end());
	int theOddOne = solution(theVector);
	std::cout << "The Odd One is: " << theOddOne << std::endl;
	//delete[] theArray;
	std::cin.get();
	return 0;
}
int getLen()
{
	srand((int)(time(0)));
	unsigned long x;
	x = rand();
	x <<= 15;
	x ^= rand();
	x %= 1000000;
	x++;
	if (x % 2 == 0)
		x++;
	return x;
}
int genNums()
{
	srand((int)(time(0)));
	unsigned long x;
	x = rand();
	x <<= 15;
	x ^= rand();
	x %= 1000000001;
	return x;
}