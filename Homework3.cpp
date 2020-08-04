#include <iostream>
#include <String>
using namespace std;
int main()
{
	int num1,num2;
	string lar,small;

cout << "Enter a Number : ";
cin >> num1;
cout << "Enter a Number : ";
cin >> num2;
lar = (num1 > num2) ? "Largest :" : "Smallest :";
small = (num1 < num2) ? "Largest :" : "Smallest :";
cout << lar << num1 << "\n";
cout << small << num2 << "\n";

	return (0);
}