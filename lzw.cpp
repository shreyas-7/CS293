#include <iostream>
#include <string>
#include <map>
using namespace std ;

string compress(string s){
	map<string, int> m ;
	int start = 256 ;
	string first, second, ans ;
	while (s != ""){

		if (s.size() == 1) {
			ans += to_string(int(s[0])) ;
			return ans ;
		}
		string first(1,s[0]) ;
		string second(1,s[1]) ;
		int count = 2 ;
		if (m[first+second] == 0){
			m[first+second] = start++ ;
			cout << first + second << " " << start-1 << endl ;
			ans.append(to_string(int(first[0]))) ;
			s = s.substr(1) ;
		}
		else {
			while (m[first+second]!=0 && count < s.size()){
				first = first + second ;
				second = s[count] ;
				count ++ ;
			}
			m[first+second] = start++ ;
			cout << first + second << " " << start-1 << endl ;
			ans.append(to_string(m[first])) ;
			s = s.substr(count - 1) ;
		}
	}

	return ans ;
}


string decompress(){}


int main(){

	string s1 = "abababab" ;
	cout << compress(s1) << endl ;
}