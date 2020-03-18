#include <iostream>
#include "haus1.h"
#include "haus2.h"
#include "haus3.h"
using namespace std;

int main()
{
	cout << "Test haus1\nsumme = ";
	int arr[10] = { 1,2,3,4,5};
	cout << summe(arr, 0, 2, 0);

	cout << "\n\nTest haus2\nsumme = ";
	cout << summe_lambda(arr, 0, 2, 2);

	cout << "\n\nTest haus3\n\n";

	Shape s1("cerc", 2);
	Shape s2("patrat", 3);
	Shape s3("triunghi", 4);

	vector <Shape> v = {s1, s2, s3};

	cout << "Test multiply everything by 2\n";
	apply_numeric(v, multiply, 2);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].name << ": " << v[i].flache << ", ";
	
	cout << "\n\nTest to_string\n";
	s1.shape_string(v);

	cout << "\nTests over";
}
