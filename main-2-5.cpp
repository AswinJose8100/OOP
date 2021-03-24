#include <iostream>
#include <stdlib.h>
using namespace std;

extern bool descending(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[8]={8,7,6,5,4,3,2,1};
	descending(array,8);
	if(descending(array,8))
		cout<<"Array is in descending order";
	else
		cout<<"not in descending";
	return 0 ;
}