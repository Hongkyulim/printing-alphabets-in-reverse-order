#include <iostream>

using namespace std;

class Read{
private:
public:
    char* input();
};

int main(){
    
    char* p;
    Read r;
    Read *read123 = &r;
    p = read123->input();
    
    for(int i=4; i>=0; i--){
        cout<<p[i]<<endl;
    }
    
    
    return 0;
}

char* Read::input(){
    char temp;
    char array[5];
    for(int i=0; i<5; i++){
        cout<<"Type in 5 characters : ";
        cin>>temp;
        array[i] = temp;
    }
    
    return array;
}
