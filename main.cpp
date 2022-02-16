#include <iostream>
using namespace std;


int main(void) {

	cout << "- AREAS AND CIRCUMFERENCES OF GEOMETRY SHAPES CALCULATOR -\n\n";

	while(true){
	cout << "Which type of geometry shape that you wanna calculate?\n\n";
	cout << "1. Square.\n2. Normal Triangle.\n3. Circle.\n4. Rectangle.\n5. Exit\n";

	int choice;
	cout << "\nEnter your choice: ";
	cin >> choice;

	switch (choice) {


	case 1:
		int choice;
		cout << "\nWhat you wanna calculate?\n\n1. Square Circumference.\n2. Square Area.\n3. Exit.\n\nEnter your choice: ";
		cin >> choice;

		cout << endl;

		switch (choice) {
		case 1:
			int squareRib;
			cout << "Please type lenght of the square rib: ";
			cin >> squareRib;

			cout << "\n- The square circumference is: " << squareRib * 4 << endl << endl;
			break;

		case 2:
			int squareRib1;
			cout << "Please type lenght of the sqaure rib: ";
			cin >> squareRib1;

			cout << "\n- The square area is: " << squareRib1 * squareRib1 << endl << endl;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "Invaild choice.\n";
			break;
		}
		break;



	case 2:
		int choice1;
		cout << "\nWhat you wanna calculate?\n\n1. Triangle Circumference.\n2. Triangle Area.\n3. Exit.\n\nEnter your choice: ";
		cin >> choice1;

		cout << endl;

		switch (choice1) {
		case 1:
			int firstTriangleRib;
			cout << "Please type lenght of the first triangle rib: ";
			cin >> firstTriangleRib;

			int secondTriangleRib;
			cout << "Please type lenght of the second triangle rib: ";
			cin >> secondTriangleRib;

			int thirdTriangleRib;
			cout << "Please type lenght of the third triangle rib: ";
			cin >> thirdTriangleRib;

			cout << "\n- The triangle circumference is: " << firstTriangleRib + secondTriangleRib + thirdTriangleRib << endl << endl;
			break;

		case 2:
			int triangleBaseLenght;
			cout << "Please type lenght of the triangle base: ";
			cin >> triangleBaseLenght;

			int traingleHeight;
			cout << "Please type height of the triangle base: ";
			cin >> traingleHeight;

			cout << "\n- The triangle area is: " << triangleBaseLenght / 2 * traingleHeight << endl << endl;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "Invaild choice.\n";
			break;
		}
		break;



	case 3:
		int choice2;
		cout << "\nWhat you wanna calculate?\n\n1. Circle Circumference.\n2. Circle Area.\n3. Exit.\n\nEnter your choice: ";
		cin >> choice2;

		cout << endl;

		switch (choice2) {
		case 1:
			int circleRadius;
			cout << "Please type lenght of radius of the circle: ";
			cin >> circleRadius;

			cout << "\n- The circle circumference is: " << circleRadius * 2 * 3.14 << endl << endl;
			break;

		case 2:
			int circleRadius1;
			cout << "Please type lenght of radius of the circle: ";
			cin >> circleRadius1;

			cout << "\n- The circle area is: " << circleRadius1 * circleRadius1 * 3.14 << endl << endl;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "Invaild choice.\n";
			break;
		}
		break;



	case 4:
		int choice3;
		cout << "\nWhat you wanna calculate?\n\n1. Recatngle Circumference.\n2. Rectangle Area.\n3. Exit.\n\nEnter your choice: ";
		cin >> choice3;

		cout << endl;

		switch (choice3) {
		case 1:
			int rectangleLenght;
			cout << "Please type lenght of the rectangle: ";
			cin >> rectangleLenght;

			int rectangleWidth;
			cout << "Please type width of the rectangle: ";
			cin >> rectangleWidth;

			cout << "\n- The rectangle circumference is: " << (rectangleLenght + rectangleWidth) * 2 << endl << endl;
			break;

		case 2:
			int rectangleLenght1;
			cout << "Please type lenght of the rectangle: ";
			cin >> rectangleLenght1;

			int rectangleWidth1;
			cout << "Please type width of the rectangle: ";
			cin >> rectangleWidth1;

			cout << "\n- The rectangle area is: " << rectangleLenght1 * rectangleWidth1 << endl << endl;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "Invaild choice.\n";
			break;
		}
		break;



	case 5:
		return 0;
		break;


	}
  }
	

	return 0;
}
