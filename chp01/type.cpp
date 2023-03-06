#include <iostream>
#include <string>
using namespace std;
int _;
//int 1_2;
//int catch-22;
int Double;
int a = 10;
class type{
public:
	int a;
	void type_print(){
		cout << a << endl;
	}
};
void type_print(){
	int b;
	cout << b << endl;
}
int main(int argv, char** argc){
	int a;
	type c;
	cout << a << endl;
	type_print();
	a = c.a;
	cout << ::a << endl;
	string s;
	cin >> s;
	cout << "s length: " << s.size() << endl;
	return 0;
}
