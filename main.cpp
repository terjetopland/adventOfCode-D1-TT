#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file;
    file.open("submarineSonar.txt");

    file.close();

    cout << "Just checking weather the git woriks properly" <<endl;
    return 0;
}
