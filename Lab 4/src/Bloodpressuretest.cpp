/*
 * Bloodpressuretest.cpp
 *
 *  Created on: Nov 28, 2013
 *      Author: menael-masry
 */

#include "Bloodpressuretest.hpp"
#include <iostream>
#include <string>
#include "Physicaltests.cpp"
using namespace std;

Bloodpressuretest::Bloodpressuretest() {
				int age;
				string firstname;
				string lastname;
				int idnumber;
				string comment;
				int time;
				string day;
				string month;
				int year;
				int systolicpressure;
				int diastolicpressure;
				string bloodpresult;

}

//The blood pressure test result will be inputed by providing two values
// The blood pressure will be displayed as systolicpressure/diastolicpressure mm Hg(mercury)
//The two values will include the diastolic(int diastolicpressure) blood pressure and the systolic blood pressure(int systolicpressure)
// If the systolic blood pressure value is 120 and the diastolic pressure value is 80
// An output display will announce that the patient's blood pressure is normal(string bloodpresult)
//If the systolic blood pressure value is 140 or more, and the diastolic pressure is 90 or more
//An output display will announce that the patient's blood pressure is high
//If the systolic blood pressure values is between 120 and 140
//And if the diastolic blood pressure value is between 80 and 90
//An output display will announce that the patient's blood pressure is higher than normal
//If the systolic pressure is lower than 120 and the diastolic pressure is lower than 80
//An output display will announce that the patient's blood pressure is lower than normal
//With each output depending on the output the patient's information will also be displayed
//The information includes name, date, time, id number, and comments of the user or physician concerning the patient's blood pressure level
