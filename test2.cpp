#include <iostream>
using namespace std;

int main(){
    int cz = 50000;
    int randArray1[cz];
    int randArray2[cz];
    int sum;
    for(int i=0; i < cz; i++){
        randArray1[i]=rand()%100;
    }
    for(int i=0; i < cz; i++){
        randArray2[i]=rand()%100;
    }

    for(int i=0; i < cz; i++){
        sum += randArray1[i] * randArray2[i];
    }
    cout<<"Sum : "<<sum<<endl;
}