#include <iostream>
using namespace std;
//use getline() function to read a line having spaces and multiple words as cin only catches the first word before any spaces
int main(){
  string content;
  getline(cin,content);
 // cin>>content; //this will only read upto first word or will not work if the sentence has spaces in it
  cout<<content<<endl;
  return 0;

}