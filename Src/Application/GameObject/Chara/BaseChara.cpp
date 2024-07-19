#include "BaseChara.h"

void BaseChara::Update()
{
}

void BaseChara::PostUpdate()
{
	m_mWorld = Math::Matrix::CreateTranslation(m_pos);
}

void BaseChara::GenerateDepthMapFromLight()
{
	if (!m_model)return;

	KdShaderManager::Instance().m_StandardShader.DrawModel(*m_model);
}

void BaseChara::DrawLit()
{
	if (!m_model)return;

	KdShaderManager::Instance().m_StandardShader.DrawModel(*m_model);
}