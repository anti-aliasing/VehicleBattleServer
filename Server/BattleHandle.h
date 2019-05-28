#pragma once
#include "PlayerModel.h"
#include "include/rapidjson/document.h"

namespace GameServer
{
	using namespace Entity;
	using namespace rapidjson;
	namespace Handle
	{
		class BattleHandle
		{
		public:
			void UpdateTransformState(string userId, Document document, PlayerModel* player);
			void UpdateFireState(string userId, Document document, PlayerModel* player);
			void UpdateHealthState(string userId, int health, PlayerModel* player);
		};
	}
}
