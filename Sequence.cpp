#include "Sequence.h"
#include <cstring>

Sequence::Sequence()
{
    //ctor
}
void Sequence::set_seq(char* seq1)
{  cin>>seq1;
cout<<"call cttor"<<endl;
    seq=new char [strlen(seq1)+1];
    strcpy(seq,seq1);
}
char* Sequence::get_seq()
{
    return seq;
}
Sequence ::Sequence( Sequence&rhs)

{
    set_seq(rhs.seq);

}


/// align
Sequence::~Sequence()
{
    delete[] seq;
    *seq=NULL;
}
