#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Please enter a number : ";
	cin>>num;
	if(num %2 == 0){
		cout<<"This number is even";
	}
	else{
		cout<<"This number is odd";
	}
	return 0;
}
