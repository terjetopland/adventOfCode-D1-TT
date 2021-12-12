#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file;
    file.open("submarineSonar.txt");

    file.close();
    return 0;
}
