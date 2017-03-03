#include <iostream>

using namespace std;

double func1(double x){
	return x;
}

double func2(double x){
	return x*x;
}

double integral(double(*f)(double), double min, double max){
	double result = 0;
	const int N = 1000;
	double delta = (max - min) / N;
	for (double i = min+delta; i < max; i+=delta)
	{
		result += f(min+i)*delta;
	}
	return result;
}

int main(){
	double result=0;
	result = integral(func2, 0, 2.0);
	cout << result << endl;

	system("pause");
	return 0;
}