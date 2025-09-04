// ones complement and 2s complement
#include<iostream>
#include<algorithm>
using namespace std;

string dectobin(int n){
    if(n==0){
        return "0";
    }

    string binary="";
    while(n>0){
        binary+=(n%2)+ '0';
        n/=2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
};
string onescomp(string binary){
    for(char &c:binary){
        c=(c=='0')? '1':'0';
    }
    return binary;
}
string twoscomp(string binary){
    int s=binary.length();
    for(int i=s-1;i>0;i--){
        if(binary[i]=='0'){
            binary[i]='1';
            break;
        }
        else{
            binary[i]='0';
        }
    }
    if(binary.find('1') == string::npos){
        binary = '1' + binary;
    }
    return binary;
}
int main(){
    int n=20;
    string bin=dectobin(n);
    string one=onescomp(bin);
    cout<<"original number: "<<bin<<endl;
    
    cout<<"One's compliment: "<<one<<endl;
    
    cout<<"Two's complement: "<<twoscomp(one)<<endl;
}
// ===============================================================================

