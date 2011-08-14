/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2003 Chris Schoeneman, Nick Bolton, Sorin Sbarnea
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ISECONDARYSCREEN_H
#define ISECONDARYSCREEN_H

#include "IInterface.h"
#include "MouseTypes.h"

//! Secondary screen interface
/*!
This interface defines the methods common to all platform dependent
secondary screen implementations.
*/
class ISecondaryScreen : public IInterface {
public:
	//! @name accessors
	//@{

	//! Fake mouse press/release
	/*!
	Synthesize a press or release of mouse button \c id.
	*/
	virtual void		fakeMouseButton(ButtonID id, bool press) const = 0;

	//! Fake mouse move
	/*!
	Synthesize a mouse move to the absolute coordinates \c x,y.
	*/
	virtual void		fakeMouseMove(SInt32 x, SInt32 y) const = 0;

	//! Fake mouse move
	/*!
	Synthesize a mouse move to the relative coordinates \c dx,dy.
	*/
	virtual void		fakeMouseRelativeMove(SInt32 dx, SInt32 dy) const = 0;

	//! Fake mouse wheel
	/*!
	Synthesize a mouse wheel event of amount \c xDelta and \c yDelta.
	*/
	virtual void		fakeMouseWheel(SInt32 xDelta, SInt32 yDelta) const = 0;
	
	//! Fake gamepad button down
	/*!
	Synthesize gamepad events to generate mouse down.
	*/
	virtual void		fakeGamepadButtonDown(GamepadButtonID id) const = 0;
	
	//! Fake  gamepad button up
	/*!
	Synthesize gamepad events to generate mouse up.
	*/
	virtual void		fakeGamepadButtonUp(GamepadButtonID id) const = 0;
	
	//! Fake  gamepad analog change
	/*!
	Synthesize gamepad events to generate analog (stick/triggers) changes
	of absolute amounts \c x and \c y.
	*/
	virtual void		fakeGamepadAnalog(GamepadAnalogID id, SInt32 x, SInt32 y) const = 0;

	//@}
};

#endif
