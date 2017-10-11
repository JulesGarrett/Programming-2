/**

Author: Julia Garrett
10/27/2016

**/
#ifndef MAZEWALKER_H
#define MAZEWALKER_H
#include "MazeReader.h"
#include<iostream>
#include<string>


class MazeWalker
{
	public:
	/**
	*	@pre The mazePtr pointer is to a valid maze.
	*	@post A maze walker is created ready to traverse the maze from the start position in the specified order.
	*/
	MazeWalker(const char* const* mazePtr, int startRow, int startCol, int rows, int cols);

	/**
	*
	*	@pre The visited array still exists and has the same dimensions (rows X cols)
	*	@post The visited array is deallocated
	*/
	~MazeWalker();

	/**
	*	@pre The maze is a valid maze.
	*	@post The maze is traversed until the end is reached or all moves are exhausted.
	*	@return true if an exit was reached, false otherwise
	*/
	bool walkMaze();


	/**
	*	@return A const pointer to the visited array. (A pointer that cannot change the array)
	*/
	const int* const* getVisited() const;

	/**
	*	@return number of rows in maze
	*/
	int getVisitedRows() const;

	/**
	*	@return number of cols in maze
	*/
	int getVisitedCols() const;

	/**
	*	@return A const pointer to the maze. (A pointer that cannot change the array)
	*/
	const char* const* getMaze() const;

        private:

	/**
	*	@returns If the current position is the exit, true is returned. False is returned otherwise.
	*/
	bool isGoalReached() const;
	bool check(int row, int col) const;
	bool mazemove(int row, int col);
        bool properMove=false;
	const char* const* m_maze;
	int** m_visited;
	int m_rows, m_cols;
	int m_curRow, m_curCol;
	int m_startRow, m_startCol;
	int m_curStep;
       
};
#endif
