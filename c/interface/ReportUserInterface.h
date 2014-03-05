/*Copyright 2002-2014 e-foto team (UERJ)
  This file is part of e-foto.

    e-foto is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    e-foto is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with e-foto.  If not, see <http://www.gnu.org/licenses/>.
*/
/**************************************************************************
		ReportUserInterface.h
**************************************************************************/


#ifndef REPORTUSERINTERFACE_H
#define REPORTUSERINTERFACE_H

#include "ReportManager.h"
#include "PositionMatrix.h"

//#include "EObject.h"

namespace br {
namespace uerj {
namespace eng {
namespace efoto {

#define XMLTYPE 0
#define TXTTYPE 1
#define HTMTYPE 2

class ReportUserInterface //: public EObject
{

protected:

	// Associated Objects
	//
	ReportManager* manager;

public:

	// AssociatReportn Methods
	//
	ReportManager* getManager();

	// Other Methods
	//
	virtual bool exec() = 0;

};

} // namespace efoto
} // namespace eng
} // namespace uerj
} // namespace br

#endif //REPORTUSERINTERFACE_H