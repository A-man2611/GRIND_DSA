#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //Reverse String
    //way 1
    string kallu = "kallu";
    reverse(kallu.begin(),kallu.end());
    cout<<kallu<<endl;
    //way 2
    string chit = "chitkabra";
    chit = string(chit.rbegin(),chit.rend());
    cout<<chit<<endl;

    //concatenation
    //way 1
    string s1 = "Aman";
    string s2 = "Upadhyay";
    cout<<s1+s2<<endl;
    //way 2
    cout<<s1.append(s2)<<endl;
    //way3
    char a1[] = "A";
    char a2[] = "padhyay";
    cout<<strcat(a1,a2)<<endl;

    //compare
    string s11 = "abc";
    string s22 = "abc";
    int value = s11.compare(s22);
    if(value != 0){ 
        cout<<"s11 is not equal to s22"<<endl;
        if(value > 0)cout<<"s11 is greater than s22"<<endl;
        else cout<<"s22 is greater than s11"<<endl;
    }
    else cout<<"s1 is equal to s2"<<endl;

    //strcpy
    // char* strcpy(char* dest, char* source);
    char cmp[20] = "sheikh";
    char* stringcmp = (char*)malloc(26 * sizeof(char));
    strcpy(stringcmp,cmp);
    cout<<stringcmp<<endl;
    free(stringcmp);
    
    //way 2 -> memcpy -> void *memcpy(void *to, const void *from, size_t numBytes);
    char str1[20] = "Geeksman";
    char str2[20] = "";
    memcpy(str2,str1,strlen(str1)+1);
    cout<<str2<<endl;

    //substr
    //way 1 
    string s = "Geeks";
    string sub = s.substr(0,4);
    cout<<sub<<endl;

    //way 2 using find function 
    int pos = s.find("e");
    string sa = s.substr(pos+1);
    cout<<sa<<endl;
    return 0;
}