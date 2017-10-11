/**

Author: Julia Garrett
10/27/2016

**/

#include "MazeReader.h"
#include <iostream>


MazeReader::MazeReader(std::string file) throw (MazeCreationException)
{

	std::ifstream infile;
	infile.open(file);

		//get start position and array size
		infile>>m_rows;
	  infile>>m_cols;
		infile>>m_startRow;
		infile>>m_startCol;
    char p;
		if( m_cols > m_startCol && m_rows > m_startRow && m_rows>0 && m_cols >0)
		{
			// create 2d array
			m_arr = new char*[m_rows];
			for(int i = 0; i < m_rows; i++)
			{
				m_arr[i] = new char[m_cols];
			}
			for(int i = 0; i < m_rows; i++)
			{
				for(int j = 0; j < m_cols; j++)
				{
					infile>>p;
					m_arr[i][j] = p;
				}
			}
		}
		else
		{
			throw(MazeCreationException("Invalid entrance \n"));
		}


	readMaze();// make sure the maze can play
}

MazeReader::~MazeReader()
{
	for(int i = 0; i < m_rows; i++)
	{
		delete [] m_arr[i];
	}
	delete [] m_arr;
}// delete array  no memory leak

const char* const* MazeReader::getMaze() const
{
	return(m_arr);
}

int MazeReader::getCols() const
{
	return(m_cols);
}

int MazeReader::getRows() const
{
	return(m_rows);
}

int MazeReader::getStartCol() const
{
	return(m_startCol);
}

int MazeReader::getStartRow() const
{
	return(m_startRow);
}

void MazeReader::readMaze()	throw (MazeCreationException)
{

	bool entrance = false;  // check it can move

	if(m_arr[m_startRow][m_startCol]=='E' )
	{
		entrance = true;
	}
	 else if(m_arr[m_startRow][m_startCol] == 'P')
	 {
      entrance = true;

	 }

	if(!entrance==true)// if the start point is invalid
 	{
 		throw(MazeCreationException("invalid entrance"));
 	}




   bool escape = false;
	for(int i = 0; i < m_rows; i++)
	{
		for(int j = 0; j < m_cols; j++)
		{
			if(m_arr[i][j] == 'E')//if the maze has exit
			                      // return true
			{
				escape = true;
			}
		}
	}
	if(!escape==true)// if there is no exit
	{

		std::cout<<"Starting Position: "<<m_startRow<<" , "<<m_startCol<<std::endl;
		std::cout<<"size: "<<m_rows<<","<<m_cols<<std::endl;
		throw(MazeCreationException("no way out"));
	}



}
