#include <iostream>
using namespace std;

int main(){
	int linha;
	cout << "Digite o número de linhas: ";
	cin >> linha;

	for(int i = 1; i <= linha; ++i)
	{
		for(int j =1; j <= i; ++j){
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}