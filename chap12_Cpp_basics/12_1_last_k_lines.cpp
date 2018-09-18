#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Print the last K lines of an pinput file using c++

class LastKLines{
public:
    void printLast10Lines(char * filename){
        const int k = 10;//use 10 in this example
        //input file stream
        ifstream file(filename);
        string l[k];
        int size  = 0;//total number of lines in the file

        //read each line into a circular array
        while(file.peek() != EOF){
            getline(file, l[size % k]);
            size++;
        }

        int start = size > k ? (size % k) : 0;//find the start point of circular array
        int count = min(k, size);

        //print from the start point in circular array
        for(int i = 0; i < count; i++){
            cout << l[(start + i) % k] << endl;
        }

    }
};

int main(){
    LastKLines lastkLines;
    string fileName = "./emptyfile.txt";
    // lastkLines.printLast10Lines(fileName.c_str());
    
    return 0;
}
