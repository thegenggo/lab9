#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string text = "";
	string x;
	while(getline(source,x))
	{
		text += x;
		text += "\n";
	}
	dest << "-------------------- BOOM ---------------------\n";
	dest << text;
	dest << "-------------------- HA!! ---------------------\n";

    source.close();
    dest.close();
	return 0;
}
