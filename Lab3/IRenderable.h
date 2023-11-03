#pragma once

#ifndef _IR_H_
#define _IR_H_


class IRenderable
{
	friend class RenderSystem;

protected:

	IRenderable() {};

	virtual ~IRenderable() = 0;

	virtual void Render() = 0;
};

#endif // !_IR_H_
