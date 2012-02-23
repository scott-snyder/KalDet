
#include "ILDPlanarStripHit.h"
#include "ILDPlanarMeasLayer.h"
#include "ILDSegmentedDiscMeasLayer.h"
#include "ILDDiscMeasLayer.h"
#include "TMath.h"

#include <iostream>
#include <iomanip>

using namespace std;



//_____________________________________________________________________
//  ----------------------------------
//  Implementation of public methods  
//  ----------------------------------

/** Global to Local coordinates */

TKalMatrix ILDPlanarStripHit::XvToMv(const TVector3 &xv, Double_t /*t0*/) const
{
 
//  TKalMatrix h = this->GetMeasLayer().XvToMv(*(this),xv);
//
//  TKalMatrix h_return(1,2);
//
//  h_return(0,0) = h(0,0); 
//  
//  return h_return;

  return this->GetMeasLayer().XvToMv(*(this),xv);
  
  
}


/** Print Debug information */

void ILDPlanarStripHit::DebugPrint(Option_t *) const
{
  cerr << "------------------- Site Info -------------------------" << endl;
  
  for (Int_t i=0; i<GetDimension(); i++) {
    Double_t x  = (*this)(i,0);
    Double_t dx = (*this)(i,1);
    cerr << " x[" << i << "] = " << setw(8) << setprecision(5) << x
    << "    "
    << "dx[" << i << "] = " << setw(6) << setprecision(2) << dx
    << setprecision(7)
    << resetiosflags(ios::showpoint)
    << endl;
  }
  cerr << "-------------------------------------------------------" << endl;
}
