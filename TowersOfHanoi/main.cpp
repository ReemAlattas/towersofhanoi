//
//  main.cpp
//  TowersOfHanoi
//
//  Created by Reem Alattas on 7/23/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>

using namespace std;

void moveTower(int, int, int, int);

int main(int argc, const char * argv[]) {
    
    moveTower(3, 1, 3, 2);
    
    return 0;
}

void moveTower(int disk, int source, int dest, int temp) {

    if (disk > 0)
    {
        moveTower(disk - 1, source, temp, dest);        // Step 1 above
        cout << source << " -> " << dest << endl;       // Step 2 above
        moveTower(disk - 1, temp, dest, source);        // Step 3 above
    }
}
