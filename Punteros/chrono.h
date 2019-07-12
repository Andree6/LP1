#ifndef ABSTRACT_H
#define ABSTRACT_H
#include <iostream>
using namespace std;
namespace Chrono{
	class Date{
		public:
			enum Month{
				jan=1, feb=2, mar=3, apr=5, may=6, jun=7, jul=8, aug, sep, oct, nov, dec
			};
			
			class Invalid{};
			
			Date(int y, Month m ,int d);
			Date();
			
			int day() 		const {return d;}
			Month month() 	const {return m;}
			int year() 	const {return y;}
			
			void add_day(int n);
			void add_month(int n);
			void add_year(int n);
		private:
			int 	y;
			Month 	m;
			int 	d;
	};
	bool is_date(int y, Date::Month m, int d);
	bool leapyear(int y);
	//void add_year(int y);
	bool operator==(const Date& a, const Date& b);
	bool operator!=(const Date& a, const Date& b);
	
	ostream& operator <<(ostream& os, const Date& d);
	istream& operator >>(istream& is, const Date& d);
	
}
#endif
