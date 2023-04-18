//increase speed of ladder and swim
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
		
		//swim
		class AswmPercMstpSnonWnonDnon;
		class AsswPercMstpSnonWnonDnon;
		class AbswPercMstpSnonWnonDnon;
		class AdvePercMstpSnonWrflDnon;
		class AsdvPercMstpSnonWrflDnon;
		class AbdvPercMstpSnonWrflDnon;
		class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon
		{
			speed = 0.38;
		};
		class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon
		{
			speed = 0.38;
		};
		class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon
		{
			speed = 0.35;
		};
		class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon
		{
			speed = 0.2;
		};
		class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon
		{
			speed = 0.2;
		};
		class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon
		{
			speed = 0.2;
		};
	};
};
class CfgAnimation
{
	ladderSpeed = "0.5*2"; //2x speed, obviously
};