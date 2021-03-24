#include <iostream>
#include <stdlib.h>
using namespace std;

extern int count_even(int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int counter=count_even(20);
	cout<<"The number of even numbers = "<<counter;

	return 0 ;
}