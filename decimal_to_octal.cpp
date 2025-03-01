#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int rem, mul = 1, result = 0;

    while (num > 0)
    {
        rem = num % 8;
        num /= 8;
        result = rem*mul+result;
        mul *= 10;
    }
    
    cout<<"Decimal to Octal is : "<<result;
    return 0;
}