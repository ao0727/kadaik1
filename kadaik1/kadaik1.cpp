#include <iostream>
using namespace std;
//Q.2
int sum(int a, int b);

//Q3
static int mult(int c, int d) 
{
    return c * d;
}

int main() {
    
    //Q.2
    /*int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2);

    cout << "Sum: " << result << endl;
    */
    
    //Q.3
    int num1 = 5;
    int num2 = 3;
    int result = mult(num1, num2);

    cout << "Product: " << result << endl;





}
