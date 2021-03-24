#include <iostream>
#include <stdlib.h>
using namespace std;

extern int count(int*,int,int);

int main(int argc,char **argv){
	int array[5]={2,3,3,5,6};
	int counter=count(array,5,3);
	cout<<"the number of elements equal to parameter ="<<counter;
	return 0;
}