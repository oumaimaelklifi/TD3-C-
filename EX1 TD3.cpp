#include<iostream>
using namespace std;
class Complexe{
  private:
     int Patrie_imag; 
     int Partie_reel; 
  public: 
     Complexe( ):Partie_reel(), Patrie_imag(){}
     Complexe( int R, int I):Partie_reel(R), Patrie_imag(I){}
     
     Complexe operator+(Complexe a){
     Complexe b;
     b.Partie_reel=Partie_reel+a.Partie_reel;
     b.Patrie_imag=Patrie_imag+a.Patrie_imag; 
     return b;}
   
     Complexe operator*(Complexe a){
        Complexe b; 
         b.Partie_reel=-Patrie_imag  * a.Patrie_imag +Partie_reel * a.Partie_reel;
         b.Patrie_imag=(Patrie_imag * a.Partie_reel)+(Partie_reel * a.Patrie_imag); 
         return b;}
    
     Complexe operator-(Complexe a){
       Complexe b; 
       b.Partie_reel=Partie_reel-a.Partie_reel;
       b.Patrie_imag=Patrie_imag-a.Patrie_imag; 
       return b;}
    
     Complexe operator/(Complexe a){
       Complexe b;
       b.Partie_reel=Partie_reel/a.Partie_reel;
       b.Patrie_imag=Patrie_imag/a.Patrie_imag; 
       return b;}
       
       void affiche(){
           cout<<"la partie reelle est "<<Partie_reel<<" et la partie imaginaire est :"<<Patrie_imag;
           cout<<endl;
       }
}; 
int main(){
  
    int Reelle , imaginaire ; 
    int Reelle1 , imaginaire1 ; 
    cout<<"entrer la partie reelle : "; 
    cin>>Reelle; 
     cout<<"entrer la partie imaginaire: "; 
    cin>>imaginaire;
    cout<<endl;
      cout<<"entrer la partie reelle : "; 
    cin>>Reelle1; 
     cout<<"entrer la partie imaginaire: "; 
    cin>>imaginaire1;
    cout<<endl;
    Complexe Objet1 (Reelle, imaginaire);
    Complexe Objet2 (Reelle1, imaginaire1);
    Complexe somme= Objet1+Objet2;
    somme.affiche(); 
    Complexe sous= Objet1-Objet2;
    sous.affiche();
    Complexe mult= Objet1*Objet2;
    mult.affiche();
  
    Complexe division= Objet1+Objet2;
    division.affiche();

    return 0;
}

