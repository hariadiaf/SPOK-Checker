#include <bits/stdc++.h>

using namespace std;

//a subject checker that will return true or false.
bool S_Check(string word){
    bool cek = false;
    //kamus_subject should only contain lower case words.
    string kamus[5] = {"saya","kamu","dia","mereka","kami"};
    //membuat "po" sebagai pointer.
    int po = 0;
    //cek apakah word ada di kamus.
    while(!cek && (po <= 5)){
        cek = kamus[po] == word;
        po++;
    }
    return cek;
}
bool P_Check(string word){
    bool cek = false;
    //kamus_subject should only contain lower case words.
    string kamus[5] = {"membeli","belanja","makan","berlari","pergi"};
    //membuat "po" sebagai pointer.
    int po = 0;
    //cek apakah word ada di kamus.
    while(!cek && (po <= 5)){
        cek = kamus[po] == word;
        po++;
    }
    return cek;
}
bool O_Check(string word){
    bool cek = false;
    //kamus_subject should only contain lower case words.
    string kamus[5] = {"membeli","belanja","makan","berlari","pergi"};//belum diganti
    //membuat "po" sebagai pointer.
    int po = 0;
    //cek apakah word ada di kamus.
    while(!cek && (po <= 5)){
        cek = kamus[po] == word;
        po++;
    }
    return cek;
}
bool K_Check(string word){
    bool cek = false;
    //kamus_subject should only contain lower case words.
    string kamus[5] = {"membeli","belanja","makan","berlari","pergi"};//belum di ganti.
    //membuat "po" sebagai pointer.
    int po = 0;
    //cek apakah word ada di kamus.
    while(!cek && (po <= 5)){
        cek = kamus[po] == word;
        po++;
    }
    return cek;
}


int main()
{
    string word;
    cout << "Hello world!" << endl;
    do{
        cin >> word;
        if(S_Check(word))
            cout << "terima" << endl;
        else
            cout << "tolak" << endl;
    }while(word != "exit");
    return 0;
}
