/*
 * Employee.cpp
 *
 *  Created on: Mar 19, 2019
 * Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */
#include <iostream>
#include "Flight.h"
#include "Employee.h"
#include "Person.h"

	Employee::Employee(){
		jobFunction = "Giver of Snacks";
		numofFlights = 0;
	}

	Employee::Employee(std::string j, int a, std::string b, std::string c): Person(a, b, c){
		jobFunction = j;
		numofFlights = 0;
		flights = new Flight[1];
		//Employee can only have two flights, for purpose of round trips
	}

	Employee::~Employee(){
		std::cout << "Deconstructing employee object!" << std::endl;
	}

	/////////////////////////////////Member Functions////////////////////////

	void Employee::setJob(std::string j){
		jobFunction = j;
	}

	std::string Employee::getJob() const{
		return jobFunction;
	}

	void Employee::printJob() const{
		std::cout << "Employee " << getName() << " has the job " << jobFunction << std::endl;
	}

	void Employee::printEmployee() const{
		std::cout << "Employee name: " << getName() << " at address " << getAddress() << std::endl;
		std::cout << "Your employee id is ";
		std::cout << getId();
		std::cout << ", and you'll be working as a " << jobFunction << " on the flight!" << std::endl;
	}

	////////////////////////////////Flight Subsystem/////////////////////////

	void Employee::addFlights(const Flight &f){
		if (numofFlights <= 1)
		{
			flights[numofFlights] = f;
			numofFlights++;
			std::cout << "Number of flights for employee " << getName() << " has reached " << numofFlights << std::endl;
		}

		else{
			std::cout << "You have reached the maximum number of flights!" << std::endl;
		}
	}

	void Employee::removeFlights(int a){
		for (int i = 0; i < numofFlights; i++){
			if (flights->getFlightNum() == a)
			{
				for (int j = i; j < numofFlights; j++){
					flights[j] = flights [j + 1];
				}
				std::cout << "Deleting flight number " << flights->getFlightNum() << std::endl;
				numofFlights--;
				return;
			}

		}
	}

	void Employee::listFlights() const{
		for (int i = 0; i < numofFlights; i++){
			std::cout << "Employee " << getName() << " is on flight number: ";
			flights[i].printFlightNum();
		}
	}

