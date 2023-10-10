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
	if (month % 2 == 0 && month != 2)
	{
		if (day > 0 && day <= 29)
		{
			day += 1;
		}
	}
	else if (month % 2 != 0 && month != 2)
	{
		if (day > 0 && day <= 30)
		{
			day += 1;
		}
	}
	if (month == 2)
	{
		if (day > 0 && day <= 28)
		{
			day += 1;
		}
	}
	
	return *this;
}

DATA& DATA::operator--()
{

	if (month % 2 == 0 && month != 2)
	{
		if (day > 1 && day <= 30)
		{
			day -= 1;
		}
	}
	else if (month % 2 != 0 && month != 2)
	{
		if (day > 1 && day <= 31)
		{
			day -= 1;
		}
	}
	if (month == 2)
	{
		if (day > 1 && day <= 29)
		{
			day -= 1;
		}
	}
	return *this;

}

DATA& DATA::operator++(int)
{
	DATA temp(day, month, year);
	if (month % 2 == 0 && month != 2)
	{
		if (day > 0 && day <= 29)
		{
			day += 1;
		}
	}
	else if (month % 2 != 0 && month != 2)
	{
		if (day > 0 && day <= 30)
		{
			day += 1;
		}
	}
	if (month == 2)
	{
		if (day > 0 && day <= 28)
		{
			day += 1;
		}
	}
	return temp;
}

DATA& DATA::operator--(int)
{
	DATA temp(day, month,year);
	if (month % 2 == 0 && month != 2)
	{
		if (day > 1 && day <= 30)
		{
			day -= 1;
		}
	}
	else if (month % 2 != 0 && month != 2)
	{
		if (day > 1 && day <= 31)
		{
			day -= 1;
		}
	}
	if (month == 2)
	{
		if (day > 1 && day <= 29)
		{
			day -= 1;
		}
	}
	return temp;
	
}

DATA DATA::operator-(int n)
{
	
	DATA temp = *this;
	if (temp.day > n)
	{
		temp.day = temp.day - n;
	}
	else {
		if (temp.month == 1)
		{
			temp.year--;
			temp.month = 12;
		}
		else
		{
			temp.month--;
		}
	
	}
	return temp;
}

DATA DATA::operator+(int n)
{
	DATA temp = *this;
	int NDaysInMonth = 31;

	if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11)
	{
		NDaysInMonth = 30;
	}
	else if (temp.month == 2)
	{
		NDaysInMonth = 28;
	}


	if (temp.day + n <= NDaysInMonth)
	{
		temp.day = temp.day + n;
	}
	else {

		temp.day = 1;
		if (temp.month == 12)
		{
			temp.month = 1;
			temp.year++;
		}
		else
		{
			temp.month++;
		}
	}

	return temp;
}

DATA& DATA::operator-(DATA d2)
{
	DATA temp = *this;
	if (temp.year > d2.year)
	{
		temp.year = temp.year - d2.year;
	}
	else {
		if (temp.month > d2.month)
		{
			temp.month = temp.month - d2.month;

		}
		else {
			if (temp.day > d2.day)
			{
				temp.day = temp.day - d2.day;
			}
		}
	}
			
	if (temp.year < d2.year)
	{
		temp.year = d2.year- temp.year;
	}
	else {
		if (temp.month < d2.month)
		{
			temp.month = d2.month- temp.month ;

		}
		else {
			if (temp.day < d2.day)
			{
				temp.day =d2.day- temp.day ;
			}
		}
	}
	
	if (temp.year = d2.year)
	{
		temp.year = d2.year;
	}
	else {
		if (temp.month > d2.month)
		{
			temp.month = temp.month - d2.month;

		}
		else if (temp.month < d2.month) {

			temp.month = d2.month - temp.month;
		}
			if (temp.day > d2.day)
			{
				temp.day = temp.day - d2.day;
			}
			else if (temp.day < d2.day)
			{
				temp.day = d2.day - temp.day;
			}
		}
	return temp;
}














DATA& DATA::operator+=(int n)
{
	int NDaysInMonth= 31;

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		NDaysInMonth = 30;
	}
	else if (month == 2)
	{
		NDaysInMonth = 28;
	}
			
	if (day + n <= NDaysInMonth)
	{
		this->day += n;
	}
	else {

		this->day = 1;
		if (month == 12)
		{
			month = 1;
			year++;
		}
		else
		{
			month++;
		}
	}
	return *this;
}

DATA& DATA::operator-=(int n)
{
	int NDaysInMonth = 31;

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		NDaysInMonth = 30;
	}
	else if (month == 2)
	{
		NDaysInMonth = 28;
	}

	if (day + n <= NDaysInMonth)
	{
		this->day -= n;
	}
	else {

		day = 1;
		if (month == 12)
		{
			month = 1;
			year++;
		}
		else
		{
			month++;
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

