// function to ...
int sumtwo(int array[], int secondarray[], int n)
{

	// your code goes here
	if (n<1)
		return 0;
	int s1=0;
	int s2=0;
	for(int i=0;i<n;i++){
		s1+=array[i];
		s2+=secondarray[i];
	}
	int sum=s1+s2;
	return sum;

}