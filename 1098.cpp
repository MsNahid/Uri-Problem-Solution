#include <iostream>

using namespace std;

int main(){
    double i = 0;
    double j = 1;
    while(i <= 2.0){
            cout << "I=" << i << " " << "J=" << j+i << "\n";
            cout << "I=" << i << " " << "J=" << j+1+i << "\n";
            cout << "I=" << i << " " << "J=" << j+2+i << "\n";
            i += 0.2;
    }
    return 0;
}
