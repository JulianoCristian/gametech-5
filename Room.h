#ifndef __Room_h_
#define __Room_h_

#include <Ogre.h>
#include "Wall.h"
#include "Ball.h"
#include "ScoreWall.h"


class Room {
public:
	Room(Ogre::SceneManager*, int);
	void setup(void);
	ScoreWall* getScoreWall(void);
private:
	ScoreWall* scoreWall;
	Wall wall;
	Ball ball;
};

#endif
