//
// Programmer:    Craig Stuart Sapp <craig@ccrma.stanford.edu>
// Creation Date: Sun Oct 16 16:08:05 PDT 2016
// Last Modified: Sun Oct 16 16:08:08 PDT 2016
// Filename:      GridStaff.h
// URL:           https://github.com/craigsapp/hum2ly/blob/master/include/GridStaff.h
// Syntax:        C++11
// vim:           ts=3 noexpandtab
//
// Description:   HumGrid is an intermediate container for converting from
//                MusicXML syntax into Humdrum syntax. GridStaff is used
//                to store all voices/layers for particular staff in a 
//                particular MusicXML <part>.
//
//

#ifndef _GRIDSTAFF_H
#define _GRIDSTAFF_H

#include "humlib.h"
#include "GridSide.h"

#include <vector>

using namespace std;


namespace hum {


class GridStaff : public vector<HTp> {
	public:
		GridStaff(void);
		~GridStaff();
		void setTokenLayer(int layerindex, HTp token);
		void appendTokenLayer(int layerindex, HTp token,
		                      const string& spacer = " ");

	private:
		GridSide m_staffsides;
};


} // end namespace hum

#endif /* _GRIDSTAFF_H */



