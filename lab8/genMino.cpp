#include <cstdlib>
#include <vector>
#include "genMino.h"
#define NUM_MINO 5
#define MINO_I 0
#define MINO_S 1
#define MINO_L 2
#define MINO_T 3
#define MINO_Z 4

int i = 0;
vector <Mino *> Vptr;

Mino *genMino(){
    int mino_type;
    Mino *ptr;


    mino_type = random() % NUM_MINO;

    switch(mino_type){
        case MINO_I:
            ptr = new MinoI;
            Vptr.push_back(ptr);
            i++;
            break;
        case MINO_S:
            ptr = new MinoS;
            Vptr.push_back(ptr);
            i++;
            break;
        case MINO_L:
            ptr = new MinoL;
            Vptr.push_back(ptr);
            i++;
            break;
        case MINO_T:
            ptr = new MinoT;
            Vptr.push_back(ptr);
            i++;
            break;
        case MINO_Z:
            ptr = new MinoZ;
            Vptr.push_back(ptr);
            i++;
            break;
    }
    return ptr;
}

int j = 0;

void deleteptr(){
    while(j<i){
    cout << "new_hand() : delete ptr[" << j << ", " << j+1 << "]" << "\n";
    delete [] Vptr[j++];
    delete [] Vptr[j++];
    }
}
