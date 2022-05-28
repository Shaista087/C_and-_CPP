#include<stdio.h>
 void printt_plz(int shy[],  int n); //2 mis
{   for( int i=0 ; i<=n; i++)  //1 mit        
{ printf( "%d", shy[i]);

} printf( "%n"); // ; mis 


}

int main(){  
  
    int shy[50]={ 2,3,4,6,7};
    int n=5;
      printt_plz(shy,n); // shy[] nhi likhna tha 
}
