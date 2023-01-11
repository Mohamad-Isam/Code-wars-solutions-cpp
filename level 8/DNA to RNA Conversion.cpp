#include <string>

std::string DNAtoRNA(std::string dna){
  for(int i = 0; i < dna.length(); i++)
    if(dna[i] == 'T') dna[i] = 'U';
  return dna;
}
