#include <iostream>

using namespace std;
class point {
private :
    double x ;
    double y ;
public :
   point (double xx=0 , double yy =0){
       x=xx ;
        y = yy ;
    }
   /* point(double x=0 , double y=0):x(x),y(y) {}*/
    void affiche () {
        cout<< " (" << x << ","<< y << ")" <<endl ;

    }
    point deplace (double dx ,double dy ){
x+=dx;
y+=dy ;
    }

};

int main()
{
    point p(5.1,7.1) ;
    p.affiche ();
    p.deplace(1.0,2.0);
    p.affiche();

    return 0;
}
