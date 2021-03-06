#pragma once

#include <Siv3D.hpp>

#include "Ray.hpp"
#include "HitRec.hpp"
#include "ScatterRec.hpp"

namespace RayT {
	// 材質
	struct Material
	{
		Material() = default;

		// 反射・散乱の計算
		// 散乱する場合はその情報を、散乱しない場合はnoneを返す
		virtual Optional<ScatterRec> scatter(const Ray ray, const HitRec hitRec) const
		{
			return none;
		}
	};
}
