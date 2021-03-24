#include <iostream>
#include<stdlib.h>
using namespace std;

extern double average(int*,int);

int main(int argc,char **argv){
	int array[5]={2,3,4,5,6};
	double avgs=average(array,5);
	cout<<"The average of the elements = "<<avgs;
	return 0;

}