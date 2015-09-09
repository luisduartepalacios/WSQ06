#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

	void function(int g, int n){
	if (g==n){
		cout << "Congratulations you find the correct number, the number is: "<<n<<endl;
			}
	 else if (g<n)
			{
				cout<<"The number is higher"<<endl;
				cin>>g;
				function (g, n);
			}
	else if (g>n)
			{
				cout<<"The number is lower"<<endl;
				cin>>g;
				function (g, n);
			}

	}


int main(){
	
	int g, n;
	
	srand (time(NULL));
	n = rand() % 100 + 1;
	
	cout<<"Guess the number"<<endl;
	cout<<"The number is between 1 to 100"<<endl;
	cin>>g;
	function (g,n);
	
	
	

	return 0;
}