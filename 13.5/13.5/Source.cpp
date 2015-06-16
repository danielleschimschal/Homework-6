#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string name;
	string gender;
	int year;
	
	cout << "Enter year: ";
	cin >> year;


	cout << "Enter the gender: ";
	cin >> gender; 

	cout << "Enter name: ";
	cin >> name;

	
	int rank;
	string male, female, line;
	string numFemale, numMale;
	ifstream babyname;

	if (year == 2001){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2001.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}
		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2002){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2002.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}
		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2003){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2003.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2004){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2004.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}
	
	else if (year == 2005){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2005.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}
	
	else if (year == 2006){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2006.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2007){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2007.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2008){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2008.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}
		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2009){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2009.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else if (year == 2010){
		babyname.open("C:\\Users\\dschi_000\\Desktop\\babynameranking2010.txt");
		if (babyname.fail())
		{
			cout << "File does not exist";
		}


		while (!babyname.eof())
		{
			babyname >> rank >> male >> numMale >> female >> numFemale;
			if (name == male)
			{
				cout << male << " is ranked #" << rank << " in year " << year << endl;
				break;
			}

			if (name == female){
				cout << name << " is ranked #" << rank << " in year " << year << endl;
				break;
			}
			continue;
		}

		if (name != female && name != male){
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
	}

	else
		cout << "Year entered was invalid." << endl;
	
	return 0; 
}