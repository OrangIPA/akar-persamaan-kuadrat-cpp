#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

int main(){
	cout << "==== Akar Persamaan Kuadrat ====" << endl << "ax^2 + bx + c = 0" << endl;
	float a, b, c;
	double D;
	double x1, x2, sqD;
	double ximag, xreal;
	while(true){
		cout << "Input a :";
		cin >> a;
		cout << "Input b :";
		cin >> b;
		cout << "Input c :";
		cin >> c;


		D = pow(b, 2) - (4*a*c);
		if(D >= 0){
			sqD = sqrt(D);
			x1 = (-b + sqD)/(2*a);
			x2 = (-b - sqD)/(2*a);
			printf("Akar Real\nx1 = %f\nx2 = %f\n", x1, x2);
		}else{
			sqD = sqrt(-D);
			xreal = -b/ (2*a);
			ximag = sqD/(a*2);
			printf("Akar Kompleks\nx1 = %f + %fi\nx2 = %f + %fi\n", xreal, ximag, xreal, -ximag);
		}
	}

	int z;
	cin >> z;
	return 0;
}