/*
 * Booking.h
 *
 *  Created on: Mar 14, 2019
 *  Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */

#ifndef BOOKING_H_
#define BOOKING_H_

#include <iostream>
class Passenger;
class Flight;

class Booking {
private:
	Passenger * passenger;
	Flight * flight;
	std::string seatNumber;

public:
	Booking();
	Booking(std::string);
	~Booking();

	void setSeat(std::string);
	std::string getSeat() const;
	void printBooking();

	void addPassenger(const Passenger&);
	void removePassenger(int);
	void printPassenger() const;

	void addFlight(const Flight&);
	void removeFlight(int);
	void printFlight() const;

};

#endif /* BOOKING_H_ */
