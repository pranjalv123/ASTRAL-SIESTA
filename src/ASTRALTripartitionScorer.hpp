#ifndef ASTRAL_TRIPARTITION_SCORER_HPP__
#define ASTRAL_TRIPARTITION_SCORER_HPP__

#include <phylonaut/TripartitionScorer.hpp>
#include <util/Logger.hpp>


class ASTRALTripartitionScorer : public TripartitionScorer{
public:
  ASTRALTripartitionScorer(string& genetrees) : treefile(genetrees) {};
  virtual void setup(Config& conf, vector<Clade>& clades);
  virtual double score(const Tripartition& t);
  virtual double adjust_final_score(double score);
private:
  vector<vector<Taxon>> postorders;
  vector<Clade> gttaxa;
  string treefile;
};



#endif
