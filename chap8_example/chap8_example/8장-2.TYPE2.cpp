// 8장-2.TYPE2.CPP  8.1 타입 호환성 규칙 
#include <iostream>
using namespace std;

void main(){
    struct{
        char  first ;
        char  second ;
    } state1 ;
    
    struct{
        char  first ;
        char  second ;
    } state2 ;

    state1.first = 'M' ;
    state1.second = 'N' ;
	state2.first = 'S';
	state2.second = 'T';
   // state2 = state1 ;
    state2.second ++ ;
    cout << "Original structure: "           << state1.first
          << state1.second << endl
          << "Changed structure: "                 << state2.first
          << state2.second << endl ;
	system("pause");
}