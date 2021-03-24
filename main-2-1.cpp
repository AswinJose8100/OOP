#include <iostream>
#include <stdlib.h>

using namespace std;

extern int minimum(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[4]={1,7,5,6};
	int smallest=minimum(array,4);
	cout<<"The smallest element of the array is: "<<smallest;

	return 0 ;
}