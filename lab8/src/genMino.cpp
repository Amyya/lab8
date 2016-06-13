#include <cstdlib>
#include "Minos.h"
#define NUM_MINO 5
#define MiNO_I 0
#define MINO_S 1
#define MINO_L 2
#define MINO_T 3
#define MINO_Z 4

Mino *genMino(){
    int mino_type;
    Mino *ptr;

    mino_type = random() % NUM_MINO;

    switch(mino_type){
        case MiNO_I:
            ptr = new MInoI;
            break;
        case MINO_S:
            ptr = new MinoS;
            break;
        case MINO_L:
            ptr = new MinoL;
            break;
        case MINO_T:
            ptr = new MinoT;
            break;
        case MINO_Z:
            ptr = new MinoZ;
            break;
    }
    return ptr;
}
