#include <iostream>
#include "Chrono.h"
using namespace std;

namespace Chrono{
	Date::Date(int yy, Month mm, int dd)
		:y(yy), m(mm), d(dd)
	{
		if(!is_date(yy,mm,dd))	throw Invalid();
	}
	const Date& default_date()
	{
		static const Date dd(2001,Date::jan,1);
		return dd;
	}
	
	Date::Date()
	 	:y(default_date().year()),
	 	m(default_date().month()),
	 	d(default_date().day())
	{
	}
	
	void Date::add_day(int n){ 
		int dias[12];
		dias[1]=31;
		dias[2]=28;
		dias[3]=31;
		dias[4]=30;
		dias[5]=31;
		dias[6]=30;
		dias[7]=31;
		dias[8]=31;
		dias[9]=30;
		dias[10]=31;
		dias[11]=30;
		dias[12]=31;
		//f (n%365)
		
		/*switch(m)
		{
			case jan:  if (d==31)
			{m=Month(m+n); d=1;}
			else{
				d=d+1;
			}
			break;
			case mar:  if (d==31)
			{m=Month(m+n); d=1;}
			else{
				d=d+1;
			}
			break;
			case apr:  if (d==30)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case may:  if (d==31)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case jun:  if (d==30)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case jul:  if (d==31)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case aug:  if (d==31)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case sep:  if (d==30)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case oct:  if (d==31)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case nov:  if (d==30)
			{m=Month(m+1); d=1;}
			else{
				d=d+1;
			}
			break;
			case dec:  if (d==31)
			{y=y+1; m=jan; d=1;}
			else{
				d=d+1;
			}
			break;  
		}*/
	}
	void Date::add_month(int n){
		//if (m!=jan && m!=feb && m!=mar && m!=apr && m!=may && m!=jun && m!=jul && m!=aug && m!=sep && m!=oct && m!=nov && m!=dec){
		if (m==dec){
		m=jan; //Se usa para comparar con Marzo
		y=y+1;	
		}
		else{
			m=Month(m+1);
		}
		//y+=n;
	}
	void Date::add_year(int n)
	{
		if (m==feb && d==29 && !leapyear(y+n)){
		m=mar; //Se usa para comparar con Marzo
		d=1;	
		}
		y+=n;
	}
	
	bool is_date(int y, Date::Month m, int d){
		if(d<=0) return false;
		int days_in_month = 31;
		switch(m){
			case Date::feb:
				days_in_month=(leapyear(y))?29:28;
			break;
			case Date::apr: case Date::jun: case Date::sep:
			days_in_month=30;
			break;
		}
		if(days_in_month<d) return false;
		return true;
	}
	
	bool leapyear(int y)
	{
		if( y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
			cout<<"Es un aino bisiesto"<<endl;
			return false;
		}else{
			cout<<"No es un anio bisiesto"<<endl;
			return true;
		}
	}
	
	bool operator==(const Date& a, const Date& b)
	{
		return a.year()==b.year() 
			&& a.month()==b.month() 
			&& a.day()==b.day();
	}
	bool operator!=(const Date& a, const Date& b)
	{
		return !(a==b);
	}
	ostream& operator <<(ostream& os, const Date& d)
	{
		return os	<<'('<<d.year()
					<<','<<d.month()
					<<','<<d.day()
					<<')';
	}
	
	enum Day{
		sunday, monday, tuesday, wednesday, thursday, friday, saturday};
	
	
	Day day_of_week(const Date& d){return sunday;}
	Date next_Sunday(const Date& d){return d;}
	Date next_weekday(const Date& d){return d;}
};


int main()
	try{
	Chrono::Date holiday (1978, Chrono::Date::jul, 4);
	Chrono::Date d2 = Chrono::next_Sunday(holiday); 
	Chrono::Day d= day_of_week(d2);
	cout<<"Feriado es "<< holiday<<" d2 es "<<d2<<endl;
	int anio=1600;
	int anio2=3;
	Chrono::Date fecha1 (2004, Chrono::Date::jan, 31);
	//fecha1.add_year(anio2);
	//fecha1.add_month(1);
	fecha1.add_day(1);
	cout<<fecha1<<" ";
	Chrono::leapyear(anio);
	//Chrono::add_year(anio2);
	return holiday!=d2;
	}
	catch (Chrono::Date::Invalid&){
		cerr<<"error: Fecha invalida\n";
		return 1;
	}

