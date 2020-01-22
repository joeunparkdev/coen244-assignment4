/*
 * Employee.h
 *
 *  Created on: Mar 19, 2019
 * Author: Jonah Dorant(21313339) Joeun Park (40066406) */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include "Person.h"

class Flight;

class Employee: public Person {
private:
	std::string jobFunction;
	Flight * flights;
	int numofFlights;

public:
	Employee();
	Employee(std::string, int, std::string, std:: string);
	virtual ~Employee();

	void setJob(std::string);
	std::string getJob() const;
	void printJob() const;
	void printEmployee() const;

	void addFlights(const Flight&);
	void removeFlights(int);
	void listFlights() const;
};

#endif /* EMPLOYEE_H_ */
