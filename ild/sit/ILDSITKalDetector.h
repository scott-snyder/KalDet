#ifndef __ILDSITKALDETECTOR__
#define __ILDSITKALDETECTOR__

/** Ladder based SIT to be used for ILD DBD studies 
 *
 * @author S.Aplin DESY
 */

#include "kaltest/TVKalDetector.h"

#include "TMath.h"

class TNode;

namespace gear{
  class GearMgr ;
}


class ILDSITKalDetector : public TVKalDetector {
  
public:
  
  /** Initialize the SIT from GEAR */
  ILDSITKalDetector( const gear::GearMgr& gearMgr );
  
  
private:
  
  void setupGearGeom( const gear::GearMgr& gearMgr ) ;
  
  int _nLayers ;
  double _bZ ;
  
  struct SIT_Layer {
    int nLadders;
    int nSensorsPerLadder;
    double phi0;
    double dphi;
    double senRMin;
    double supRMin;
    double length;
    double width;
    double offset;
    double senThickness;
    double supThickness;
    double sensorLength;
    double stripAngle;
  };
  std::vector<SIT_Layer> _SITgeo;
  
};



#endif
