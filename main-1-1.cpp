#include <iostream>
#include<stdlib.h>
using namespace std;

extern int sum_array(int*,int);

int main(int argc,char **argv){
	int array[5]={2,3,4,5,6};
	int s=sum_array(array,5);
	cout<<"The sum of the elements = "<<s;
	return 0;

}