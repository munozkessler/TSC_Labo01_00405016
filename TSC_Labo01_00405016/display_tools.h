//
//  display_tools.h
//  TSC_Labo01_00405016
//
//  Created by Mario Muñoz on 3/25/20.
//  Copyright © 2020 Mario Muñoz. All rights reserved.
//

#ifndef display_tools_h
#define display_tools_h

void showVector(Vector b){
    cout << "[\t";
    for(int i=0;i<b.size();i++){
        cout << b.at(i) << "\t";
    }
    cout << "]\n";
}

void showMatrix(Matrix K){
    for(int i=0;i<K.at(0).size();i++){
        cout << "[\t";
        for(int j=0;j<K.size();j++){
            cout << K.at(i).at(j) << "\t";
        }
        cout << "]\n";
    }
}


#endif /* display_tools_h */
