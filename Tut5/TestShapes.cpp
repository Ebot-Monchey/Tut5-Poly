#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
	Shape* shape[10];
	shape[0] = new Circle(1);
	shape[1] = new Circle(2);
	shape[2] = new Circle(3);
	shape[3] = new Triangle(1, 2, 3);
	shape[4] = new Triangle(2, 3, 4);
	shape[5] = new Triangle(3, 4, 5);
	shape[6] = new Rectangle(1, 2);
	shape[7] = new Rectangle(2, 3);
	shape[8] = new Rectangle(3, 4);
	shape[9] = new Circle(4);

	for (int i = 0; i < 10; i++) {
		shape[i]->name();
		cout << " and my area is: " << shape[i]->area() << endl;
	}
	
	system("pause");
	return 0;
}