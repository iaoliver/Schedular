#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int findBitForTime(int time);

int main()
{
	bitset<204> mask;
	bitset<204> monday;
	bitset<204> tuesday;
	bitset<204> wednesday;
	bitset<204> friday;
	bitset<204> saturday;
	bitset<204> sunday;


	int startT;
	int endT;
	int bitS;
	int bitE;

	startT = 1200;
	endT = 1330;


	bitS = findBitForTime(startT);
	bitE = findBitForTime(endT);


	for (int i = bitS; i < bitE; i++)
	{
		mask[i].flip();
	}
	cout << "Mask: \n" << mask << endl;
	


	cout << "Monday: \n" << monday << endl;
	//startT 12:00 - 13:30


	cout << endl;
	system("pause");
}

int findBitForTime(int time)
{
	int start = 600;
	int i = 0;

	while (!(time == start))
	{
		start += 5;
		i++;
	}

	return i;
}