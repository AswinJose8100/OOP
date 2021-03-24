#include <iostream>
#include <stdlib.h>

using namespace std;

extern int maximum(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[4]={1,7,5,6};
	int biggest=maximum(array,4);
	cout<<"The biggest element of the array is: "<<biggest;

	return 0 ;
}