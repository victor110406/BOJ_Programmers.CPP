#include<iostream>

using namespace std;

int main() { 

	int N;
	int mul5 = 0;
	int mul25 = 0;  
	int mul125 = 0; 
	cin >> N;
	
	mul5 = N / 5;
	mul25 = N / 25;
	mul125 = N / 125;
	cout << mul5 + mul25 + mul125;
	return 0;
}