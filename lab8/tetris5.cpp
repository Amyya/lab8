#include <iostream>
#include <cstdlib>
#include <ctime>
#include <new>
#include "genMino.h"

using namespace std;

void new_hand(){
    deleteptr();
}

int main(){
    Mino * mino_ptr;

    srandom(time(NULL));

    set_new_handler(new_hand);
    while(1){
        mino_ptr = genMino();
        //mino_ptr->paint();
        //delete mino_ptr;
    }

    return 0;
}
