#include "DNA.h"
#include "Sequence.h"
#include "RNA.h"
DNA::DNA()
{
    //ctor
}
DNA::DNA(char * seq, DNA_Type atype)
{
    Sequence ::set_seq(seq);
    Sequence::get_seq();

    ///??????
     }
     void DNA::set_SI(int startindex1)
     {
         startIndex =startindex1;
     }
     void DNA::set_EI(int endindex1)
     {
       endIndex=endindex1;
     }

      int DNA:: get_SI()
      {
          return startIndex;
      }
             int DNA::get_EI()
             {
                 return endIndex;
             }


                 const char* DNA:: detect_DNA_type(const char*&)
    {
        const char* dna_type[]={"promoter", "motif", "tail", "noncoding"};
            cout<<"choose the DNA Type : "<<endl;
            cout<<"1-promoter"<<endl;
            cout<<"2-motif"<<endl;
            cout<<"3-tail"<<endl;
            cout<<"4-noncoding"<<endl;
            DNA_Type a = promoter;
            DNA_Type b = motif;
            DNA_Type c = tail;
            DNA_Type d = noncoding;
            int enum_choice;
            if(enum_choice==1)
                cout<< dna_type[a] <<endl;
            if(enum_choice==2)
                cout<< dna_type[b] <<endl;
            if(enum_choice==3)
                cout<< dna_type[c] <<endl;
            if(enum_choice==4)
                cout<< dna_type[d] <<endl;
            else
                cout<< dna_type[a] <<endl;
    }
     DNA::DNA(DNA& rhs)
     {
     Sequence::set_seq(rhs.seq); ///???
     }
 void DNA:: Print(){}

RNA DNA:: ConvertToRNA()
{
BuildComplementaryStrand();

for(int i =startIndex; i<=endIndex; i++)
{
    if(seq[i]=='T')
    {
        seq[i]='U';
    }

}
 RNA r(seq,mRNA);
    return r;
}
        void DNA:: BuildComplementaryStrand()
    {
        for(int i=startIndex; i<=endIndex; i++)
        {
            if(seq[i]=='T')
            {
                seq[i]='A';
            }

            else  if(seq[i]=='A')
            {
                seq[i]='T';
            }
            else if(seq[i]=='C')
            {
                seq[i]='G';
            }
            else if(seq[i]=='G')
            {
                seq[i]='C';
            }
        }

   cout<< seq; }


DNA::~DNA()
{
    //dtor
}
