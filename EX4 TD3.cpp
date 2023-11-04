#include<iterator>
#include <iostream>
#include<string>
#include<set>
#include<vector>
#include<list>
#include<array>
using namespace std;

bool recherche(const set<int>liste, int x){
     set<int>::const_iterator itr = liste.find(x);
       if(itr!=liste.end())
       return true ;
       else
       return false;}
       
bool recherche(set<int>::iterator debut,set<int>::iterator fin , int x){
while(debut!=fin){
    if(*debut==x)
    return true;
    else 
    debut++;}
    return false ;}
    
template <typename it, typename T>
bool recherche(it debut,it fin , T x){
while(debut!=fin){
    if(*debut==x)
    return true;
    else 
    debut++;}
    return false ;}
template<typename TT>
    void Afficherelemnts(TT debut,TT fin){
        while(debut!=fin){
        cout<<*debut<<endl;
        debut++;}
    }
    
template<typename TT>
void afficheElement(TT debut , TT fin){
    while(debut!=fin){
    cout<<*debut<<endl; 
    debut++;}
    
}

int main(){
    set<int>liste; 
   vector<string>strVector {"oumaima","elkhlifi","Amal"};
   afficheElement(strVector.begin(),strVector.end());
   list<int>Vector {33,55,88,8,9,77};
   afficheElement(Vector.begin(),Vector.end());
   float tab[6]={3,5,8,6,9,7};
   afficheElement(tab[0],tab[5]);
    array<float, 5>Array={1,2,3,4,5} ;
    afficheElement(Array.begin(),Array.end());
    int x;
    for(int i=0;i<4;i++)
    liste.insert(i);
    for (set<int>::iterator ir = liste.begin(); ir != liste.end(); ir++) 
    cout << *ir<<" ";
    recherche(liste,2);


    return 0;
}
