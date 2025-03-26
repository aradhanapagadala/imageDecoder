#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct image
{
  int n_rows;
  int n_columns;
  vector<string> rows;
};

struct input_information
{
  int columns;
  int rows;
  vector<vector<int>> on_pos_per_row;
};

int used = 0;


bool read_input_from_file(const string filename, input_information& info) {

    ifstream inputFile;
    inputFile.open(filename);
    if (!inputFile) {
      return false;
    }

    inputFile >> info.columns >> info.rows;
    inputFile.ignore();
    info.on_pos_per_row.clear();

    string line;
    while (getline(inputFile, line, ',')) {
        vector<int> positions;
        stringstream ss(line);
        int num;

        while(ss >> num) {
            positions.push_back(num);
        }

        info.on_pos_per_row.push_back(positions);
    }

    return true; 
}

void generate_image(input_information& info, image& img) {
  img.n_rows = info.rows;
  img.n_columns = info.columns;
  img.rows.clear();


  for (size_t r = 0; r < info.on_pos_per_row.size(); ++r) {

    string line(info.columns, ' ');

    for (size_t c = 0; c < info.on_pos_per_row[r].size(); ++c) {
      int pos = info.on_pos_per_row[r][c];
      if (pos < info.columns) {
        line[pos] = 'X';
        used = used + 1;
      }
    }
    img.rows.push_back(line);
  }
}

void print_image(image img) {

  input_information info;

  int total = img.n_rows * img.n_columns;
  int not_used;

  for (size_t i = 0; i < img.rows.size(); ++i) {
    cout << img.rows[i] << endl;
  }

  not_used = total - used;

  cout << endl << "Total number of positions: " << total << endl;
  cout << "Positions with an X: " << used << endl;
  cout << "Positions not used: " << not_used << endl;

}
#endif