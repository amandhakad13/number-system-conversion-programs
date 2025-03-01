#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int rem, mul = 1, result = 0;

    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        result = rem*mul+result;
        mul *= 10;
    }
    
    cout<<"Decimal to Binary is : "<<result;
    return 0;
}