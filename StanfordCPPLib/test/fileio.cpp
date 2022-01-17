#include<fstream>
#include<iostream>
#include "strlib.h"
#include "filelib.h"

using namespace std;

int main(){
	ifstream input;
	input.open("test.txt");
	int sum=0;
	string line;
	while(getline(input,line)){
		if(stringIsInteger(line)){
	sum+=stringToInteger(line);
	//cout<<line<<endl;
	}}
	cout<<"the sum is "<<sum<<endl;
	return 0;
}
