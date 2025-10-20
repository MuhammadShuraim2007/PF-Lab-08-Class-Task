#include<stdio.h>
int main(){
	int quater1[3][1];
	int i ,j;
	int quater2[3][1];
	int net[3][1];
	for(i=0 ; i<3 ; i++){
		for(j=0;j<1;j++){
		printf("Enter the sales of 1st  quarter: ");
		scanf("%d" , &quater1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i< 3; i++){
		for(j=0;j<1;j++){
		printf("%d" ,quater1[i][j] );
		}
		printf("\n");
	}
	// second quarter m,onths sale
	for(i=0 ; i<3 ; i++){
		for(j=0;j<1;j++){
		printf("Enter the sales of 2nd  quarter: ");
		scanf("%d" , &quater2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i< 3; i++){
		for(j=0;j<1;j++){
		printf("%d" ,quater2[i][j] );
		}
		printf("\n");
	}
	// combine sale of half a months
    printf("\n total sale correspont to ha;lf of months \n");
	for(i=0; i<3; i++){
	    for(j=0; j<1; j++){
	        	net[i][j] = quater1[i][j] + quater2[i][j];
	        printf("%d" , net[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
