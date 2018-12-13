#include "RNA.h"
#include "Sequence.h"
#include "DNA.h"
#include <cstring>


RNA::RNA()
{
    //ctor
}

 RNA::RNA(char * seq, RNA_Type atype)
 {
        Sequence ::set_seq(seq);
    Sequence::get_seq();
    ///?????
 }
RNA::RNA(RNA& rhs)
{
    Sequence::set_seq(rhs.seq); ///???
}
         const char* RNA:: detect_RNA_type(const char*&)
    {
        const char* rna_type[]={"mRNA, pre_mRNA, mRNA_exon, mRNA_intron"};
            cout<<"choose the RNA Type : "<<endl;
            cout<<"1-mRNA"<<endl;
            cout<<"2-pre_mRNA"<<endl;
            cout<<"3-mRNA_exon"<<endl;
            cout<<"4-mRNA_intron"<<endl;
            RNA_Type a = mRNA;
            RNA_Type b = pre_mRNA;
            RNA_Type c = mRNA_exon;
            RNA_Type d = mRNA_intron;
            int enum_choice1;
            if(enum_choice1==1)
                cout<< rna_type[a] <<endl;
            if(enum_choice1==2)
                cout<< rna_type[b] <<endl;
            if(enum_choice1==3)
                cout<< rna_type[c] <<endl;
            if(enum_choice1==4)
                cout<< rna_type[d] <<endl;
            else
                cout<< rna_type[a] <<endl;
    }
void RNA :: Print() {
 cout <<"RNA is "<<endl;
 for(int i =0 ; i <strlen(seq);i++)
 {
     cout <<seq[i];
 }
 RNA ro;
// cout <<ro. detect_RNA_type();

 cout <<" after converting to DNA"<<endl;
 //cout<<ConvertToDNA();
}
//Protein ConvertToProtein(const CodonsTable & table);
 DNA RNA :: ConvertToDNA()
{  DNA GET;
    for(int i=GET.get_SI(); i<=GET.get_EI(); i++)
    {
        if(this->seq[i]=='U')
        {
            seq[i]='T';
        }


    }
    DNA DO;


    DO.BuildComplementaryStrand();
    /// here comes a DNA RETURN , still not read
}


RNA::~RNA()
{
    //dtor
}
