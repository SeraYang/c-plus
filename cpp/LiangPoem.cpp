/* This is a weird type-casting 
 * example from Dr. Liang.
 * */
using namespace std;
#include <iostream>

class bigobject
{
    private:
        int x;
        double y;
    public:
        bigobject(){
            x = 2;
            y = 3.14;
            // cout << "location of y relative to this:"
            //      << ((char*)this) - ((char*)&y) << endl;
        }
        double gety(){return y;}
};

int main(int argc, char **argv){
    bigobject *A = new bigobject();
    
    int *x = (int*)A;

    double *y = (double*)((char*)A+4);

    cout << "The \"private\" integer is "<< *x << endl;
    cout << "and the equally private double was " << *y <<endl;
    *y += 5.86;
    cout << "but now it has been changed to " << A->gety() <<endl;
    cout << "Private? Says who?\n";
    return 0;
}
