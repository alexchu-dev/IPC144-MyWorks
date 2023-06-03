// w7header.h
#define MAXPATH 70
#define MINPATH 10
#define MULTIOFPATH 5
#define MAXLIVES 10
// declare PlayerInfo struct to config a player
struct PlayerInfo
{
	int lives;
	int treasures;
	char name;
	int pastPositions[MAXPATH];
}player;
// declare GameInfo struct to config the game
struct GameInfo
{
	int maxMoves;
	int pathLength;
	int bombPlacement[MAXPATH];
	int treaPlacement[MAXPATH];
}game;