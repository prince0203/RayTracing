#pragma once

#include <Siv3D.hpp>

// 投影面
struct ImagePlane {
	// 中心座標
	Vec3 center;

	// 大きさ
	Vec2 size;

	ImagePlane() = default;

	constexpr ImagePlane(const Vec3 _center, const Size _size)
		: center(_center)
		, size(_size)
	{ }
};
