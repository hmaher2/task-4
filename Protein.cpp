#include "Protein.h"
#include "Sequence.h"
#include <cstring>
#include "DNA.h"
#include <string>
Protein::Protein()
{
    //ctor
}
	 Protein::Protein(char * p)

	{
	    p=new char [strlen(seq)+1];
    strcpy(p,seq);
	}

/*	DNA* Protein:: GetDNAStrandsEncodingMe(const DNA & bigDNA)
	{
       DNA DO(bigDNA);
       RNA RO(DO.ConvertToDNA());
       CodonsTable CO;
       CO.LoadCodonsFromFile("");///??
       DNA *DOptr = new DNA [200];
       int counter = 0;
       cout<< DO.ConvertToDNA()<<endl;

       for(int i =0;RO.seq.length();i++){
            string d="";
            string w="";
            int q=0;
            for (int j=0;j<seq.length();j++){
                d+=RO.get_seq()[j];
                if ((j+1)%3==0){
                    cout <<CO.codons.AminoAcid; ///co.aminoscid(St)
                    if (CO.codons.AminoAcid!=seq[q]){
                        break;
                    }
                    if (CO.codons.AminoAcid=seq[q]){
                        w+=d;
                    }
                }
                if (w.length==seq.length*3)
                    {
                        RNA r(w,mRNA);
                        DNA DN("",1,w.length(),promoter);
                        DN=r.ConvertToDNA();
                        DOptr[counter]=DN;
                        counter++;
                        i=(seq.length()*3)-1;
                        cout <<DN<<endl;
                    }
            }

       }


	}*/
Protein::~Protein()
{
    //dtor
}
