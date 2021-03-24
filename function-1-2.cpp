double average(int array[], int n){
	double avg=0.0;
	if(n<1)
		return 0.0;;
	double sum=0.0;
	for(int i=0;i<n;i++){
		sum+=array[i];
	}
	avg=sum/n;
	return avg;
}