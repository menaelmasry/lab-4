/*
 * Bloodpressuretest.hpp
 *
 *  Created on: Nov 28, 2013
 *      Author: menael-masry
 */

#ifndef BLOODPRESSURETEST_HPP_
#define BLOODPRESSURETEST_HPP_
#include <iostream>
#include <string>
using namespace std;

class Bloodpressuretest {
protected:
	int systolicpressure;
	int diastolicpressure;
	string bloodpresult;
public:
	Bloodpressuretest();
	virtual ~Bloodpressuretest();
};

#endif /* BLOODPRESSURETEST_HPP_ */
