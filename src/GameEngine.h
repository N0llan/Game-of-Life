#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <string>


/**
* This class handles runtime of program
*/
class GameEngine {
	private:
		//Rule oddRule = new Rule;
		//Rule evenRule = new Rule;
		int x = 80;
		int y = 24;
		int generations = 500;
		//vector<Cell> cellmap;
	
	public:
		GameEngine();
		void run();
		void setWindowSize(std::string size);
		void setGenerations(std::string pGenerations);
		void setOddRule(std::string rule);
		void setEvenRule(std::string rule);
		void readStartCellsFromFile(std::string file);
		void setStartCellsRandom();
		std::string showHelp();



};


#endif // !GAMEENGINE_H
