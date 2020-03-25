//
//  main.cpp
//  TSC_Labo01_00405016
//
//  Created by Mario Muñoz on 3/25/20.
//  Copyright © 2020 Mario Muñoz. All rights reserved.
//

#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Matrix A, Ainv;
    zeroes(A, 3);
    
    A.at(0).at(0) = 2; A.at(0).at(1) = 2; A.at(0).at(2) = 3;
    A.at(1).at(0) = 4; A.at(1).at(1) = 5; A.at(1).at(2) = 6;
    A.at(2).at(0) = 7; A.at(2).at(1) = 8; A.at(2).at(2) = 9;

    cout <<"matriz original" << endl;
    showMatrix(A);

    inverseM(A, Ainv);

    cout <<"matriz inversa" << endl;
    showMatrix(Ainv);
    
    return 0;
    
}
