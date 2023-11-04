
#include <iostream>
#include<list>
using namespace std;
struct Personne{
    int age; 
    string nom; 
    string prenom;};
int main()
{
   list<Personne>liste; 
   bool x=true;
   Personne P;
   while(x){
       cout<<"enter your age :  ";
       cin>>P.age;
       cout<<endl;
       cout<<"enter your first name :  ";
       cin>>P.prenom;
       cout<<endl;
       cout<<"enter your last name :  ";
       cin>>P.nom;
       cout<<endl;
       liste.push_back(P);
       cout<<"will you add more valeues ? (1 for Yes or 0 for No) ";
       cin>>x;
   }

    return 0;
}
