#include <iostream>
using namespace std;
void factor(long long n){
    long long i;
    for (i = 1; i < n; i++){
        if (n % i == 0){
            if (i == 2 && n % 2 == 0)
            {
           cout<< n <<" = "<< (n / i) <<" * "<<i<<endl;
           break;
            }
            else
            {
                if (i > 2){
           cout<< n <<" = "<< (n / i) <<" * "<<i<<endl;
           break;
                }

            }
            
        }
    }
    
}
int main(){
    factor(4);
    factor(12);
    factor(34);
    factor(128);
    factor(1024);
    factor(4958);
    factor(9);
    factor(99);
    factor(999);
    factor(9999);
    factor(9797973);
    factor(49);
    factor(239809320265259);
    return 0;
}