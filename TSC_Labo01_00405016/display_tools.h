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

//cambio a show matrix, para que imprima valores a dos decimales.
void showMatrix(Matrix K){
    for(int i=0;i<K.at(0).size();i++){
        cout << "[\t";
        for(int j=0;j<K.size();j++){
            cout << roundf(K.at(i).at(j)*100)/100 << "\t";
        }
        cout << "]\n";
    }
}


#endif /* display_tools_h */
