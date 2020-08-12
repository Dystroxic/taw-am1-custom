class CfgMovesBasic;
class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class LadderCivilStatic;
		// This is to increase the ladder climbing speed by 2x
		class LadderCivilUpLoop : LadderCivilStatic
		{
			speed = "1.05/(2/3)";
		};

		// This is to increase the swimming speed
		class AswmPercMstpSnonWnonDnon;
		class AsswPercMstpSnonWnonDnon;
		class AbswPercMstpSnonWnonDnon;
		class AdvePercMstpSnonWrflDnon;
		class AsdvPercMstpSnonWrflDnon;
		class AbdvPercMstpSnonWrflDnon;
		class AswmPercMrunSnonWnonDf : AswmPercMstpSnonWnonDnon
		{
			speed = 0.38;
		};
		class AsswPercMrunSnonWnonDf : AsswPercMstpSnonWnonDnon
		{
			speed = 0.38;
		};
		class AbswPercMrunSnonWnonDf : AbswPercMstpSnonWnonDnon
		{
			speed = 0.34999999;
		};
		class AdvePercMrunSnonWrflDf : AdvePercMstpSnonWrflDnon
		{
			speed = 0.2;
		};
		class AsdvPercMrunSnonWrflDf : AsdvPercMstpSnonWrflDnon
		{
			speed = 0.2;
		};
		class AbdvPercMrunSnonWrflDf : AbdvPercMstpSnonWrflDnon
		{
			speed = 0.2;
		};
	};
};

class CfgAnimation
{
	// This is to increase the ladder climbing speed by 2x
	ladderSpeed = "0.5*2";
};
