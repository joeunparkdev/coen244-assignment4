/*
 * Time.h
 *
 *  Created on: Mar 25, 2019
Author: Jonah Dorant(21313339) Joeun Park (40066406)
 */

#ifndef TIME_H_
#define TIME_H_

class Time{
private:
	int second;
	int minute;
	int hour;

public:
	Time(){
		second = 00;
		minute = 00;
		hour = 12;
	}

	Time(int s, int m, int h){
		second = s;
		minute = m;
		hour = h;
	}

	~Time(){
		std::cout << "Destructing Time object!" << std::endl;
	}

	void printTime(){
		std::cout << hour << ":" << minute << ":" << second << ":" << std::endl;
	}
};



#endif /* TIME_H_ */
