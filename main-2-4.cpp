#include <iostream>
#include <stdlib.h>
extern bool ascending(int*,int);
using namespace std;
bool result=true;


int main(int argc,char **argv){


	int array[8]={1,2,3,4,5,6,7,8};
	ascending(array,8);
	if(ascending(array,8))
		cout<<"Array is in ascending order";
	else
		cout<<"not in ascending";
	return 0;
}
