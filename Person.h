#include <iostream>
#include <cstring>
using namespace std;
class Person{
	private:
		string Name;
		int ID;
		int age;
	public:
		Person ();
		void setname(string n);
		string getname();
		void setid(int i);
		int getid();
		void setage(int a);
		int getage();
		void printinfo();
		struct Appointment {
			int hrs, mins;
		};
		Appointment A;
	};
	


