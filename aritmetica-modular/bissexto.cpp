#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string ano;
int caso, n4, n100, n400, n15, n55, b, bu, hu;

int main(){_
	while(cin >> ano){
		n4=0;
		n100=0;
		n400=0;
		n15=0;
		n55=0;
		b=0;
		bu=0;
		hu=0;
		if(caso++){
			cout<<endl;
		}
		for(int i=0; i<ano.size(); i++) n4 = (n4*10 + ano[i]-'0')%4;
        for(int i=0; i<ano.size(); i++) n15= (n15*10 + ano[i]-'0')%15;
        for(int i=0; i<ano.size(); i++) n55 = (n55*10 + ano[i]-'0')%55;
		for(int i=0; i<ano.size(); i++) n100 = (n100*10 + ano[i]-'0')%100;
		for(int i=0; i<ano.size(); i++) n400 = (n400*10 + ano[i]-'0')%400;

		if(!n4){
			if(n100 || (!n100 && !n400)){
				cout << "This is leap year." << endl;
				b++;
			}
			
		}
		
		if(!n15){ 
			cout << "This is huluculu festival year." << endl;
			hu++;
		}
		if(b){
			if(!n55){ 
				cout << "This is bulukulu festival year." << endl;
				bu++;
			}
		}
		if(!(b || bu || hu)){
			cout << "This is an ordinary year." << endl;
		} 		
	}
	return 0;
}