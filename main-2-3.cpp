#include <iostream>
#include <stdlib.h>
using namespace std;

extern void twofivenine(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[4]={2,5,9,9};
	twofivenine(array,4);
	return 0 ;
}
