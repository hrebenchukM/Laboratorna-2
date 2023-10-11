#include<iostream>
using namespace std;
#include "DATA.h"


int main() {

	DATA DATA1(10, 1, 2023);
	cout << "Date 1)"<<endl;
	DATA1.Output();
	DATA DATA2(31, 11, 2023);
	cout << "Date 2)"<<endl;
	DATA2.Output();

	DATA RezDATA1;
	RezDATA1 = --DATA1;
	cout << "1)--Day:" << endl;
	RezDATA1.Output();

	RezDATA1 = DATA1--;
	cout << "1)Day--:" << endl;
	RezDATA1.Output();


	DATA RezDATA2;
	RezDATA2 = ++DATA2;
	cout << "2)++Day:" << endl;
	RezDATA2.Output();

	RezDATA2 = DATA2++;
	cout << "2)Day++:" << endl;
	RezDATA2.Output();

	



	cout << "______________________________" << endl;

	RezDATA1= DATA1 +=10;
	cout << "1)Day+=10:" << endl;
	RezDATA1.Output();

	RezDATA1 = DATA1 -= 10;
	cout << "1)Day-=10:" << endl;
	RezDATA1.Output();

	
	RezDATA2 = DATA2 -5;
	cout << "2)Day-5:" << endl;
	RezDATA2.Output();

	RezDATA2 = DATA2 + 5;
	cout << "2)Day+5:" << endl;
	RezDATA2.Output();

	RezDATA2 = DATA1 - DATA2;
	cout << "2)DATA1 - DATA2:" << endl;
	RezDATA2.Output();


	cout << "______________________________" << endl;
	if (DATA1 > DATA2)
	{
		cout << "Date 1) > Date 2)" << endl;
	}
	else if (DATA1 < DATA2)
	{
		cout << "Date 1) < Date 2)" << endl;
	}
	else if (DATA1 == DATA2)
	{
		cout << "Date 1) == Date 2)" << endl;
	}
	else if (DATA1 != DATA2)
	{
		cout << "Date 1) != Date 2)" << endl;
	}

	else if (DATA1 >= DATA2)
	{
		cout << "Date 1) >= Date 2)" << endl;
	}
	else if (DATA1 <= DATA2)
	{
		cout << "Date 1) <= Date 2)" << endl;
	}
	else if (DATA1 == DATA2)
	{
		cout << "Date 1) == Date 2)" << endl;
	}
	else if (DATA1 != DATA2)
	{
		cout << "Date 1) != Date 2)" << endl;
	}


	cout << "______________________________" << endl;



 }