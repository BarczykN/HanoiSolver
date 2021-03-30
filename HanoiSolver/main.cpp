#include <iostream>
#include <iostream>
using namespace std;
int m =1;
void przenies(char x,char y){
    cout<<m<<" move "<<x<<" to "<<y<<endl;
    m++;
}

void hanoi(int n,char a,char b,char c){
    if(n>0){
        hanoi(n-1,a,c,b);
        przenies(a, c);
        hanoi(n-1,b,a,c);
    }

}
int main() {
    int t;
    do {
        cout << "Let's get started,how many discs? 0 discs end program: ";
        cin >> t;
        if(t!=0){
            cout << "\nCreating a tower... " << t << " let's go!\n";
            hanoi(t, 'A', 'B', 'C');
        }

    }while(t!=0);
    return 0;
}
