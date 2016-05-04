//
//  main.cpp
//  ExamenPractivo1_Q2
//
//  Created by Miguel Bazán on 2/14/16.
//  Copyright © 2016 Miguel Bazán. All rights reserved.
//
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int iRen, iCol, iN;
    cin >> iRen >> iCol;
    int iMat[iRen][iCol];
    
    cin >> iMat[0][0];
    
    for(int iR = 1; iR < iCol; iR++)
    {
        cin >> iN;
        iMat[0][iR] = iN + iMat[0][iR-1];
    }
    
    for(int iR = 1; iR < iRen; iR++)
    {
        for(int iJ = 0; iJ < iCol; iJ++)
        {
            cin >> iN;
            iMat[iR][iJ] = iN + min(iMat[iR][iJ-1], iMat[iR-1][iJ]);
        }
    }
    
    cout << iMat[iRen-1][iCol-1] << endl;
    
    return 0;
}