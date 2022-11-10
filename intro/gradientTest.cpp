# include <iostream>
# include <fstream>

int main() {
    std::ofstream output;
    output.open("gradientTest.ppm");

    int cols = 200;
    int rows = 100;
    int bInt = int(255.99 * 0.2);
    output << "P3\n" << cols << " " << rows << "\n255\n";

    for (int g = rows - 1; g >= 0; g--) {  
        for (int r = 0; r < cols; r++) {
            float rHue = float(r) / float(cols);
            float gHue = float(g) / float(rows);

            int rInt = int(255.99 * rHue);
            int gInt = int(255.99 * gHue);
            output << rInt << " " << gInt << " " << bInt << "\n";
        }
    }
    output.close();
}



