#include "Simon.h"
void Simon::Update(DWORD dt)
{
	CGameObject::Update(dt);

	//simple fall down
	vy += SIMON_GRAVITY;

	if (y > 100)
	{
		vy = 0; y = 100.0f;
	}

	// simple screen edge collision!!!
	if (vx > 0 && x > 290) x = 290;
	if (vx < 0 && x < 0) x = 0;
}
void Simon::Render()
{
	int ani;
	if (vx == 0)
	{
		if (nx > 0) ani = SIMON_ANI_IDLE_RIGHT;
		else ani = SIMON_ANI_IDLE_LEFT;
	}
	else if (vx > 0)
		ani = SIMON_ANI_WALKING_RIGHT;
	else ani = SIMON_ANI_WALKING_LEFT;

	animations[ani]->Render(x, y);
}
void Simon::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
		//simon đi về hướng phía bên phải
	case SIMON_STATE_WALKING_RIGHT:
		vx = SIMON_WALKING_SPEED;
		nx = 1;
		break;
		//simon đi về phía bên trái
	case SIMON_STATE_WALKING_LEFT:
		vx = -SIMON_WALKING_SPEED;
		nx = -1;
		break;
		//simon nhảy
	case SIMON_STATE_JUMP:
		if (y == 100)
			vy = -SIMON_JUMP_SPEED_Y;
		//simon đứng y
	case SIMON_STATE_IDLE:
		vx = 0;
		break;
	}
}