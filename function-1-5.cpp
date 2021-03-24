// function to ...
int count_even(int number)
{
	// Your code goes here ...
	if(number<1)
		return 0;
	int count=0;
	for(int i=1;i<=number;i++){
		if(i%2==0)
			count++;
	}
	return count;
}