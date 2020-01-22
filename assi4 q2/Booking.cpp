/*
 * Booking.cpp
 *
 *  Created on: Mar 14, 2019
 *      Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */
#include <iostream>
#include <string>

using namespace std;

#include "Booking.h"
#include "Passenger.h"
#include "Flight.h"

Booking::Booking(){
	seatNumber = "1337";
	passenger = new Passenger;
	flight = new Flight;
}

Booking::Booking(std::string seatNumber){
	passenger = new Passenger;
	flight = new Flight;
	this->seatNumber = seatNumber;
}

Booking::~Booking(){
	cout << "Deconstructing Booking object!" << endl;
}

/////////////////////////////////////Set Functions//////////////////////////////

void Booking::setSeat(std::string seatNumber){
	this->seatNumber = seatNumber;
}

/////////////////////////////////////Get Functions//////////////////////////////

std::string Booking::getSeat() const{
	return seatNumber;
}

////////////////////////////////////Print Function/////////////////////////////

void Booking::printBooking(){
	cout << "Seat number is: " << seatNumber << endl;
}

///////////////////////////////////Sub System Passenger///////////////////////

void Booking::addPassenger(const Passenger &p){
	passenger[0] = p;
}

void Booking::removePassenger(int Id){
	if (passenger->getId() == Id){
		delete [] passenger;

		cout << "Passenger has been removed from booking!" << endl;
	}

	else{
		cout << "Passenger Id is not associated with this booking!" << endl;
	}
}

void Booking::printPassenger() const{
	passenger->printPerson();
}

////////////////////////////////////Sub System Flight////////////////////////////

void Booking::addFlight(const Flight &f){
	flight[0] = f;
}

void Booking::removeFlight(int fnum){
	if (flight->getFlightNum() == fnum){
			delete [] flight;

			cout << "Flight has been removed from booking!" << endl;
		}

		else{
			cout << "Flight number is not associated with this booking!" << endl;
		}
}

void Booking::printFlight() const{
	flight->printFlightNum();
}
