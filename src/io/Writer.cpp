//
// Created by alangomes on 24/10/2022.
//
#include "writer.h"
#include <cstdlib>
#include <fstream>

using namespace std;

void Writer::writeMatrix(int size, const string& fileName) {
    fstream matrixFile;

    matrixFile.open(fileName + ".txt",fstream::out);

    for (int i=0; i< size;i++){
        for (int j=0; j<size;j++){
            if(i == j){
                matrixFile << 0 << "\t";
                continue;
            }
            matrixFile << 1 + (rand() % 9) << "\t";
        }
        matrixFile << endl;
    }
}
