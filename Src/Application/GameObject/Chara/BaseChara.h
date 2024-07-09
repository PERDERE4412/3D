#pragma once

class BaseChara :public KdGameObject
{
public:

	BaseChara() { Init(); }					// コンストラクタ
	~BaseChara()override {}					// デストラクタ

	void Update()override;					// 更新
	void PostUpdate()override;				// 後更新

	void Init()override;

protected:

	std::shared_ptr<KdModelData> m_model;	// モデルデータ
	Math::Vector3 m_pos;					// 座標
};