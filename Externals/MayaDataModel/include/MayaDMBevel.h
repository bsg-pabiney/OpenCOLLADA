/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_BEVEL_H__
#define __MayaDM_BEVEL_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMAbstractBaseCreate.h"
namespace MayaDM
{
class Bevel : public AbstractBaseCreate
{
public:
public:
	Bevel(FILE* file,const std::string& name,const std::string& parent=""):AbstractBaseCreate(file, name, parent, "bevel"){}
	virtual ~Bevel(){}
	void setTolerance(double tol)
	{
		if(tol == 0) return;
		fprintf(mFile,"setAttr \".tol\" %f;\n", tol);

	}
	void setWidth(double w)
	{
		if(w == 0) return;
		fprintf(mFile,"setAttr \".w\" %f;\n", w);

	}
	void setDepth(double d)
	{
		if(d == 0) return;
		fprintf(mFile,"setAttr \".d\" %f;\n", d);

	}
	void setExtrudeDepth(double ed)
	{
		if(ed == 1) return;
		fprintf(mFile,"setAttr \".ed\" %f;\n", ed);

	}
	void setCornerType(unsigned int ct)
	{
		if(ct == 2) return;
		fprintf(mFile,"setAttr \".ct\" %i;\n", ct);

	}
	void setNumberOfSides(int ns)
	{
		if(ns == 4) return;
		fprintf(mFile,"setAttr \".ns\" %i;\n", ns);

	}
	void setBevelShapeType(unsigned int bst)
	{
		if(bst == 1) return;
		fprintf(mFile,"setAttr \".bst\" %i;\n", bst);

	}
	void setJoinSurfaces(bool js)
	{
		if(js == true) return;
		fprintf(mFile,"setAttr \".js\" %i;\n", js);

	}
	void getInputCurve()
	{
		fprintf(mFile,"\"%s.ic\"",mName.c_str());

	}
	void getUseDirectionCurve()
	{
		fprintf(mFile,"\"%s.udc\"",mName.c_str());

	}
	void getOutputSurface1()
	{
		fprintf(mFile,"\"%s.os1\"",mName.c_str());

	}
	void getOutputSurface2()
	{
		fprintf(mFile,"\"%s.os2\"",mName.c_str());

	}
	void getOutputSurface3()
	{
		fprintf(mFile,"\"%s.os3\"",mName.c_str());

	}
	void getTolerance()
	{
		fprintf(mFile,"\"%s.tol\"",mName.c_str());

	}
	void getWidth()
	{
		fprintf(mFile,"\"%s.w\"",mName.c_str());

	}
	void getDepth()
	{
		fprintf(mFile,"\"%s.d\"",mName.c_str());

	}
	void getExtrudeDepth()
	{
		fprintf(mFile,"\"%s.ed\"",mName.c_str());

	}
	void getCornerType()
	{
		fprintf(mFile,"\"%s.ct\"",mName.c_str());

	}
	void getNumberOfSides()
	{
		fprintf(mFile,"\"%s.ns\"",mName.c_str());

	}
	void getBevelShapeType()
	{
		fprintf(mFile,"\"%s.bst\"",mName.c_str());

	}
	void getJoinSurfaces()
	{
		fprintf(mFile,"\"%s.js\"",mName.c_str());

	}
protected:
	Bevel(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):AbstractBaseCreate(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_BEVEL_H__