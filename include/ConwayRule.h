#ifndef CONWAYRULE_H
#define CONWAYRULE_H

#include "Rule.h"
using std::vector;

class ConwayRule : public Rule {
	public:
		ConwayRule() { }
		void specificRule(Cell* cell, int pNeighboursAlive);
};
#endif // !CONWAYRULE_H


