/*
 * Date.h
 *
 *  Created on: Mar 25, 2019
 * Author: Jonah Dorant(21313339) Joeun Park (40066406) */

#ifndef DATE_H_
#define DATE_H_

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(){
		day = 01;
		month = 01;
		year = 2000;
	}

	Date(int d, int m, int y){
		day = d;
		month = m;
		year = y;
	}

	~Date(){
		std::cout << "Destrucing Date object!" << std::endl;
	}

	void printDate(){
		std::cout << day << ", " << month << ", " << year << std::endl;
	}
};

#endif /* DATE_H_ */
