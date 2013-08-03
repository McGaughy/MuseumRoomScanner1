// MuseumRoomScanner1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void readingData(){
	int lines=1,r=1,v=1,t=1,o,i=1;
	ifstream roomdata ("roomdata.txt");
	roomdata >> lines;

	int *room = new int[lines];
	int *visitor = new int[lines];
	int *time = new int[lines];
	char *IO = new char[lines]; 

	do
		{
			room[i] = r;
			visitor[i] = v;
			IO[i] = o;
			time[i] = t;
			cout << "test";
			i++;
		}while((roomdata>>r>>v>>o>>t));
}

int _tmain(int argc, _TCHAR* argv[])
{
	try{
	readingData();
	}
	catch (...)
	{
    cout << "exception" << endl;
	}

	cin.ignore();
	return 0;
}

