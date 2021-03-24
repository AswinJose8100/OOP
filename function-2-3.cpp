#include <iostream>
#include <stdlib.h>
using namespace std;
void twofivenine(int array[], int n){
	int j=0;

	if(n<1)
		cout<<"\n";
	int count2=0;
	int count5=0;
	int count9=0;
	for(int i=0;i<n;i++){
		
		    switch(array[i]){
			 case 2:
			  
			  	count2++;
			  	break;
			 case 5:
			  
			  	count5++;
			  	break;
			 case 9:
	
			  	count9++;
			    break;
			 default:
			  break;    


		}

	}
	cout<<"2:"<<count2<<";5:"<<count5<<";9:"<<count9<<";\n";

}