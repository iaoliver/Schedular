#pragma once

#include <iostream>
#include <string>

using namespace std;


class sortArray
{
private:
	string lineHold;

	string tempSchedule[3] = { "61030?120_CSC" , "61031?121_CSC" , "61034?123_CSC" };
	string schedule2D[20][91];

public:
	sortArray( );
	~sortArray( );

	void fill2DArray( );
};

