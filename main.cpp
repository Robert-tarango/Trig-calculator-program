// This is a program to to get my C++ skills back
// V 0.0.0
// a basic Trig calculator
// list of requirements
// do while loop
// for loop
// array
// switch
// functions
// right now i only know how to get decimals later on find out how to convert decimals to fractions
//the newer version should be OOP since i think it will make it easier to build upon and borrow



#include <iostream>
#include <string>

using namespace std;

//Down the line to make this better i need to find a way to convert decimals to functions
//i found a algorithm that does it called Euclidean algorithm but i dont know how it works
//hopefully down the line i can figure it out

void sin();
void cos();
void cot();
void tan();
void csc();
void scs();
void TEST(); // find the bug function
int main()
{
	char choice;
	cout << "|******************************************************|" << endl;
	cout << "|***************TRIGONOMETRY CALCULATOR****************|" << endl;
	cout << "|******************************************************|" << endl;
	
	do 
	{
		cout << "Please decide which trig function you would like to be calculated :" << endl;
		cout << "(a) Sine\n(b) Cosine\n(c) Tangent\n(d) Cotangent\n(e) Secant\n(f) Cosecant\n(q) Quit" << endl;
		cin >> choice;

		switch (choice)
		{
			case 'a':
				sin();
				break;
			case 'A':
				sin();
				break;
			case 'b':
				cos();
				break;
			case 'B':
				cos();
				break;
			case 'c':
				tan();
				break;
			case 'C':
				tan();
				break;
			case 'd':
				cot();
				break;
			case 'D':
				cot();
				break;
			case 'e':
				scs();
				break;
			case 'E':
				scs();
				break;
			case 'f':
				csc();
				break;
			case 'F':
				csc();
				break;
		}
	} while (choice != 'q' && choice != 'Q');

	cout << "GOODBYE!" << endl;
	
	return 0;
}
void TEST()
{
	cout << "TEST" << endl;
}
void sin()
{
	float y = 0.0;
	float r = 0.0;
	float sin = 0.0;
	cout << "Please enter the (Y) value :\n";
	cin >> y;
	cout << "Please enter the (R) value:\n";
	cin >> r;
	sin = y / r;
	cout << " sine: " << sin << " ." << endl;// use this to remember how to add variables together
}
void cos()
{
	float x = 0.0;
	float r = 0.0;
	float cos = 0.0;
	cout << "Please enter the (X) value :\n";
	cin >> x;
	cout << "Please enter the (R) value:\n";
	cin >> r;
	cos = x / r;
	cout << " cosine: " << cos << " ." << endl;
}
void cot()
{
	float y = 0.0;
	float x = 0.0;
	float cot = 0.0;
	cout << "Please enter the (Y) value :\n";
	cin >> y;
	cout << "Please enter the (X) value:\n";
	cin >> x;
	cot = x / y;
	cout << " Cotangent: " << cot << " ." << endl;
}
void tan()
{
	float y = 0.0;
	float x = 0.0;
	float tan = 0.0;
	cout << "Please enter the (Y) value :\n";
	cin >> y;
	cout << "Please enter the (X) value:\n";
	cin >> x;
	tan = y / x;
	cout << " Tangent: " << tan << " ." << endl;
}
void csc()
{
	float y = 0.0;
	float r = 0.0;
	float csc = 0.0;
	cout << "Please enter the (Y) value :\n";
	cin >> y;
	cout << "Please enter the (R) value:\n";
	cin >> r;
	csc = r / y;
	cout << " cosecant: " << csc << " ." << endl;
};
void scs()
{
	float x = 0.0;
	float r = 0.0;
	float sec = 0.0;
	cout << "Please enter the (X) value :\n";
	cin >> x;
	cout << "Please enter the (R) value:\n";
	cin >> r;
	sec = r / x;
	cout << " secant: " << sec << " ." << endl;
}
