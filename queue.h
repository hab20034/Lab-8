#include "Mechanic.h"
using namespace std;
const int MAX=4;
template <class T>
class queue{ 
	private:
		Mechanic* m[MAX];
		int rear, front, count;
	public:
		queue();
		bool isEmpty();
		bool isFull();
		void EnQueue(T element);
		void DeQueue();
};

