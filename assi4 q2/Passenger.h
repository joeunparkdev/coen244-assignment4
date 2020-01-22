/*
 * Passenger.h
 *
 *  Created on: Mar 14, 2019
Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

#include "Person.h"

class Booking;

class Passenger: public Person {
private:
	std::string frequentFlyerPlan;
	Booking * bookings;
	int numofBookings;

public:
	Passenger();
	Passenger(std::string, int, std::string, std:: string);
	virtual ~Passenger();

	void setPlan(std::string);
	std::string getPlan() const;
	void printPassenger() const;

	void addBooking(Booking&);
	void removeBooking(std::string);
	void listBookings() const;
	void searchBookings(std::string) const;
};

#endif /* PASSENGER_H_ */
