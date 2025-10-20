#include<stdio.h>
int main(){
    int studentid[3][3];
    int marks[3][3];
    int i , j;
    printf("\n Student ID \n");
    for(i=0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            printf("Enter the student Id: ");
            scanf("%d" , &studentid[i][j]);
        }
    }
    
     for(i=0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            marks[i][j] = studentid[j][i];
        }
    }
    
      for(i=0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
           printf( "%d \t" , marks[i][j]);
        }
        printf("\n");
    }
    
    
    
	return 0;
}
