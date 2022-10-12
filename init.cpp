# include <iostream>
# include <fstream>
using namespace std;

int main() {
    ofstream output;
    output.open("output.ppm");

    int cols = 3;
    int rows = 2;
    int range = 255;
    output << "P3\n" << cols << " " << rows << '\n' << range << '\n';
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            int values[3] = {};
            values[c] = range;
            for (int i = 0; i < 3; i++) {
                output << values[i] << " ";
            }
        }
        output << '\n';
    }
    output.close();
}