/*
 * Passenger.cpp
 *
 *  Created on: Mar 14, 2019
Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */

#include "Passenger.h"
#include "Booking.h"

Passenger::Passenger(){
	frequentFlyerPlan = "I have no clue what this is for";
	numofBookings = 0;
	//bookings = new Booking[6];  //Passenger can book a maximum of 6 flights
}
Passenger::Passenger(std::string p, int a, std::string b, std::string c): Person(a, b, c){
	frequentFlyerPlan = p;
	numofBookings = 0;
	bookings = new Booking[6];  //Passenger can book a maximum of 6 flights
}
Passenger::~Passenger(){
	std::cout << "Deconstructing Passenger object!!" << std::endl;
}

/////////////////////////////////////////Member Function/////////////////////////////////////////////////////

void Passenger::setPlan(std::string p){
	frequentFlyerPlan = p;
}
std::string Passenger::getPlan() const{
	return 	frequentFlyerPlan;
}
void Passenger::printPassenger() const{
	std::cout << "Passenger name: " << getName() << " at address " << getAddress() << std::endl;
	std::cout << "Your passenger id is ";
	std::cout << getId();
	std::cout << ", and you have the " << frequentFlyerPlan << " flyer plan!" << std::endl;
}

/////////////////////////////////////////

void Passenger::addBooking(Booking &b){
	if (numofBookings <= 6){
		bookings[numofBookings] = b;
		numofBookings++;
		std::cout << "Number of bookings for Passenger ID: ";
		std::cout << getId();
		std::cout<< " are now at " << numofBookings << std::endl;
	}

	else{
		std::cout << "You have exceeded the maximum number of bookings." << std::endl;
	}
}
void Passenger::removeBooking(std::string seatNumber){
	for (int i = 0; i < numofBookings; i++){
		if ( seatNumber.compare(bookings[i].getSeat()) == 0)
		{
			for (int j = i; j < numofBookings; j++){
				bookings[j] = bookings [j + 1];
			}
			numofBookings--;
			return;
		}

		else{
			std::cout << "Sorry, but the seat number you gave us does not match any existing reservations." << std::endl;
		}
	}
}
void Passenger::listBookings() const{
	for (int i = 0; i < numofBookings; i++){
		bookings[i].printBooking();
	}
}

