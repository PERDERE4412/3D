#pragma once

class BaseChara :public KdGameObject
{
public:

	BaseChara() { Init(); }						// コンストラクタ
	virtual ~BaseChara()override {}				// デストラクタ

	virtual void Update()override;				// 更新
	virtual void PostUpdate()override;			// 後更新
	void GenerateDepthMapFromLight()override;	// 光を遮る描画
	void DrawLit()override;						// 陰影の付く描画

protected:

	std::shared_ptr<KdModelData> m_model;		// モデルデータ
	Math::Vector3 m_pos;						// 座標
	Math::Vector3 m_vec;						// 方向ベクトル
};