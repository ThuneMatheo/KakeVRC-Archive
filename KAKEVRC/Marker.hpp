#pragma once
#include "imgui.h"
#include "../Obf.hpp"
#include "../Singleton.hpp"
#include "Module.hpp"

class Marker : public Singleton<Marker>, public Module {
	friend class Singleton<Marker>;
public:
	ImVec4* col;
	bool* renderWhenVisible;
	bool* renderBehind, * renderInfront;

	Marker();
	void renderImGui();

	void onEnable() override {}
	void onDisable() override {}
};