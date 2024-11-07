#include <stdio.h>
int main (){
	//variable declaration
	int i,j;
	
	int score[2][2]={
		{65,92},
		{84,72}
		};
		
	//using nested for loop
	for (i=0;i<2;i++){//for outer loop
		for (j=0;j<2;j++){//for inner loop
		
		//output
		
		printf(" %d  ",score[i][j]);
		}
		printf("\n");//matrix design output
		}

	
	
	
	
	
	return 0;
};