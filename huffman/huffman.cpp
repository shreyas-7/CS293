#include <iostream>
#include <queue>
#include <string>

struct pair {
  char data ;
  int freq ;

};


bool greater_num (pair a , pair b ){
return a.freq > b.freq ;
}


int main(){

string inp ;
getline(cin,inp) ;

priority_queue < pair , vector<pair> , greater_num > q ;


















}
