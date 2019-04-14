#ifndef SAFECIN_H
#define SAFECIN_H

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class safecin
{
public:
	void operator>>(int& input);
	void operator>>(short& input);
	void operator>>(long& input);
	void operator>>(unsigned int& input);
	void operator>>(unsigned long& input);
	void operator>>(unsigned short& input);
	void operator>>(float& input);
	void operator>>(double& input);
	void operator>>(long double& input);
};

#endif