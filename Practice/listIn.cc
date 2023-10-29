// #include<iostream>  
// #include<list>  
// using namespace std;  

// int main()  
//    {  
//     list<string> ls{"Hello! ", "CPP ", "Programmers. ", "Welcome !!"};  
//     for (list <string> ::iterator i=ls.begin(); i!=ls.end(); ++i)  
//     cout << *i;  
//     return 0;   
// }

#include <iostream>
using namespace std;

int main()

{

    char c;

    cout<<"Enter a character: ";  cin>>c;

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
     cout<<"Alphabet";
    else
     cout<<"Not an alphabet";

    return 0;

}

