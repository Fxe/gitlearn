#include <iostream>
#include <cstdlib>


#define DEFAULT_SIZE 100
#define DEFAULT_VALUE 1

int main( int argc, char **argv) {
	int size = DEFAULT_SIZE;
	double value = DEFAULT_VALUE;

	double* v1 = new double[size];


	for ( int i = 0; i < size; i++)
		v1[i] = value;


	double sum = 0;

	for ( int i = 0; i < size; i++)
		sum += v1[i];


	std::cout << "SUM:" << sum << std::endl;

	return 0;
}
