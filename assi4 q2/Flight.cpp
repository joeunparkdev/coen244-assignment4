/*
 * Flight.cpp

 *
 *  Created on: Mar 19, 2019
 *Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */
#include "Booking.h"
#include "Employee.h"
#include "Flight.h"

Flight::Flight(){
	flightNum = 1989;
	numofBookings = 0;
	numofEmployees = 0;
}
Flight::Flight(int f, Date a, Date b, Time c, Time d){
	flightNum = f;

	numofBookings = 0;
	bookings = new Booking[49]; //Flight can only hold 50 seats/bookings

	numofEmployees = 0;
	employees = new Employee[9];  //Flight can only have 10 people working at once

	arrivalDate = a;
	departureDate = b;
	arrivalTime = c;
	departureTime = d;
}
Flight::~Flight() {
	std::cout << "Deconstructing Flight Object!" << std::endl;
}

/////////////////////////////Member Functions/////////////////////////////////

void Flight::setFlightNum(int n){
	flightNum = n;
}
int Flight::getFlightNum(){
	return flightNum;
}

void Flight::printFlightNum(){
	std::cout << "Your flight number is: " << flightNum << std::endl;
}

void Flight::printFlightdetails(){
	std::cout << "The flight will departure on the date of ";
	departureDate.printDate();
	std::cout << " at the time of ";
	departureTime.printTime();

	std::cout << "The flight will arrive on the date of ";
	arrivalDate.printDate();
	std::cout << " at the time of ";
	arrivalTime.printTime();
}

/////////////////////////////Sub System for Bookings///////////////////////////

void Flight::addBooking(Booking &b){
	if (numofBookings <= 49){
		bookings[numofBookings] = b;
		numofBookings++;
		std::cout << "Number of bookings for Flight: " << flightNum << " are now at " << numofBookings << std::endl;
	}

	else{
		std::cout << "You have exceeded the maximum number of bookings." << std::endl;
	}
}

void Flight::removeBooking(std::string seatNumber ){
	for (int i = 0; i < numofBookings; i++){
		if ( seatNumber.compare(bookings[i].getSeat()) == 0)
		{
			for (int j = i; j < numofBookings; j++){
				bookings[j] = bookings [j + 1];
			}
			std::cout << "You have removed your booking for seat number " << seatNumber << std::endl;
			numofBookings--;
			return;
		}

		else{
			std::cout << "Sorry, but the seat number you gave us does not match any existing reservations." << std::endl;
		}
	}
}

void Flight::listBookings() const{
	for (int i = 0; i < numofBookings; i++){
		bookings[i].printBooking();
	}
}


///////////////////////////////////////Sub System for Employees///////////////////////////////////////////

void Flight::addEmployee(Employee &e){
	if (numofEmployees <= 9){
			employees[numofEmployees] = e;
			numofEmployees++;
			std::cout << "Number of employees for Flight: " << flightNum << " are now at " << numofEmployees << std::endl;
		}

		else{
			std::cout << "You have exceeded the maximum number of employees." << std::endl;
		}
}

void Flight::removeEmployee(int id){
	for (int i = 0; i < numofEmployees; i++)
		if (employees->getId() == id){
			for (int j = i; j < numofEmployees; j++){
				employees[j] = employees [j + 1];
			}
			std::cout << "You have removed the employee from the flight." << std::endl;

			numofEmployees--;
			return;
		}

		else{
			std::cout << "We're sorry, but the employee doesn't not work on this flight." << std::endl;
		}

}

void Flight::listEmployees() const{
	for (int i = 0; i < numofEmployees; i++){
		employees[i].printEmployee();
	}
}

