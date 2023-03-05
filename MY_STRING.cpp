#include "String.h"
using namespace std;

int main()
{	
	setlocale(0, "");
	MyString str1("ЗДАРОВА!");
	str1.Print();
	str1.Input();
	cout << str1.MyStrLen() << "\n";

	MyString str2;
	str1.MyStrcpy(str2);
	str2.Print();

	MyString str3("ХААЙ");
	str1.MyStrCat(str3);
	str1.Print();

	str1.MyDelChr('o');
	str1.Print();

	cout << str1.MyStrCmp(str2) << "\n";
}