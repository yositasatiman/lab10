#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string textline;
	cout << "-------------------- BOOM --------------------- \n" ;
	while (getline(source, textline)){
	cout << textline << "\n";
	}
	getline(source, textline);
	cout << "-------------------- HA!! ---------------------" << textline<< "\n";

    source.close();
    dest.close();
	return 0;
}