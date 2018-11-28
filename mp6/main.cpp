#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"
#include "tests/mazereader.h"

using namespace std;

PNG read_solution(const string & filename, int width, int height)
{
      PNG output;
      output.readFromFile(filename);
      return output;
}

void copyMaze(const MazeReader & source, SquareMaze * dest)
{
	dest->makeMaze(source.getWidth(), source.getHeight());
	for (int x = 0; x < source.getWidth(); x++)
	{
		for (int y = 0; y < source.getHeight(); y++)
		{
			if (x < source.getWidth() - 1)
				dest->setWall(x, y, 0, source.isWall(x, y, MazeReader::RIGHTWALL));
			if (y < source.getHeight() - 1)
				dest->setWall(x, y, 1, source.isWall(x, y, MazeReader::DOWNWALL));
		}
	}
}

int main()
{
    SquareMaze maze;
	maze.makeMaze(20, 100);
	//PNG * actualOutput = maze.drawCreativeMaze();
    PNG * actualOutput = maze.drawMazeWithCreative();
	actualOutput->writeToFile("creative" + string(".png"));
    cout << "finish" << endl;
    return 0;
}
