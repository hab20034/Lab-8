#include"Person.h"
using namespace std;

class Customer : public Person{
	private:
		int mechanicID;
		Appointment appointment;
	public:
		void setmID(int mID);
		int getmID();
		void setappointment(Appointment app);
		Appointment getappointment();
		bool operator == (Customer &b);
		bool operator < (Customer &b);
		
};
