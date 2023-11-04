
#include <iostream>
using namespace std;

int main()
{
  /*  Que se passe-t-il avec ces instructions :
point <char> p (60, 65) ;
p.affiche () ;
 on a  crée un objet avec des coordonnées de type int (60 et 65) alors que T est défini comme char
 b. Comment faut-il modifier la définition de notre patron pour que les instructions
précédentes affichent bien : 
on doit faire :
cout << "Coordonnees : " <<int(x )<< " " <<int ( y )<< "\n" ;
point <int> p (60, 65) ;
p.affiche () ;


    return 0;
}
