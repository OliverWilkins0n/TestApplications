
int main(){
    int cz = 50000;
    int randArray[cz];
    int sum;
    for(int i=0; i < cz; i++){
        randArray[i]=rand()%100;
    }
    cout<<"Elements "<<randArray<<endl;
    for(int i=0; i < cz; i++){
        sum = sum + randArray[i];
    }
    cout<<"Sum : "<<sum<<endl;
}