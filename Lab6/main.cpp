/**
filename: main
Author: Julia Garrett
10/27/2016

**/
#include<iostream>
#include<string>
#include "MazeReader.h"
#include "MazeWalker.h"

int main(int argc, char* argv[])
{
	//checks for file existance
	if(argc >= 2)
	{
		MazeReader File(argv[1]);// input file




		 // set and get value
		int startRow; 
		int startCol;
		int rows;
                int cols;
                 startRow = File.getStartRow();
                 rows = File.getRows();
                 startCol= File.getStartCol();
                 cols= File.getCols();
    const char* const* mymaze = File.getMaze();// array ==mazeReader arr

		try
		{

			std::cout<<"Starting Position: "<<startRow<<" , "<<startCol<<std::endl;
      std::cout<<"size: "<<rows<<","<<cols<<std::endl;

			MazeWalker Walker(mymaze, startRow, startCol, rows, cols);

			if(Walker.walkMaze())// if maze is the best case
			{

				for(int i = 0; i <Walker.getVisitedRows(); i++) //print
				{
					for(int j = 0; j < Walker.getVisitedCols(); j++)
					{
						std::cout<<Walker.getVisited()[i][j]<<'\t';
					}
					std::cout << '\n';
				}
          std::cout<<"we escaped!!!"<<std::endl;

			}

		}
		catch(MazeCreationException& e)
		{

			std::cout<<e.what();
		}
	}
	else
	{
		std::cout << "Please choose a input file"<<std::endl;
	}

return(0);
}
