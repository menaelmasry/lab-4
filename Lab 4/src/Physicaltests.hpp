/*
 * Physicaltests.hpp
 *
 *  Created on: Dec 1, 2013
 *      Author: menael-masry
 */

#ifndef PHYSICALTESTS_HPP_
#define PHYSICALTESTS_HPP_
#include <iostream>
#include <string>
#include "Bloodpressuretest.cpp"
#include "Respirationratetest.cpp"
#include "Pulseratetest.cpp"
using namespace std;
class Physicaltests {
protected:
	int age;
	string firstname;
	string lastname;
	int idnumber;
	string comment;


public:

	int time;
	string day;
	string month;
	int year;
	Physicaltests();
	virtual ~Physicaltests();
};

class Bloodpressuretest:public Physicaltests {//Class Bloodpressuretest inherits from Class Physicaltests
		int time;
		int age;
		string firstname;
		string lastname;
		int idnumber;
		string comment;
		int time;
		string day;
		string month;
		int year;
};

class Respirationratetest:public Physicaltests {//Class Respirationratetest inherits from Class Physicaltests
			int time;
			int age;
			string firstname;
			string lastname;
			int idnumber;
			string comment;
			int time;
			string day;
			string month;
			int year;
};
class Pulseratetest:public Physicaltests{//Class Pulseratetest inherits from Class Physicaltests
	int time;
			int age;
			string firstname;
			string lastname;
			int idnumber;
			string comment;
			int time;
			string day;
			string month;
			int year;
};
