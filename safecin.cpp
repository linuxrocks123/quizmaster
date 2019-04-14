/***************************************************************************
                          safecin.cpp  -  description
                             -------------------
    begin                : Sat Jul 27 2002
    copyright            : (C) 2002 by Patrick Simmons
    email                : psimmons@flash.net
 ***************************************************************************/
#include "safecin.h"

void safecin::operator >>(int& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(short& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(long& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(unsigned int& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(unsigned long& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(unsigned short& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(float& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(double& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}

void safecin::operator >>(long double& some_number)
{
start:
	bool error;
	error=!(cin >> some_number);
	if (error)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl << "Invalid input." << endl;
		goto start;
	}
}
