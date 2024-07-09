#include "BaseChara.h"

void BaseChara::Update()
{
}

void BaseChara::PostUpdate()
{
	m_mWorld = Math::Matrix::CreateTranslation(m_pos);
}

void BaseChara::Init()
{
}
