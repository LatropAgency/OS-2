#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	bool flag = bool(n % 2);
	int number_of_lines = 0;
	string line;
	string output_filename;
	ifstream infile("OS09_05.txt");
	ofstream outfile;
	if (flag)
		outfile.open("OS09_06_01.txt");
	else
		outfile.open("OS09_06_02.txt");
	
	while (getline(infile, line)) {
		++number_of_lines;
		if (flag) {
			outfile << line << endl;
		}
		flag = !flag;
	}
	outfile.close();
	return 0;
}
