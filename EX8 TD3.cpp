#include<iostream>

using namespace std;
template<typename T>
T CalculCarre(T nombre){
    return nombre*nombre;
}

int main()
{
    int x; 
    float y=7.5;
    cin>>x;
    cout<<"le carre du nombre  "<<x<<" est : "<<CalculCarre(x)<<endl;
    cout<<"le carre du nombre  "<<y<<" est : "<<CalculCarre(y);

    return 0;
}
