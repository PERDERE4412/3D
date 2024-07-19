#pragma once

#include "../BaseChara.h"

class Player : public BaseChara
{
public:

	Player() { Init(); }			// コンストラクタ
	~Player()override {}			// デストラクタ

	void Update()override;			// 更新
	void PostUpdate()override;		// 後更新

private:

	void Init()override;			// 初期化
};