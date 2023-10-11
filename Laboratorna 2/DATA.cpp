#include "DATA.h"
#include<iostream>
using namespace std;

DATA::DATA()
{
	day = 0;
	month = 0;
	year = 0;
	cout << "Constructor" << endl;
}

DATA::DATA(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
	cout << "Constructor with 3 p" << endl;
}


void DATA::Output() const
{
	cout << day << " . ";
	cout << month << " . ";
	cout << year << " . " << endl;
	cout << "___________________" << endl;;
}

int DATA::GetDay() const
{
	return day;
}

int DATA::GetMonth() const
{
	return month;
}

int DATA::GetYear() const
{
	return year;
}

void DATA::SetDay(int d)
{
	this->day = d;
}

void DATA::SetMonth(int m)
{
	this->month = m;
}

void DATA::SetYear(int y)
{
	this->year = y;
}

DATA& DATA::operator++()
{
	day++;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
		day = 1;
		month++;
	}
	else if (month == 2) {
		
		if (month == 2 &&day > 28) {
			day = 1;
			month++;
		}
	}
	else if (day > 31) {
		day = 1;
		month++;
	}

	if (month > 12) {
		month = 1;
		year++;
	}

	return *this;
}



DATA& DATA::operator--()
{

     	if (day == 1) {
			//февраль дней
			if (month == 2) {
				
				day = 28;
			}
			// ћес€цы с  днем
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
	
				day = 31;
			}
			// ћес€цы с остальн≥ми  дн€ми
			else {
				
				day = 30;
			}

			if (month > 1) {
				month--;
			}
			else {
				month = 12;
				year--;
			}
		}
		else {
			day--;
		}

		return *this;

}


DATA& DATA::operator++(int)
{
		DATA temp(day, month, year);

		day++;
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
			day = 1;
			month++;
		}
		else if (month == 2) {
			if (day > 28) {
				day = 1;
				month++;
			}
		}
		else if (day > 31) {
			day = 1;
			month++;
		}

		if (month > 12) {
			month = 1;
			year++;
		}

		return temp;

}

DATA& DATA::operator--(int)
{
	DATA temp(day, month, year);

	if (day == 1) {

		if (month == 2) {
			// февраль  
			day = 28;
		}
		// ћес€цы с днем
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			
			day = 31;
		}
		// ћес€цы с остальн≥ми дн€ми
		else {
			
			day = 30;
		}

		if (month > 1) {
			month--;
		}
		else {
			month = 12;
			year--;
		}
	}
	else {
		day--;
	}

    return temp;
}

DATA DATA::operator-(int n)
{
	DATA temp(day, month, year);

	
		if (temp.day > 1) {
			temp.day--;
			n--;
		}
		else {
			if (temp.month == 1) {
				temp.month = 12;
				temp.year--;
			}
			else {
				temp.month--;
			}

			if (temp.month == 2) {
				temp.day = 28;
			}
			else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11) {
				temp.day = 30;
			}
			else {
				temp.day = 31;
			}
		}
	

	return temp;
	
}

DATA DATA::operator+(int n)
{
	
		DATA temp(day, month, year);

		temp.day += n;

		while (temp.day > 31) {
			if ((temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11) && temp.day > 30) {
				temp.day -= 30;
				temp.month++;
			}
			else if (temp.month == 2) {
				if (temp.day > 28) {
					temp.day -= 28;
					temp.month++;
				}
			}
			else {
				temp.day -= 31;
				temp.month++;
			}

			if (temp.month > 12) {
				temp.month = 1;
				temp.year++;
			}
		}

		return temp;
}

DATA& DATA::operator-(DATA d2)
{
	
		DATA result = *this;

		while (d2.year < result.year ||(d2.year == result.year && d2.month < result.month) ||(d2.year == result.year && d2.month == result.month && d2.day < result.day)) {
			if (result.day > 1) {
				result.day--;
			}
			else {
				if (result.month == 1) {
					result.year--;
					result.month = 12;
				}
				else {
					result.month--;
				}

				// ”читываем количество дней в мес€це
				if (result.month == 2) {
					
					result.day = 28;
				}
				else if (result.month == 4 || result.month == 6 || result.month == 9 || result.month == 11) {
					
					result.day = 30;
				}
				else {
					
					result.day = 31;
				}
			}
		}
		return result;
}














DATA& DATA::operator+=(int n)
{

	
		day += n;

		while (day > 31) {
			if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
				day -= 30;
				month++;
			}
			else if (month == 2) {
				if (day > 28) {
					day -= 28;
					month++;
				}
			}
			else {
				day -= 31;
				month++;
			}

			if (month > 12) {
				month = 1;
				year++;
			}
		}

		return *this;
}

DATA& DATA::operator-=(int n)
{
	if (day > 1) {
		day--;
		n--;
	}
	else {
		if (month == 1) {
			month = 12;
			year--;
		}
		else {
			month--;
		}

		if (month == 2) {
			day = 28;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			day = 30;
		}
		else {
			day = 31;
		}
	}
return *this;
}

bool DATA::operator>(DATA& d2)
{
	if (this->year > d2.year) {
		return true;
	}
	else if (d2.year> this->year) {
		return false;
	}
	if (this->month > d2.month) {
		return true;
	}
	else if (d2.month>this->month) {
		return false;
	}
	return day > d2.day;
}

bool DATA::operator<(DATA& d2)
{
	if (this->year <d2.year) {
		return true;
	}
	else if (d2.year <this->year) {
		return false;
	}
	if (this->month < d2.month) {
		return true;
	}
	else if (d2.month < this->month) {
		return false;
	}
	return day > d2.day;
}

bool DATA::operator>=(DATA& d2)
{
	if (this->year >= d2.year) {
		return true;
	}
	else if (d2.year >= this->year) {
		return false;
	}
	if (this->month >= d2.month) {
		return true;
	}
	else if (d2.month >= this->month) {
		return false;
	}
	return day >= d2.day;
}

bool DATA::operator<=(DATA& d2)
{
	if (this->year <= d2.year) {
		return true;
	}
	else if (d2.year <=this->year) {
		return false;
	}
	if (this->month <= d2.month) {
		return true;
	}
	else if (d2.month <= this->month) {
		return false;
	}
	return day <= d2.day;
}

bool DATA::operator==(DATA& d2)
{
	if (year == d2.year && month == d2.month && day == d2.day) {
		return true;
	}
	else {
		return false;
	}
}

bool DATA::operator!=(DATA& d2){

if (year != d2.year && month != d2.month && day != d2.day)
    {
	  return true;
    }
    else {
	return false;
    }
}

