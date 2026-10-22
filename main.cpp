#include <iostream>

using namespace std;

int findGCF(int a, int b) {
    while (b != 0) {
        int temp {b};
        b = a % b;
        a = temp;
    }
    return a;
}

int main () {
    int a, b;

    cout<<"Enter the numbers a and b: "<<endl;
    cin>>a;
    cin>>b;

    int gcf = findGCF(a, b);
    cout<<"The greatest common factor is "<<gcf<<endl;

    return 0;
}
