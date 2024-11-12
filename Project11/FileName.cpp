#include "Library.h"

int main() {
    srand(time(0)); 

    Point<int> obj1(10);  
    obj1.Print();

    obj1.Init(15, 20);  
    obj1.Print();

    obj1.InitRandom();  
    obj1.Print(); 
}
