#include<iostream>
using namespace std;

class Accumulator {
private:
   int val=0;

public:
   void add(int value){
    val+=value;
   }
   // reset() is now a friend of this class
   friend void reset(Accumulator& accumulator);
};

void reset(Accumulator& accumulator){
    accumulator.val=0;
}

int main(){
     Accumulator acc;
     acc.add(5); //add 5 to the accumulator
     reset(acc); // reset the accumulator

    return 0;
}