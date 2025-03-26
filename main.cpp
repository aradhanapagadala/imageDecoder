#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

int main() {

    string filename;
    input_information infoarr;
    cin >> filename;
    
    if(read_input_from_file(filename, infoarr) == true)
    {
        image imgarr;
        generate_image(infoarr, imgarr);
        print_image(imgarr);
    }
    else
        cout << "File not found" << endl;

    return 0;
}