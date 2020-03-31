#pragma once
#include "ECSConfig.h"
#include "TransformComponentV2.h"
#include "BuoyancyComponent.h"

namespace Reality
{
	class BuoyancySystem : public ECSSystem
	{
	public:
		BuoyancySystem();
		void Update(float deltaTime);

		float waterHeight = 0.0f;
		float liquidDensity = 10.0f;

	private:
		const Vector3& CalculateWorldBuoyancyForce(const Vector3& localBuoyancyForce, TransformComponentV2& transform);
	};
}
