#include <fstream>
#include <iostream>
#include <sstream>

#include <string>
#include <vector>

using namespace std;

class Lian {
	int to_cancel;
	vector<char> color_queue;
	// color code: r g b p y
	// later is outer

       public:
	Lian();
	~Lian();
	void set_color(int color_num, vector<char> color_queue);
	int pop_color();
	int read_color();
	void print(vector<vector<char>>& buffer);
};

class Bilian {
	vector<vector<Lian>> elt;
	vector<vector<char>> output_buffer;

       public:
	Bilian();
	~Bilian();
	void read(string input_file_dir);
	void print_all(string output_file_dir);
};

Lian::Lian()
{
	to_cancel = 0;
}

Lian::~Lian()
{
}

Bilian::~Bilian()
{
	while (!elt.empty()) {
		elt.pop_back();
	}
}

Bilian::Bilian()
{
	for (int i = 0; i < 5; i++) {
		vector<Lian> temp;
		for (int j = 0; j < 4; j++) {
			temp.push_back(Lian());
		}
		elt.push_back(temp);
	}
	for (int i = 0; i < 25; i++) {
		vector<char> temp;
		for (int j = 0; j < 20; j++) {
			temp.push_back(' ');
		}
		output_buffer.push_back(temp);
	}
}

void Bilian::read(string dir)
{
	fstream f1;
	string line_buffer;
	f1.open("input.txt");

	while (getline(f1, line_buffer)) {
		stringstream ss1(line_buffer);

		int x;
		int y;
		ss1 >> x;
		ss1 >> y;

		char temp_c;
		vector<char> color_temp;
		while (ss1 >> temp_c) {
			color_temp.push_back(temp_c);
		}
	}

	line_buffer.clear();

	f1.close();
}