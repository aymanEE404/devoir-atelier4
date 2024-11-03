#include <iostream>

using namespace std;

class test {

public :

     void call (){
    int x =0 ;
      x++;
        cout << "le nombre de call  " << x<<endl ;
    }
};

int main()
{

 test t ;
 t.call();
  t.call();
   t.call();
    t.call();
     t.call();

    return 0;
}
