// function to ...
bool descending(int array[], int n)
{
	// your code goes here ...
	if(n<=0)
		return false;
	for (int i = 0; i < n - 1; i++) {
        if (array[i] < array[i+1]) {
            return false;
        }
    }
    return true;

}
