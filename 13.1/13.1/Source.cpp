#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	ofstream fout; 
	fout.open("C:\\Users\\dschi_000\\Desktop\\Exercise13-1.txt");

	if (fout.fail()){
		cout << "can't open file" << endl;
		return 0;
	}

	for (int i = 0; i < 100; i++){
		int newnum[100];
		newnum[i] = rand() % 100;
		fout << newnum[i] << " ";
	}
	fout.close(); 
}