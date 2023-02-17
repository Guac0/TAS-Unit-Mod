//increase speed of ladder
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic
		{
			speed = "1.05/(2/3)"; //unsure exactly, but google is my friend and it compiles
		};
	};
};
class CfgAnimation
{
	ladderSpeed = "0.5*2"; //2x speed, obviously
};
