#include <iostream>
using namespace std;

int main(int argc,char* argv[]){
    double sum = 0;
    for (int i = 0;i < argc;i++){
        sum += atof(argv[i]);
    }
    if(argc > 1){
        cout << "---------------------------------\n";
        cout <<"Average of " << argc-1 << " numbers = "<<(sum/(argc-1)) << endl ;
        cout << "---------------------------------";
        return 0; 
    }
    else {
        cout << "Please input numbers to find average.";
    }
}
