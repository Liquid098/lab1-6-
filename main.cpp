#include <iostream>
using namespace std;
int main() {
	float V, U, T1, T2;
	cout << "V= ";
	cin >> V;
	cout << "U= ";
	cin >> U;
	cout << "T1= ";
	cin >> T1;
	cout << "T2= ";
	cin >> T2; 

	float S;
	S = V * T1 + (V - U) * T2;
	cout << "s=" << S << endl;
	return 0;
}