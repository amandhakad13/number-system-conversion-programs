#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int rem, mul = 1, result = 0;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        result = rem*mul+result;
        mul *= 2;
    }
    
    cout<<"Binary to Decimal is : "<<result;
    return 0;
}