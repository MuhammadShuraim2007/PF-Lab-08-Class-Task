#include<stdio.h>
int main(){
 int robotics[2][2][2] = {
    {{1, -2}, {3, -4}}, // First 2x2 matrix
    {{5, -6}, {7, -8}}  // Second 2x2 matrix
};
   int i , j , k;
   int newmovment[2][2][2];
   for(i=0 ; i<2 ; i++){
       for(j=0;j<2;j++){
           for(k=0;k<2 ; k++){
          printf("%d\t" , robotics[i][j][k]);
           }
           printf("\n");
       }
        printf("\n");
   }
   
   for(i=0 ; i<2 ; i++){
       for(j=0;j<2;j++){
           for(k=0;k<2 ; k++){
               if(robotics[i][j][k] < 0 ){
                   newmovment[i][j][k] = robotics[i][j][k] * -1;
               } else {
                     newmovment[i][j][k] = robotics[i][j][k];
               }
             
           }
           printf("\n");
       }
        printf("\n");
   }
   
    for(i=0 ; i<2 ; i++){
       for(j=0;j<2;j++){
           for(k=0;k<2 ; k++){
                 printf("%d\t" , newmovment[i][j][k]);
          
       }
        printf("\n");
   }
   
    }
  
   
	return 0;
}
