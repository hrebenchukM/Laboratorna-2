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

	//-�� ��� �����++ --� ������ ����������� ���������(���������� / �������� ����);
	DATA& operator ++();
	DATA& operator --();
	DATA& operator ++(int);
	DATA& operator --(int);



	
	//-��������� + � �(���� + ���������� ���� / ���� � ���������� ���� / ���� - ����);

	DATA operator - (int n);
	DATA operator + (int n);
	DATA& operator - (DATA d2);


	//-��������� += � � = (���� += ���������� ���� / ���� � = ���������� ����);

	DATA& operator+=(int);
	DATA& operator-=(int);

	//-��������� < � > � <= � >= � == � != (��� ����������� ���� ���).
	bool operator > (DATA& d2);
	bool operator < (DATA& d2);
	bool operator >= (DATA& d2);
	bool operator <= (DATA& d2);
	bool operator == (DATA& d2);
	bool operator != (DATA& d2);

};

