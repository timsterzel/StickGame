#pragma once
#include <vector>
/*
 * Not really an AI, but I dont have a better name and this class can play agains
 * human players later (but only the stick game)
 */

class AI
{

public:
	class MoveTable
	{
	private:
		const int m_Rows;
		const int m_Columns;
		std::vector<std::vector<bool>> m_table;
	public:
		MoveTable(int rows, int columns);

		bool getValue(int row, int column) const;
		void setValue(int row, int column, bool value);

		void print() const;


	};

private:
	int m_stackSize;
	// Store which game moves lead to win and which to lose
	// The size of the vectors are the stack size + 1
	std::vector<std::vector<bool>> m_moveTable;

public:
	explicit AI(int stackSize);

	void printTable() const;

private:

	void calcMoveTable();

};
