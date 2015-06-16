#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	
	string filename;
	char letter;
	int lettercount = 0;

	cout << "Enter a filename: ";
	cin >> filename; 

	ifstream fin(filename.c_str());

	if (fin.fail()){
		cout << "File does not exist" << endl;
		return 0;
	}
	
	while (!fin.eof()){
		letter = fin.get(); 
		lettercount++;

	}

	cout << lettercount - 1 << endl; /// the program outputs one too many letters when it compiles so I just subtracted one


}