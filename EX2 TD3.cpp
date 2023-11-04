
#include <iostream>
#include<iterator>
#include<list>
void triBull(list<int>liste){
    int taille=liste.size(); 
    bool choix ; 
    do {
        choix=false ; 
       auto it1=liste.begin(); 
       auto it2=next(it1); 
        for(int i=0; i<taille-1 ;n++){
            if(*it1>*it2){
                swap(*it1,*it2)
                choix=true; }
                it1++; 
                it2++; }
       } while(choix);
}
void triSelection(:list<int> Liste) {
    for (auto it = maListe.begin(); it !=prev(Liste.end()); ++it) {
        auto min = it;
        for (auto j =next(it); j != Liste.end(); ++j) {
            if (*j < *min) 
                min = j;
        }
        if (min != it) 
            swap(*it, *min);
        
    }
}

using namespace std;

int main()
{ 
    list<int>Liste; 
    int value ; 
    bool choix=true; 
    cout<<"entrer les elements de la liste ";
    while(choix){
        cin>>value; 
        Liste.push_back(value);
        cout<<"will you add more values (yes for 1 no for 0 "; 
        cin>>choix;
    }
   

    return 0;
}