/*
 * Pulseratetest.hpp
 *
 *  Created on: Nov 28, 2013
 *      Author: menael-masry
 */

#ifndef PULSERATETEST_HPP_
#define PULSERATETEST_HPP_
#include <iostream>
#include <string>
using namespace std;
class Pulseratetest {
protected:
	int rate;
	string pulseresult;

public:
	string athletecheck;
	Pulseratetest();
	virtual ~Pulseratetest();
};

#endif /* PULSERATETEST_HPP_ */

