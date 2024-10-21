bool checkArmstrong(int n){
	//Write your code here
	int sum = 0;
	int dup = n;
	while(n){
		int dig = n%10;
		sum+=pow(dig, to_string(dup).length());
		n = n/10;
	}
	if(sum == dup) return true;
	else return false;
}
