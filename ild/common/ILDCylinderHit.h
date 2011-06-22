#ifndef ILDCYLINDERHIT_H
#define ILDCYLINDERHIT_H
//*************************************************************************
//* ================
//*  ILDCylinderHit Class
//* ================
//*
//* (Description)
//*   User defined hit class
//*   provides coordinate vector as defined by the MeasLayer
//* (Requires)
//*     TVTrackHit
//* (Provides)
//*     class ILDCylinderHit
//*
//*************************************************************************
//
#include "kaltest/KalTrackDim.h"
#include "kaltest/TVTrackHit.h"

#include "ILDCylinderMeasLayer.h"


class ILDCylinderHit : public TVTrackHit {

public:
  
  ILDCylinderHit(const TVMeasLayer &ms, Double_t *x, Double_t *dx, 
	    Double_t bfield ) ; 

  virtual ~ILDCylinderHit();

  virtual TKalMatrix XvToMv(const TVector3 &xv, Double_t t0) const;
  virtual void       DebugPrint(Option_t *opt = "")          const;


private:


};
#endif