#include <stdio.h>

int pow(int a, int n){
	if(n == 0){
		return 1;
	}	
	else{
		int temp_res = pow(a, n/2);
		if(n%2 == 0)
			return temp_res * temp_res;
		else
			return temp_res * temp_res * a;
	}
}

int main(){
	int a = 5;

	printf("%d\n", pow(7,3));

	return 0;
}