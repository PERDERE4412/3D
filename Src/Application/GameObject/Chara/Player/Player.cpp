#include "Player.h"

void Player::Update()
{
	BaseChara::Update();
}

void Player::PostUpdate()
{
	BaseChara::PostUpdate();
}

void Player::Init()
{
	m_model = std::make_shared<KdModelData>();
}
