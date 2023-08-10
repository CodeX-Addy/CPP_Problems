void swapNumber(int &a, int &b) {
    int temp = a;
	  a = b; 
	  b = temp;
}

//Without using third variable
void swapNumber(int *a, int *b){
	a = a + b;
        b = a - b;
        a = a - b;
}
