#include <iostream>
#include <string>

#include "Passenger.h"
#include "Booking.h"
#include "Flight.h"
#include "Employee.h"
#include "Date.h"
//Author: Jonah Dorant(21313339) Joeun Park (40066406)
using namespace std;

int main()
{
	//Creating Time and Date objects for flights
	Date d1(01, 04, 2019);
	Date d2(07, 14, 2019);
	Date a1(02, 04, 2019);
	Date a2(07, 15, 2019);
	Time t1(01, 00, 12);
	Time t2(00, 00, 18);

	//Creating Passenger objects
	Passenger p1("Flight Plan", 1000, "Jay","Canada");
	Passenger p2("Flight Plan", 1001, "Es", "United States");
	Passenger p3("Flight Plan", 1002, "Kay", "Mexico");
	Passenger p4("Flight Plan", 1003, "Tee", "France");
	Passenger p5("Flight Plan", 1004, "Dee", "Germany");

	//Creating Employee objects
	Employee e1("Pilot", 0001, " En ", "Canada");
	Employee e2("Co Pilot", 0002, " Aye", "Canada");
	Employee e3("Stewardess", 0003, "Bee", "Canada");

	//Creating Booking objects
	Booking b1("8008");
	Booking b2("455");
	Booking b3("73375");

	//Creating Flight objects
	Flight f1(123321, a1, d1, t1, t2);
	Flight f2(888888, a2, d2, t1, t2);

	//Passenger can have many bookings...
	p1.addBooking(b1);
	p1.addBooking(b2);

	//...But bookings can only have one passenger!
	b1.addPassenger(p1);
	b2.addPassenger(p1);

	//Flights can have many bookings...
	f1.addBooking(b1);
	f1.addBooking(b2);

	//...But once again, a booking can only have one flight!
	b1.addFlight(f1);
	b2.addFlight(f1);

	//Flights can also have employees working during
	f1.addEmployee(e1);
	f1.addEmployee(e2);
	f2.addEmployee(e3);

	//Test to see if Booking received flights and passengers properly
	b1.printPassenger();
	b2.printPassenger();
	b1.printFlight();
	b2.printFlight();

	//Test to see if passengers and flights received bookings properly
	p1.listBookings();
	f1.listBookings();

	//Test to see if Flight received Employees properly
	f1.listEmployees();
	f2.listEmployees();

	//Test to see if Flight received departure and arrival times/dates properly
	f1.printFlightdetails();
	f2.printFlightdetails();

	f1.removeEmployee(1);
	f1.listEmployees();


	return 0;
}
