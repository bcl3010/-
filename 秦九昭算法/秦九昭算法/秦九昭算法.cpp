#include<iostream>
using namespace std;

//#define N 100
const int N = 100;


float qin_jiushao(int n, float a[], float x)
{
    float result = a[n];
    for (int i = n; i >= 1; i--)
    {
        //cout<<result<<endl;
        result = result * x + a[i - 1];
    }
    return result;
}

int main()
{
    int number;     // The number of coefficient
    float a[N];     // a0,a1 .... an ，if coefficient is zero, it must be input
    float x;        // unknown number
    cout << "Please input the number of coefficient:  ";
    cin >> number;
    cout << "Please enter " << number << " coefficients:  ";
    for (int i = number - 1; i >= 0; i--)
        cin >> a[i];
    cout << "Please enter a unknown number :   ";
    cin >> x;
    float output = qin_jiushao(number - 1, a, x);
    cout << "Polynomial calculation : " << output << endl;

    return 0;
}

