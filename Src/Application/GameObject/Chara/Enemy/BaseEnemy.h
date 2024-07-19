#pragma once

#include "../BaseChara.h"

class BaseEnemy :public BaseChara
{
public:

	BaseEnemy() {}							// コンストラクタ
	virtual ~BaseEnemy()override {}			// デストラクタ

	virtual void Update()override;			// 更新
	virtual void PostUpdate()override;		// 後更新

	void SetTarget(std::shared_ptr<KdGameObject> _target)
	{
		m_target = _target;
	}

protected:

	std::weak_ptr<KdGameObject> m_target;
};