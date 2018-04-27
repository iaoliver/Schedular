#pragma once
void fillSchedule(course courseArray[courseArraySize])
{
	string tempSchedule[courseArraySize];
	string sortedSchedule[13][numOfRooms];
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < numOfRooms; j++)
		{
			sortedSchedule[i][j] = "NULL";
		}
	}

	for (int i = 0; i < tempSchedule; i++)
	{
		tempSchedule[i] = courseArray[i].getCRN() + '?' + courseArray[i].getCRS() + '_' + courseArray[i].getPrefix() + '-' + courseArray[i].getSection() + '@' + courseArray[i].getTime().getStartTime() + '!' + courseArray[i].getTime().getEndTime() + '>';
	}

	for (int k = 0; k < courseArraySize; k++)
	{
		for (int i = 0; i < 13; i++)
		{
			for (int j = 0; j < numOfRooms; j++)
			{
				if (checkRoomAvailability(sortedSchedule[j]))
				{
					if (checkTotalTime(sortedSchedule[j]))
					{
						sortedSchedule[i][j] = tempSchedule[k].substr(0, tempSchedule[k].find('_'));
					}
				}
			}
		}
	}

}
bool checkTotalTime(string roomDay[13])
{
	bool toReturn = true;
	int totalTime = 0;
	for (int i = 0; i < 13; i++)
	{
		totalTime += stoi(roomDay[i].substr(roomDay[i].find('@'), roomDay[i].find('!'))) + stoi(roomDay[i].substr(roomDay[i].find('!'), roomDay[i].find('>')));
		totalTime += 10;
	}
	if (totalTime > 1020)
	{
		toReturn = false;
	}
	return toReturn;
}
bool checkRoomAvailability(string roomSchedule[13])
{
	bool toReturn = false;
	int totalCourses = 0;
	for (int i = 0; i < 13; i++)
	{
		if (roomSchedule[i] != "NULL")
		{
			totalCourses++;
		}
	}
	if (totalCourses < 13)
	{
		toReturn = true;
	}
	return toReturn;
}