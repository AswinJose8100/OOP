#include <iostream>
#include <stdlib.h>
using namespace std;

extern int sumtwo(int*,int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array1[2]={1,2};
	int array2[2]={3,4};
	int sums2=sumtwo(array1,array2,2);
	cout<<"The sum of 2 array ="<<sums2;

	return 0 ;
}