#include "Person.h"
usingnamespace std;

class Mechanic: public Person{
	private:
		int counter;
		Appointment a[24];
		int count=0;
	public:
		bool isAvailable(int h, int m);
		
		void setAppointment (int h, int m);
};
