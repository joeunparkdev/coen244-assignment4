/*
 * Flight.h
 *
 *  Created on: Mar 19, 2019
 * Author: Jonah Dorant(21313339) Joeun Park (40066406) */

#ifndef FLIGHT_H_
#define FLIGHT_H_

#include <iostream>
#include "Date.h"
#include "Time.h"

class Booking;
class Employee;

class Flight {

private:
	int flightNum;
	Booking * bookings;
	int numofBookings;
	Employee * employees;
	int numofEmployees;
	Date arrivalDate;
	Date departureDate;
	Time arrivalTime;
	Time departureTime;

public:
	Flight();
	Flight(int, Date, Date, Time, Time);
	~Flight();

	void setFlightNum(int);
	int getFlightNum();
	void printFlightNum();
	void printFlightdetails();


	void addBooking(Booking&);
	void removeBooking(std::string);
	void listBookings() const;
	void searchBookings(std::string) const;

	void addEmployee(Employee&);
	void removeEmployee(int);
	void listEmployees() const;
	void searchEmployees(int) const;

};



#endif /* FLIGHT_H_ */
