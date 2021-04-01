////////////////////////////////////////////////////////////////
// ELEX 4618 Template project for BCIT
// Created Oct 5, 2016 by Craig Hennessey
// Last updated December 30, 2020
////////////////////////////////////////////////////////////////

//#include "CBase4618.h"
#include "CSort.h"
#include <pigpio.h>

using namespace std;

int main(int argc, char* argv[])
{
	char inputSelect;

	do {

		cout << "**************************************** \n"
			<< "              ELEX4618 \n"
			<< "       Embedded System Control \n"
			<< "**************************************** \n\n"
			<< "  (R)Recycling Sorter \n"
			<< "  (Q)uit \n"
			<< "\n    Cmd:";

		cin >> inputSelect;

		switch (inputSelect) {

		case 'R':
		case 'r': {
			CSort recycle;
			recycle.run();
			break;
		}

		case 'Q':
		case 'q': {
			cout << "Quiting" << endl;
			exit(0);
			break;
		}
		default: {
			cout << "Command not found\n";
			inputSelect = 0;
			break;
		}
		}

	} while (inputSelect == 'Y' || inputSelect == 'y' || inputSelect == 0);
	return 0;

}