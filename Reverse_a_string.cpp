#include <iostream>
using namespace std;

string reverseWord(string str){
    // cout<<"str length - "<<str.length()<<endl;
    int j =0;
    for(int i = str.length()-1; i>=str.length()/2 ; i--){
        char a = str[j];
        str[j] = str[i];
        str[i] = a;
        j++;
    }
    // cout<<str<<endl;
    // cout<<"str length - "<<str.length()<<endl;
    return str;
    
    
    // string final[20];
    // int j=-1;
    //     for(int i = str.length(); i>=0 ; i--){
    //         j++;
    //         final[j]= str[i];
            
    //     }
        
    // cout<<"code is running "<<final;
    // return final;
}
 
int main()
{
    string term="Apple";
    cout<<reverseWord(term);


    // char str3[20];
    // cin >> str3 ;
    // cout<<"Your name is "<<str3[2];

    // string word="Babbar";
    // cout<< "Enter a word here - ";
    // cin>>word;
    // cout<< " string entered - "<<word<<endl;
    // cout<< "Reverse of a string - ";
    // for (int i = word.length(); i >= 0 ; i--)
    // {
    //     cout<< word[i];
    // }
    
    



    return 0;
}