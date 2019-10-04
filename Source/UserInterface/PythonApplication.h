//Add the include:
#include "BandiVideoPlayer.h"

//Search for:
CMovieMan					m_MovieManager;

//Add after:
CBandiVideoPlayer			m_BandiManager;

//Search for:
int m_iContinuousCursorNum;

//Add after:
	public:
		LPDIRECT3D8		GetDirectx8();
		LPDIRECT3DDEVICE8 GetDevice();