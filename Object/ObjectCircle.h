#pragma once

#include "ObjectBase.h"

class SceneTest;

class ObjectCircle : public ObjectBase
{
public:
	ObjectCircle();
	virtual ~ObjectCircle();

	virtual void init() override;
	virtual void end() override;

	virtual void update() override;
	virtual void draw() override;

	void setSceneTest(SceneTest* pSceneTest) { m_pSceneTest = pSceneTest; }

	// 表示位置の設定
	void setPos(Vec2 pos) { m_pos = pos; }
	// 表示色の設定
	void setColor(int color) { m_color = color; }

	// 自身がつかまれているか
	bool isCatchinvalid()const { return m_isCatch; };

	// つかめるかどうか
	bool isCatchEnable(Vec2 pos);

private:
	SceneTest* m_pSceneTest;
	// 表示情報
	int	m_color;
	// つかみ状態
	bool m_isCatch;     // つかまれているかどうか
	Vec2 m_catchOffset; //　つかんだ位置から中心へのベクトル
};