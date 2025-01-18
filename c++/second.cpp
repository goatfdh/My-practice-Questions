 #include <iostream>
 using namespace std;
//solving the question for reversing a given array
 int main(){
 int A[2]={1,2};

//then output should be reversed array={2,1}
 int temp;
 temp=A[0];
 A[0]=A[1];
A[1]=temp;

 cout<<"reversed array: "<<"{" <<A[0]<<","<<A[1]<<"}";
return 0;

 }

//  now i want to try it out with three elements in the array

 #include <iostream>
 using namespace std;
 int main(){

  int A[3]={1,2,3};
 //output should be {3,2,1}

 //we need to interchange the last two elements only

  int temp;
  temp=A[0];
  A[0]=A[2];
  A[2]=temp;

  cout<<"Required Reversed Array: "<<"{"<<A[0]<<","<<A[1]<<","<<A[2]<<"}";
  return 0;


 }


//tryin it out for four elements now
//this code is valid for any no.of elements in an given array

#include <iostream>
using namespace std;
int main(){
  int temp;
  int n;
 
  int A[]={1,2,3,4};
  n=sizeof(A)/sizeof(A[0]); //gives the size of the array

  for(int i=0;i<2;i++){
    temp=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=temp;
  }

  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
 
  return 0;

}






































