#ifndef RNA_H
#define RNA_H
#include "Sequence.h"
#include "DNA.h"
enum RNA_Type {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};
class DNA;

class RNA : public Sequence

{
    public:

         RNA();
        RNA(char * seq, RNA_Type atype);
                 const char* detect_RNA_type(const char*&);

        RNA(RNA& rhs);
        ~RNA();
          void Print();
 	 	// function to convert the RNA sequence into protein sequence
        // using the codonsTable object
       // Protein ConvertToProtein(const CodonsTable & table);
 	 	// function to convert the RNA sequence back to DNA
         DNA ConvertToDNA();
       // virtual ~RNA();

    protected:

    private:
         RNA_Type type;
};

#endif // RNA_H
