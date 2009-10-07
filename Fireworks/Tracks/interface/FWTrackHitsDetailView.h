// -*- C++ -*-
//
// Package:     Tracks
// Class  :     FWTrackHitsDetailView

#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "Rtypes.h"
#include "Fireworks/Core/interface/FWDetailView.h"
#include "Fireworks/Core/interface/CSGActionSupervisor.h"

class TGLEmbeddedViewer;

class FWTrackHitsDetailView: public CSGActionSupervisor 
{
public:
   FWTrackHitsDetailView();
   virtual ~FWTrackHitsDetailView();

   void build (const FWModelId &id, const reco::Track*, TEveWindowSlot*);
   void pickCameraCenter();

protected:
   TGLEmbeddedViewer* m_viewer;

private:
   FWTrackHitsDetailView(const FWTrackHitsDetailView&); // stop default
   const FWTrackHitsDetailView& operator=(const FWTrackHitsDetailView&); // stop default
};
