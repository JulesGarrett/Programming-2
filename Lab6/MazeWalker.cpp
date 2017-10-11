/**

Author: Julia Garrett
10/27/2016

**/
#include "MazeWalker.h"
#include <iostream>
MazeWalker::MazeWalker(const char* const* mazePtr, int startRow, int startCol, int rows, int cols)
{
	m_maze = mazePtr;
	m_startRow = startRow;
	m_startCol = startCol;
	m_rows = rows;
	m_cols = cols;

	// set current position is start position
	m_curRow = startRow;
	m_curCol = startCol;
	m_curStep = 1;



	m_visited = new int*[m_rows]; //  create a 2D array
	for(int i = 0; i < m_rows; i++)
	{
		m_visited[i] = new int[m_cols];
	}
	for(int i = 0; i < m_rows; i++)
	{
		for(int j = 0; j < m_cols; j++)
		{
			m_visited[i][j] = 0;
		}
	}
}

MazeWalker::~MazeWalker()
{
	for(int i = 0; i < m_rows; i++)
	{
		delete [] m_visited[i];
	}
	delete [] m_visited;     // delete array  no memory leak
}


bool MazeWalker::check(int row, int col) const
{
	// check size and maze can walk and the path did not pass before
	if(row >= 0  && col >= 0 && row < m_rows && col < m_cols && m_visited[row][col] == 0 && m_maze[row][col]!='W' && m_visited[row][col] == 0)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

bool MazeWalker::mazemove(int row, int col)// control movement
{

	if(check(row, col)==true)
		{
			m_curRow = row;
			m_curCol = col;
			m_visited[row][col] = m_curStep;
			m_curStep++;

			if(mazemove(row-1, col))// going up
			{
				return(true);
			}

			else if(mazemove(row+1, col))//going down
			{
				return(true);
			}

			else if(mazemove(row, col-1))//going left
			{

				return(true);
			}
			else if(mazemove(row, col+1))// going right
			{
				return(true);
			}
			else
			{

				m_curStep--;// going back
				m_visited[row][col] = 0;
				return(false);
			}
		}

		if(isGoalReached())
		{
			return(true);
		}

}


bool MazeWalker::walkMaze()
{
	mazemove(m_curRow, m_curCol);
	return(isGoalReached());
}

const int* const* MazeWalker::getVisited() const
{
	return(m_visited);
}

int MazeWalker::getVisitedRows() const
{
	return(m_rows);
}

int MazeWalker::getVisitedCols() const
{
	return(m_cols);
}

const char* const* MazeWalker::getMaze() const
{
	return(m_maze);
}

bool MazeWalker::isGoalReached() const
{
	return(m_maze[m_curRow][m_curCol]=='E');
}
