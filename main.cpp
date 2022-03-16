#include <iostream>
using namespace std;
int main() {
    float a=0,b=0,c=0,triangolo=0,quadrato=0,rettangolo=0,trapezio=0;
    std::cout << "inserire tre valori reali" << std::endl;
    cin >> a >> b >> c;
    triangolo=a*b/2;
    quadrato=a*a;
    rettangolo=a*b;
    trapezio=(a+b)*c/2;
    cout <<a<< " base e " <<b<< " altezza del triangolo di area " <<triangolo<< endl;
    cout <<a<< " lato del quadrato di area " <<quadrato<< endl;
    cout <<a<< " lato minore e " <<b<< " lato maggiore del rettangolo di area " <<rettangolo<< endl;
    cout <<a<< " base minore, " <<b<< " base maggiore e " <<c<< " altezza del trapezio di area " <<trapezio<< endl;
    return 0;
}
