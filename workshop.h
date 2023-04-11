#include "Mechanic.h"
const int MAX=4;
using namespace std;

class workshop{
	private:
		Mechanic* m[MAX]
	public:
		Appointment setappointment (Appointment a, Mechanic M, Customer c);
		void displayapps (Appointment a);
};
