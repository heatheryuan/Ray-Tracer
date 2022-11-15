# include <iostream>
# include <fstream>
# include "tools/vector_operations.h"

int main() {
    std::ofstream output;
    output.open("ppm_outputs/main.ppm");

    int cols = 200;
    int rows = 100;
    int bInt = int(255.99 * 0.2);
    output << "P3\n" << cols << " " << rows << "\n255\n";

    for (int g = rows - 1; g >= 0; g--) {  
        for (int r = 0; r < cols; r++) {
            vector_3d rgb(float(r) / float(cols), float(g) / float(rows), 0.2);
            rgb *= 255.99;
            output << int(rgb[0]) << " " << int(rgb[1]) << " " << int(rgb[2]) << "\n";
        }
    }
    output.close();
};
