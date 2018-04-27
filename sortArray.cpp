#include "sortArray.h"


sortArray::sortArray( )
{
}

sortArray::~sortArray( )
{
}

void sortArray::fill2DArray( )
{
	string CRNHold; //string for CRN number
	string delim = "?"; //identifier for CRN delimiter
	int roomNum = 0; //holds the room number used in the array

	for ( int i = 0; i <= BaNaNa; i++ )
	{
		CRNHold = tempSchedule[i].substr( 0, tempSchedule[i].find(delim));
		
		schedule2D[roomNum][i] = CRNHold;

		if ( i = 90 )
		{
			roomNum++;
		}
	}
}