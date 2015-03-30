#include "GameHUD.h"
void GameHUD::update(GameScene * scene , double delta, Keys keys) {
	lives_ = scene->player()->lives_;
}
void GameHUD::render(HDC gr) {
	string str = to_string(lives_);

	str.append(" Lives");

	SpriteSheet * spr = SpriteSheet::get("spr/mario.bmp");

	Texture txt = {
		308, 48,
		18, 18
	};

	spr->draw(txt, 100, 100);

    TextOut(gr, 200, 10, str.c_str(), 7);
}