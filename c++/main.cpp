#include <iostream>
using namespace std;
//use getline() function to read a line having spaces and multiple words as cin only catches the first word before any spaces
int main(){
  string content;
  getline(cin,content);
 // cin>>content; //dekha yeh sirf pehla word read karega tum space to do yeh kaam nhi aayega
  cout<<content<<endl;
  return 0;

}