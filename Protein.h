#ifndef PROTEIN_H
#define PROTEIN_H
#include "Sequence.h"
#include "DNA.h"
enum Protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class Protein : public Sequence
{
    public:
        Protein();
        Protein(char * p);
        DNA*  GetDNAStrandsEncodingMe(const DNA & bigDNA);
        virtual ~Protein();

    protected:

    private:
         Protein_Type type;
};

#endif // PROTEIN_H
