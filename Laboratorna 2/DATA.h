#pragma once
class DATA
{
	int day;
	int month;
	int year;
public:
	DATA();
	DATA(int d, int m , int y);
	//DATA(const DATA&); // copy constructor do not need ( int ,int and int )
	//~DATA(); destructor do not need ( int ,int and int )
	//void Input();
	void Output() const;// ????? ?? ???????

	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;
	void SetDay(int d);
	void SetMonth(int m);
	void SetYear(int y);

	//-по две формы++ --с полным сохранением семантики(прибавляют / отнимают день);
	DATA& operator ++();
	DATA& operator --();
	DATA& operator ++(int);
	DATA& operator --(int);



	
	//-операторы + и –(дата + количество дней / дата – количество дней / дата - дата);

	DATA operator - (int n);
	DATA operator + (int n);
	DATA& operator - (DATA d2);


	//-операторы += и – = (дата += количество дней / дата – = количество дней);

	DATA& operator+=(int);
	DATA& operator-=(int);

	//-операторы < и > и <= и >= и == и != (для сравнивания двух дат).
	bool operator > (DATA& d2);
	bool operator < (DATA& d2);
	bool operator >= (DATA& d2);
	bool operator <= (DATA& d2);
	bool operator == (DATA& d2);
	bool operator != (DATA& d2);

};

