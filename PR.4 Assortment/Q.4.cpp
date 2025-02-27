
#include<iostream>
using namespace std;

main(){
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int i,j,sum=0;
	
	for(i = 0;i < 3; i++){
		sum = 0;
		for(j = 0;j < 3;j++){
			sum += a[i][j];
		}
		
		cout<<"sum :- "<<sum<<endl;
	}
	
	
}

