#include <iostream>
#include"Sequence.h"
#include "DNA.h"
#include "CodonsTable.h"
#include "RNA.h"
#include "Protein.h"
#include <cstring>
using namespace std;

int main()
{

cout << " what do u want to do" <<endl;
cout << "1-minpualting DNA"<<endl;
cout << "2-minpualting RNA"<<endl;
cout << "3-minpualting Protein"<<endl;
cout << "4-end prgram"<<endl;
int choise;
cin >> choise;
if(choise == 1) {
        DNA e;
        DNA b;
        e.set_seq("ATA");
        b.set_seq("ATT");
        e.get_seq();

        e.BuildComplementaryStrand();
        Align(&e,&b);
        e.ConvertToRNA();
}
if(choise == 2) {

    RNA f;
    f.set_seq("AUA");
    f.get_seq();
    f.ConvertToDNA();
}
if(choise == 3) {

    Protein g;
    g.get_seq();
    g.get_seq();


}
if(choise == 4) {return 0;}





}
istream& operator>>(istream& in,Sequence *seq2)
{
    string c;
    in >> c;
    char* cc = new char[c.length()];
    for (int i = 0 ; i < c.length() ; i++)
    {
        cc[i] = c[i];
    }
    seq2->set_seq(cc);

    return in;
}
int lcs(char* arr1, char* arr2, int m, int n);
char* Align(Sequence * s1, Sequence * s2)
{

    cin>>s1;
    cin>>s2;


    int m = strlen(s1->seq)+1;
    int n= strlen(s2->seq)+1;
    char* arr1=new char [m+1];
    char* arr2=new char [n+1];
    for (int i=0; i>=m; i++ )
    {
        arr1[i]=s1->seq[i];
        arr2[i]=s2->seq[i];

    }
    lcs(arr1,arr2,m,n);

}
int lcs(char* arr1, char* arr2, int m, int n)
{
        if (m == 0 || n == 0)
            return 0;
        if (arr1[m - 1] == arr2[n - 1])
            return 1 + lcs(arr1, arr2, m - 1, n - 1);
        else
            return max(lcs(arr1, arr2, m, n - 1), lcs(arr1, arr2, m - 1, n)); ///???????????
}
