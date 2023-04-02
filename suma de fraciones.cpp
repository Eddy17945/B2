#include<iostream>
using namespace std;
int main()
{
    int n1,n2,d1,d2,numerador,denominador, N1,N2;
    cout<<"\t\t\t\t\t\tFraciones"<<endl;
    cout<<"ingrese el primer numerador: ";
    cin>>n1;
    cout<<"ingrese el primer denominador: ";
    cin>>d1;
     cout<<"ingrese el segundo numerador: ";
    cin>>n2;
    cout<<"ingrese el segundo denominador: ";
    cin>>d2;
    cout<<"\n\nLa fraccion a calcular es: "<<n1 <<"/" <<d1 <<" + "<<n2<<"/" <<d2;
    denominador = d1*d2;
    N1 = n1*d2;
    N2 = n2*d1;
    numerador = N1+ N2;
    cout<<"\n\nCalculando. Por favor espere....."<<endl;
    system("cls");
    cout<<"\n\nLa fraccion es: "<< n1 <<"/" << d1 <<" + " << n2 << "/" << d2;
    cout << "el resultado de la fraccion es: " << numerador <<"/"<<denominador;
    return(0);
}
