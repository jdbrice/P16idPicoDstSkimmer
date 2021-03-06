/***************************************************************************
 *
 * $Id: StAntiNeutrinoMu.hh,v 1.1 1999/05/14 18:48:49 ullrich Exp $
 *
 * Author: Thomas Ullrich, May 99 (based on Geant4 code, see below) 
 ***************************************************************************
 *
 * The design of the StParticleDefinition class and all concrete
 * classes derived from it is largely based on the design of the 
 * G4ParticleDefinition class from Geant4 (RD44).
 * Although the code is in large parts different (modified or rewritten)
 * and adapted to the STAR framework the basic idea stays the same.
 *
 ***************************************************************************
 *
 * $Log: StAntiNeutrinoMu.hh,v $
 * Revision 1.1  1999/05/14 18:48:49  ullrich
 * Initial Revision
 *
 **************************************************************************/
#ifndef StAntiNeutrinoMu_hh
#define StAntiNeutrinoMu_hh

#include "StLepton.hh"

class StAntiNeutrinoMu : public StLepton {
public:
    static StAntiNeutrinoMu* instance() {return &mAntiNeutrinoMu;}
    static StAntiNeutrinoMu* antiNeutrinoMu() {return &mAntiNeutrinoMu;}
    
private:
    static StAntiNeutrinoMu mAntiNeutrinoMu;
    
    StAntiNeutrinoMu(const string  &  aName,  
		     double           mass,     
		     double           width,
		     double           charge,   
		     int              iSpin,
		     int              iParity,
		     int              iConjugation,
		     int              iIsospin,   
		     int              iIsospinZ, 
		     int              gParity,
		     const string  &  pType,
		     int              lepton,
		     int              baryon,
		     int              encoding,
		     bool             stable,
		     double           lifetime);
};

#endif
