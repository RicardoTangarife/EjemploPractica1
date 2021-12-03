#include <iostream>

using namespace std;

int main()
{
    char c;
    bool vocal=false;
    cout <<"Ingrese caracter: ";
    cin>>c;

    char vocales[10]={'A','E','I','O','U','a','e','i','o','u'};

    for(int i=0; i<10;i++){
        if(c==vocales[i]){
            vocal=true;
        }
    }


    /*if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout <<c<<" es una vocal"<<endl;
    }*/
    if(vocal){
        cout <<c<<" es una vocal"<<endl;
    }
    else if((c>=65&&c<=90)||(c>=97&&c<=122)){
        cout <<c<<" es una consonante"<<endl;
    }
    else{
        cout <<c<<" no una letra"<<endl;;
    }
    return 0;
}

