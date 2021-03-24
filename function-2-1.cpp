// function to ...
int minimum(int array[], int n)
{
	// your code goes here
	if(n<1)
		return 0;
	int small=array[0];
	for(int i=0;i<n;i++){
		if(array[i]<small)
			small=array[i];
	}
	return small;
}
