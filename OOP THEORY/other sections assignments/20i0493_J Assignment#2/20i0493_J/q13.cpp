#include <iostream>
#include<cstring>

using namespace std;

void printMaze(char** maze, int nrows, int ncols){
 for (int i=0; i<nrows; i++){
  for (int j=0; j<ncols; j++){
   cout<<maze[i][j]<<" ";
  }
  cout<<endl;
 }
 cout<<endl;
}


bool mazeSolver( char ** maze, int nrows, int ncols, int srow/*starting row */, int scol /*starting column*/)
{
	printMaze(maze,12,12);
	
	maze[srow][scol] = 'X';
	if(scol==0){
		return true; 
	}

	if(srow-1>=0){
	if(maze[srow-1][scol] == '.'){
		if(mazeSolver(maze,nrows,ncols,srow-1,scol)){
			maze[srow][scol] == 'X';
			return true;
		}

	}
	}
	if(scol-1>=0){
	if(maze[srow][scol-1] == '.'){
		if(mazeSolver(maze,nrows,ncols,srow,scol-1)){

			maze[srow][scol] == 'X';
			return true;
		}
	

	}
	}

	if(srow+1<nrows){
	if(maze[srow+1][scol] == '.'){
		if(mazeSolver(maze,nrows,ncols,srow+1,scol)){
			maze[srow][scol] == 'X';
			return true;
		}
	

	}
	}

	if(scol+1<ncols){
	if(maze[srow][scol+1] == '.'){
		if(mazeSolver(maze,nrows,ncols,srow,scol+1)){
			maze[srow][scol] == 'X';
			return true;
		}
	

	}
	}
	maze[srow][scol] = '.';
	return false;
}

