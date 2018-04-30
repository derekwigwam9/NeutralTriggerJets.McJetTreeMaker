// 'StMcJetTreeMaker.utilities.h'
// Derek Anderson, Nihar Sahoo
// 04.30.2018
//
// This class reads the 'Gfmtodst' tree
// and produces a tree of jets.

#pragma once



void StMcJetTreeMaker::InitializeInputTree(TTree *tree) {

  // set branch addresses and branch pointers
  if (!tree) return;
  _tMc      = tree;
  _fCurrent = -1;
  _tMc -> SetMakeClass(1);
  _tMc -> SetBranchAddress("fUniqueID", &_fUniqueID, &_bEventList_fUniqueID);
  _tMc -> SetBranchAddress("fBits", &_fBits, &_bEventList_fBits);
  _tMc -> SetBranchAddress("runNumber", &_runNumber, &_bEventList_runNumber);
  _tMc -> SetBranchAddress("eventNumber", &_eventNumber, &_bEventList_eventNumber);
  _tMc -> SetBranchAddress("trigID", &_trigID, &_bEventList_trigID);
  _tMc -> SetBranchAddress("nGlobalTracks", &_nGlobalTracks, &_bEventList_nGlobalTracks);
  _tMc -> SetBranchAddress("nPrimaryTracks", &_nPrimaryTracks, &_bEventList_nPrimaryTracks);
  _tMc -> SetBranchAddress("refMult", &_refMult, &_bEventList_refMult);
  _tMc -> SetBranchAddress("vpdVz", &_vpdVz, &_bEventList_vpdVz);
  _tMc -> SetBranchAddress("xVertex", &_xVertex, &_bEventList_xVertex);
  _tMc -> SetBranchAddress("yVertex", &_yVertex, &_bEventList_yVertex);
  _tMc -> SetBranchAddress("zVertex", &_zVertex, &_bEventList_zVertex);
  _tMc -> SetBranchAddress("bbcZVertex", &_bbcZVertex, &_bEventList_bbcZVertex);
  _tMc -> SetBranchAddress("zdcCoincidenceRate", &_zdcCoincidenceRate, &_bEventList_zdcCoincidenceRate);
  _tMc -> SetBranchAddress("bbcCoincidenceRate", &_bbcCoincidenceRate, &_bEventList_bbcCoincidenceRate);
  _tMc -> SetBranchAddress("backgroundRate", &_backgroundRate, &_bEventList_backgroundRate);
  _tMc -> SetBranchAddress("bbcBlueBackgroundRate", &_bbcBlueBackgroundRate, &_bEventList_bbcBlueBackgroundRate);
  _tMc -> SetBranchAddress("bbcYellowBackgroundRate", &_bbcYellowBackgroundRate, &_bEventList_bbcYellowBackgroundRate);
  _tMc -> SetBranchAddress("refMultPos", &_refMultPos, &_bEventList_refMultPos);
  _tMc -> SetBranchAddress("refMultNeg", &_refMultNeg, &_bEventList_refMultNeg);
  _tMc -> SetBranchAddress("bTOFTrayMultiplicity", &_bTOFTrayMultiplicity, &_bEventList_bTOFTrayMultiplicity);
  _tMc -> SetBranchAddress("nVerticies", &_nVerticies, &_bEventList_nVerticies);
  _tMc -> SetBranchAddress("MagF", &_MagF, &_bEventList_MagF);
  _tMc -> SetBranchAddress("VrtxRank", &_VrtxRank, &_bEventList_VrtxRank);
  _tMc -> SetBranchAddress("Etsp", &_Etsp, &_bEventList_Etsp);
  _tMc -> SetBranchAddress("ETwrdidT", &_ETwrdidT, &_bEventList_ETwrdidT);
  _tMc -> SetBranchAddress("ETwradc11", &_ETwradc11, &_bEventList_ETwradc11);
  _tMc -> SetBranchAddress("ETwreneT0", &_ETwreneT0, &_bEventList_ETwreneT0);
  _tMc -> SetBranchAddress("ETwreT", &_ETwreT, &_bEventList_ETwreT);
  _tMc -> SetBranchAddress("ETwrENET0", &_ETwrENET0, &_bEventList_ETwrENET0);
  _tMc -> SetBranchAddress("ETwrphT", &_ETwrphT, &_bEventList_ETwrphT);
  _tMc -> SetBranchAddress("ETwrPTower", &_ETwrPTower, &_bEventList_ETwrPTower);
  _tMc -> SetBranchAddress("ETwrpidTower", &_ETwrpidTower, &_bEventList_ETwrpidTower);
  _tMc -> SetBranchAddress("ETwrmoduleT", &_ETwrmoduleT, &_bEventList_ETwrmoduleT);
  _tMc -> SetBranchAddress("EClustEneT0", &_EClustEneT0, &_bEventList_EClustEneT0);
  _tMc -> SetBranchAddress("EClustetav1", &_EClustetav1, &_bEventList_EClustetav1);
  _tMc -> SetBranchAddress("EClustphiv1", &_EClustphiv1, &_bEventList_EClustphiv1);
  _tMc -> SetBranchAddress("EEstrpen01", &_EEstrpen01, &_bEventList_EEstrpen01);
  _tMc -> SetBranchAddress("EEstrpen02", &_EEstrpen02, &_bEventList_EEstrpen02);
  _tMc -> SetBranchAddress("EEstrpen03", &_EEstrpen03, &_bEventList_EEstrpen03);
  _tMc -> SetBranchAddress("EEstrpen0", &_EEstrpen0, &_bEventList_EEstrpen0);
  _tMc -> SetBranchAddress("EEstrpen1", &_EEstrpen1, &_bEventList_EEstrpen1);
  _tMc -> SetBranchAddress("EEstrpen2", &_EEstrpen2, &_bEventList_EEstrpen2);
  _tMc -> SetBranchAddress("EEstrpen3", &_EEstrpen3, &_bEventList_EEstrpen3);
  _tMc -> SetBranchAddress("EEstrpen4", &_EEstrpen4, &_bEventList_EEstrpen4);
  _tMc -> SetBranchAddress("EEstrpen5", &_EEstrpen5, &_bEventList_EEstrpen5);
  _tMc -> SetBranchAddress("EEstrpen6", &_EEstrpen6, &_bEventList_EEstrpen6);
  _tMc -> SetBranchAddress("EEstrpen7", &_EEstrpen7, &_bEventList_EEstrpen7);
  _tMc -> SetBranchAddress("EEstrpen8", &_EEstrpen8, &_bEventList_EEstrpen8);
  _tMc -> SetBranchAddress("EEstrpen9", &_EEstrpen9, &_bEventList_EEstrpen9);
  _tMc -> SetBranchAddress("EEstrpen10", &_EEstrpen10, &_bEventList_EEstrpen10);
  _tMc -> SetBranchAddress("EEstrpen11", &_EEstrpen11, &_bEventList_EEstrpen11);
  _tMc -> SetBranchAddress("EEstrpen12", &_EEstrpen12, &_bEventList_EEstrpen12);
  _tMc -> SetBranchAddress("EEstrpen13", &_EEstrpen13, &_bEventList_EEstrpen13);
  _tMc -> SetBranchAddress("EEstrpen14", &_EEstrpen14, &_bEventList_EEstrpen14);
  _tMc -> SetBranchAddress("EEstrpen15", &_EEstrpen15, &_bEventList_EEstrpen15);
  _tMc -> SetBranchAddress("ETwrdidE", &_ETwrdidE, &_bEventList_ETwrdidE);
  _tMc -> SetBranchAddress("EPstripenp01", &_EPstripenp01, &_bEventList_EPstripenp01);
  _tMc -> SetBranchAddress("EPstripenp02", &_EPstripenp02, &_bEventList_EPstripenp02);
  _tMc -> SetBranchAddress("EPstripenp03", &_EPstripenp03, &_bEventList_EPstripenp03);
  _tMc -> SetBranchAddress("EPstripenp0", &_EPstripenp0, &_bEventList_EPstripenp0);
  _tMc -> SetBranchAddress("EPstripenp1", &_EPstripenp1, &_bEventList_EPstripenp1);
  _tMc -> SetBranchAddress("EPstripenp2", &_EPstripenp2, &_bEventList_EPstripenp2);
  _tMc -> SetBranchAddress("EPstripenp3", &_EPstripenp3, &_bEventList_EPstripenp3);
  _tMc -> SetBranchAddress("EPstripenp4", &_EPstripenp4, &_bEventList_EPstripenp4);
  _tMc -> SetBranchAddress("EPstripenp5", &_EPstripenp5, &_bEventList_EPstripenp5);
  _tMc -> SetBranchAddress("EPstripenp6", &_EPstripenp6, &_bEventList_EPstripenp6);
  _tMc -> SetBranchAddress("EPstripenp7", &_EPstripenp7, &_bEventList_EPstripenp7);
  _tMc -> SetBranchAddress("EPstripenp8", &_EPstripenp8, &_bEventList_EPstripenp8);
  _tMc -> SetBranchAddress("EPstripenp9", &_EPstripenp9, &_bEventList_EPstripenp9);
  _tMc -> SetBranchAddress("EPstripenp10", &_EPstripenp10, &_bEventList_EPstripenp10);
  _tMc -> SetBranchAddress("EPstripenp11", &_EPstripenp11, &_bEventList_EPstripenp11);
  _tMc -> SetBranchAddress("EPstripenp12", &_EPstripenp12, &_bEventList_EPstripenp12);
  _tMc -> SetBranchAddress("EPstripenp13", &_EPstripenp13, &_bEventList_EPstripenp13);
  _tMc -> SetBranchAddress("EPstripenp14", &_EPstripenp14, &_bEventList_EPstripenp14);
  _tMc -> SetBranchAddress("EPstripenp15", &_EPstripenp15, &_bEventList_EPstripenp15);
  _tMc -> SetBranchAddress("EclustEnnq1", &_EclustEnnq1, &_bEventList_EclustEnnq1);
  _tMc -> SetBranchAddress("EclustEnnq20", &_EclustEnnq20, &_bEventList_EclustEnnq20);
  _tMc -> SetBranchAddress("EclustEnnq19", &_EclustEnnq19, &_bEventList_EclustEnnq19);
  _tMc -> SetBranchAddress("EclustEnpq1", &_EclustEnpq1, &_bEventList_EclustEnpq1);
  _tMc -> SetBranchAddress("EclustEnpq20", &_EclustEnpq20, &_bEventList_EclustEnpq20);
  _tMc -> SetBranchAddress("EclustEnpq19", &_EclustEnpq19, &_bEventList_EclustEnpq19);
  _tMc -> SetBranchAddress("EclustEnpq21", &_EclustEnpq21, &_bEventList_EclustEnpq21);
  _tMc -> SetBranchAddress("PrimaryTrackArray", &_PrimaryTrackArray_, &_bEventList_PrimaryTrackArray_);
  _tMc -> SetBranchAddress("PrimaryTrackArray.fUniqueID", _PrimaryTrackArray_fUniqueID, &_bPrimaryTrackArray_fUniqueID);
  _tMc -> SetBranchAddress("PrimaryTrackArray.fBits", _PrimaryTrackArray_fBits, &_bPrimaryTrackArray_fBits);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nHitsFit", _PrimaryTrackArray_nHitsFit, &_bPrimaryTrackArray_nHitsFit);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nHitsPoss", _PrimaryTrackArray_nHitsPoss, &_bPrimaryTrackArray_nHitsPoss);
  _tMc -> SetBranchAddress("PrimaryTrackArray.trackFlag", _PrimaryTrackArray_trackFlag, &_bPrimaryTrackArray_trackFlag);
  _tMc -> SetBranchAddress("PrimaryTrackArray.geantId", _PrimaryTrackArray_geantId, &_bPrimaryTrackArray_geantId);
  _tMc -> SetBranchAddress("PrimaryTrackArray.pdgId", _PrimaryTrackArray_pdgId, &_bPrimaryTrackArray_pdgId);
  _tMc -> SetBranchAddress("PrimaryTrackArray.pZ", _PrimaryTrackArray_pZ, &_bPrimaryTrackArray_pZ);
  _tMc -> SetBranchAddress("PrimaryTrackArray.pX", _PrimaryTrackArray_pX, &_bPrimaryTrackArray_pX);
  _tMc -> SetBranchAddress("PrimaryTrackArray.pY", _PrimaryTrackArray_pY, &_bPrimaryTrackArray_pY);
  _tMc -> SetBranchAddress("PrimaryTrackArray.pT", _PrimaryTrackArray_pT, &_bPrimaryTrackArray_pT);
  _tMc -> SetBranchAddress("PrimaryTrackArray.dEdx", _PrimaryTrackArray_dEdx, &_bPrimaryTrackArray_dEdx);
  _tMc -> SetBranchAddress("PrimaryTrackArray.charge", _PrimaryTrackArray_charge, &_bPrimaryTrackArray_charge);
  _tMc -> SetBranchAddress("PrimaryTrackArray.tofBeta", _PrimaryTrackArray_tofBeta, &_bPrimaryTrackArray_tofBeta);
  _tMc -> SetBranchAddress("PrimaryTrackArray.eta", _PrimaryTrackArray_eta, &_bPrimaryTrackArray_eta);
  _tMc -> SetBranchAddress("PrimaryTrackArray.phi", _PrimaryTrackArray_phi, &_bPrimaryTrackArray_phi);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nSigElectron", _PrimaryTrackArray_nSigElectron, &_bPrimaryTrackArray_nSigElectron);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nSigPion", _PrimaryTrackArray_nSigPion, &_bPrimaryTrackArray_nSigPion);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nSigKaon", _PrimaryTrackArray_nSigKaon, &_bPrimaryTrackArray_nSigKaon);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nSigProton", _PrimaryTrackArray_nSigProton, &_bPrimaryTrackArray_nSigProton);
  _tMc -> SetBranchAddress("PrimaryTrackArray.dcag", _PrimaryTrackArray_dcag, &_bPrimaryTrackArray_dcag);
  _tMc -> SetBranchAddress("PrimaryTrackArray.nHits", _PrimaryTrackArray_nHits, &_bPrimaryTrackArray_nHits);
  _tMc -> SetBranchAddress("PrimaryTrackArray.dEdxHits", _PrimaryTrackArray_dEdxHits, &_bPrimaryTrackArray_dEdxHits);
  _tMc -> SetBranchAddress("PrimaryTrackArray.firstZPoint", _PrimaryTrackArray_firstZPoint, &_bPrimaryTrackArray_firstZPoint);
  _tMc -> SetBranchAddress("PrimaryTrackArray.lastZPoint", _PrimaryTrackArray_lastZPoint, &_bPrimaryTrackArray_lastZPoint);
  _tMc -> SetBranchAddress("PrimaryTrackArray.tofSigElectron", _PrimaryTrackArray_tofSigElectron, &_bPrimaryTrackArray_tofSigElectron);
  _tMc -> SetBranchAddress("PrimaryTrackArray.tofSigPion", _PrimaryTrackArray_tofSigPion, &_bPrimaryTrackArray_tofSigPion);
  _tMc -> SetBranchAddress("PrimaryTrackArray.tofSigKaon", _PrimaryTrackArray_tofSigKaon, &_bPrimaryTrackArray_tofSigKaon);
  _tMc -> SetBranchAddress("PrimaryTrackArray.tofSigProton", _PrimaryTrackArray_tofSigProton, &_bPrimaryTrackArray_tofSigProton);
  _tMc -> SetBranchAddress("PrimaryTrackArray.timeOfflight", _PrimaryTrackArray_timeOfflight, &_bPrimaryTrackArray_timeOfflight);
  _tMc -> SetBranchAddress("PrimaryTrackArray.pathLength", _PrimaryTrackArray_pathLength, &_bPrimaryTrackArray_pathLength);
  _tMc -> SetBranchAddress("PrimaryTrackArray.trkIndex", _PrimaryTrackArray_trkIndex, &_bPrimaryTrackArray_trkIndex);
  _tMc -> SetBranchAddress("TowerArray", &_TowerArray_, &_bEventList_TowerArray_);
  _tMc -> SetBranchAddress("TowerArray.fUniqueID", _TowerArray_fUniqueID, &_bTowerArray_fUniqueID);
  _tMc -> SetBranchAddress("TowerArray.fBits", _TowerArray_fBits, &_bTowerArray_fBits);
  _tMc -> SetBranchAddress("TowerArray.TwrId", _TowerArray_TwrId, &_bTowerArray_TwrId);
  _tMc -> SetBranchAddress("TowerArray.TwrEng", _TowerArray_TwrEng, &_bTowerArray_TwrEng);
  _tMc -> SetBranchAddress("TowerArray.TwrEta", _TowerArray_TwrEta, &_bTowerArray_TwrEta);
  _tMc -> SetBranchAddress("TowerArray.TwrPhi", _TowerArray_TwrPhi, &_bTowerArray_TwrPhi);
  _tMc -> SetBranchAddress("TowerArray.TwrADC", _TowerArray_TwrADC, &_bTowerArray_TwrADC);
  _tMc -> SetBranchAddress("TowerArray.TwrMatchIdnex", _TowerArray_TwrMatchIdnex, &_bTowerArray_TwrMatchIdnex);
  _tMc -> SetBranchAddress("TowerArray.NoOfmatchedTrk", _TowerArray_NoOfmatchedTrk, &_bTowerArray_NoOfmatchedTrk);
  _tMc -> SetBranchAddress("TowerArray.TwrMatchDphi", _TowerArray_TwrMatchDphi, &_bTowerArray_TwrMatchDphi);
  _tMc -> SetBranchAddress("TowerArray.TwrMatchDEta", _TowerArray_TwrMatchDEta, &_bTowerArray_TwrMatchDEta);
  _tMc -> SetBranchAddress("TowerArray.TwrMatchP", _TowerArray_TwrMatchP, &_bTowerArray_TwrMatchP);
  _tMc -> SetBranchAddress("TowerArray.TwrMatchIndexOfTrack", _TowerArray_TwrMatchIndexOfTrack, &_bTowerArray_TwrMatchIndexOfTrack);
  _tMc -> SetBranchAddress("TowerArray.TwrPx", _TowerArray_TwrPx, &_bTowerArray_TwrPx);
  _tMc -> SetBranchAddress("TowerArray.TwrPy", _TowerArray_TwrPy, &_bTowerArray_TwrPy);
  _tMc -> SetBranchAddress("TowerArray.TwrPz", _TowerArray_TwrPz, &_bTowerArray_TwrPz);
  _tMc -> SetBranchAddress("TowerArray.fNAssocTracks", _TowerArray_fNAssocTracks, &_bTowerArray_fNAssocTracks);
  _tMc -> SetBranchAddress("TowerArray.fMatchedTracks", _TowerArray_fMatchedTracks, &_bTowerArray_fMatchedTracks);
  _tMc -> SetBranchAddress("TowerArray.fMatchedTracksArray_[10]", _TowerArray_fMatchedTracksArray_, &_bTowerArray_fMatchedTracksArray_);
  _tMc -> SetBranchAddress("TowerArray.fMatchedTracksArray_P[10]", _TowerArray_fMatchedTracksArray_P, &_bTowerArray_fMatchedTracksArray_P);
  PrintInfo(7);

}  // end 'InitializeInputTree(TTree*)'



void StMcJetTreeMaker::InitializeOutputTree(TTree *tree) {

  _fOutput -> cd();
  _tJet = new TTree("JetTree", "a tree of jets");
  _tJet -> Branch("eventIndex", &_EventIndex, "EventIndex/I");
  _tJet -> Branch("Refmult", &_Refmult, "Refmult/D");
  _tJet -> Branch("RunId", &_RunId, "RunId/I");
  _tJet -> Branch("NJets", &_NJets, "NJets/I");
  _tJet -> Branch("PartonicPt", &_PartonicPt, "PartonicPt/D");
  _tJet -> Branch("TSP", &_TSP, "TSP/D");
  _tJet -> Branch("TrgEta", &_TrgEta, "TrgEta/D");
  _tJet -> Branch("TrgPhi", &_TrgPhi, "TrgPhi/D");
  _tJet -> Branch("TrgEt", &_TrgEt, "TrgEt/D");
  _tJet -> Branch("Rho", &_Rho, "Rho/D");
  _tJet -> Branch("Sigma", &_Sigma, "Sigma/D");
  _tJet -> Branch("Vz", &_Vz, "Vz/D");
  _tJet -> Branch("JetIndex", &_JetIndex);
  _tJet -> Branch("JetNCons", &_JetNCons);
  _tJet -> Branch("JetPt", &_JetPt);
  _tJet -> Branch("JetPtCorr", &_JetPtCorr);
  _tJet -> Branch("JetEta", &_JetEta);
  _tJet -> Branch("JetPhi", &_JetPhi);
  _tJet -> Branch("JetE", &_JetE);
  _tJet -> Branch("JetArea", &_JetArea);
  _tJet -> Branch("JetConsPt", &_JetConsPt);
  _tJet -> Branch("JetConsEta", &_JetConsEta);
  _tJet -> Branch("JetConsPhi", &_JetConsPhi);
  _tJet -> Branch("JetConsE", &_JetConsE);

  // set autosave for every 500 MB
  _tJet -> SetAutoSave(-500000000);
  PrintInfo(8);

}  // end 'InitializeOutputTree(TTree*)'



void StMcJetTreeMaker::InitializeHistograms() {

  const UInt_t   nTrg = 1000000;
  const UInt_t   nTsp = 100;
  const UInt_t   nTrk = 100;
  const UInt_t   nPt  = 240;
  const UInt_t   nDf  = 720;
  const UInt_t   nH   = 200;
  const Double_t trg1 = 0.;
  const Double_t trg2 = 1000000.;
  const Double_t tsp1 = 0.;
  const Double_t tsp2 = 100.;
  const Double_t trk1 = 0.;
  const Double_t trk2 = 100.;
  const Double_t pT1  = -20.;
  const Double_t pT2  = 100.;
  const Double_t dF1  = -1. * TMath::TwoPi();
  const Double_t dF2  = TMath::TwoPi();
  const Double_t h1   = -10.;
  const Double_t h2   = 10.;
  _fOutput -> cd();
  // event QA
  _hEvtQA[0][0] = new TH1D("hNumTrgP", "No. of triggers, #pi^{0}", nTrg, trg1, trg2);
  _hEvtQA[0][1] = new TH1D("hNumTrgG", "No. of triggers, #gamma^{rich}", nTrg, trg1, trg2);
  _hEvtQA[0][2] = new TH1D("hNumTrgH", "No. of triggers, h^{#pm}", nTrg, trg1, trg2);
  _hEvtQA[1][0] = new TH1D("hTrgTspP", "Trigger TSP, #pi^{0}", nTsp, tsp1, tsp2);
  _hEvtQA[1][1] = new TH1D("hTrgTspG", "Trigger TSP, #gamma^{rich}", nTsp, tsp1, tsp2);
  _hEvtQA[1][2] = new TH1D("hTrgTspH", "Trigger TSP, h^{#pm}", nTsp, tsp1, tsp2);
  _hEvtQA[2][0] = new TH1D("hNumTrkP", "No. of primary tracks, #pi^{0}", nTrk, trk1, trk2);
  _hEvtQA[2][1] = new TH1D("hNumTrkG", "No. of primary tracks, #gamma^{rich}", nTrk, trk1, trk2);
  _hEvtQA[2][2] = new TH1D("hNumTrkH", "No. of primary tracks, h^{#pm}", nTrk, trk1, trk2);
  _hEvtQA[3][0] = new TH1D("hTrgEneP", "Trigger energy, #pi^{0}", nPt, pT1, pT2);
  _hEvtQA[3][1] = new TH1D("hTrgEneG", "Trigger energy, #gamma^{rich}", nPt, pT1, pT2);
  _hEvtQA[3][2] = new TH1D("hTrgEneH", "Trigger energy, h^{#pm}", nPt, pT1, pT2);
  // track QA
  _hTrkQA[0][0] = new TH1D("hTrkPtP", "Primary track p_{T}, #pi^{0}", nPt, pT1, pT2);
  _hTrkQA[0][1] = new TH1D("hTrkPtG", "Primary track p_{T}, #gamma^{rich}", nPt, pT1, pT2);
  _hTrkQA[0][2] = new TH1D("hTrkPtH", "Primary track p_{T}, h^{#pm}", nPt, pT1, pT2);
  _hTrkQA[1][0] = new TH1D("hTrkDfP", "Primary track #Delta#varphi, #pi^{0}", nDf, dF1, dF2);
  _hTrkQA[1][1] = new TH1D("hTrkDfG", "Primary track #Delta#varphi, #gamma^{rich}", nDf, dF1, dF2);
  _hTrkQA[1][2] = new TH1D("hTrkDfH", "Primary track #Delta#varphi, h^{#pm}", nDf, dF1, dF2);
  _hTrkQA[2][0] = new TH1D("hTrkEtaP", "Primary track #eta, #pi^{0}", nH, h1, h2);
  _hTrkQA[2][1] = new TH1D("hTrkEtaG", "Primary track #eta, #gamma^{rich}", nH, h1, h2);
  _hTrkQA[2][2] = new TH1D("hTrkEtaH", "Primary track #eta, h^{#pm}", nH, h1, h2);
  _hTrkQA[3][0] = new TH1D("hTrkEneP", "Primary track energy, #pi^{0}", nPt, pT1, pT2);
  _hTrkQA[3][1] = new TH1D("hTrkEneG", "Primary track energy, #gamma^{rich}", nPt, pT1, pT2);
  _hTrkQA[3][2] = new TH1D("hTrkEneH", "Primary track energy, h^{#pm}", nPt, pT1, pT2);
  // tower QA
  _hTwrQA[0][0] = new TH1D("hTwrPtP", "Tower p_{T}, #pi^{0}", nPt, pT1, pT2);
  _hTwrQA[0][1] = new TH1D("hTwrPtG", "Tower p_{T}, #gamma^{rich}", nPt, pT1, pT2);
  _hTwrQA[0][2] = new TH1D("hTwrPtH", "Tower p_{T}, h^{#pm}", nPt, pT1, pT2);
  _hTwrQA[1][0] = new TH1D("hTwrDfP", "Tower #Delta#varphi, #pi^{0}", nDf , dF1, dF2);
  _hTwrQA[1][1] = new TH1D("hTwrDfG", "Tower #Delta#varphi, #gamma^{rich}", nDf , dF1, dF2);
  _hTwrQA[1][2] = new TH1D("hTwrDfH", "Tower #Delta#varphi, h^{#pm}", nDf , dF1, dF2);
  _hTwrQA[2][0] = new TH1D("hTwrEtaP", "Tower #eta, #pi^{0}", nH, h1, h2);
  _hTwrQA[2][1] = new TH1D("hTwrEtaG", "Tower #eta, #gamma^{rich}", nH, h1, h2);
  _hTwrQA[2][2] = new TH1D("hTwrEtaH", "Tower #eta, h^{#pm}", nH, h1, h2);
  _hTwrQA[3][0] = new TH1D("hTwrEneP", "Tower energy, #pi^{0}", nPt, pT1, pT2);
  _hTwrQA[3][1] = new TH1D("hTwrEneG", "Tower energy, #gamma^{rich}", nPt, pT1, pT2);
  _hTwrQA[3][2] = new TH1D("hTwrEneH", "Tower energy, h^{#pm}", nPt, pT1, pT2);
  // jet QA
  _hJetQA[0][0] = new TH1D("hJetPtP", "Jet p_{T}, #pi^{0}", nPt, pT1, pT2);
  _hJetQA[0][1] = new TH1D("hJetPtG", "Jet p_{T}, #gamma^{rich}", nPt, pT1, pT2);
  _hJetQA[0][2] = new TH1D("hJetPtH", "Jet p_{T}, h^{#pm}", nPt, pT1, pT2);
  _hJetQA[1][0] = new TH1D("hJetDfP", "Jet #Delta#varphi, #pi^{0}", nDf, dF1, dF2);
  _hJetQA[1][1] = new TH1D("hJetDfG", "Jet #Delta#varphi, #gamma^{rich}", nDf, dF1, dF2);
  _hJetQA[1][2] = new TH1D("hJetDfH", "Jet #Delta#varphi, h^{#pm}", nDf, dF1, dF2);
  _hJetQA[2][0] = new TH1D("hJetEtaP", "Jet #eta, #pi^{0}", nH, h1, h2);
  _hJetQA[2][1] = new TH1D("hJetEtaG", "Jet #eta, #gamma^{rich}", nH, h1, h2);
  _hJetQA[2][2] = new TH1D("hJetEtaH", "Jet #eta, h^{#pm}", nH, h1, h2);
  _hJetQA[3][0] = new TH1D("hJetEneP", "Jet energy, #pi^{0}", nPt, pT1, pT2);
  _hJetQA[3][1] = new TH1D("hJetEneG", "Jet energy, #gamma^{rich}", nPt, pT1, pT2);
  _hJetQA[3][2] = new TH1D("hJetEneH", "Jet energy, h^{#pm}", nPt, pT1, pT2);
  // errors
  for (UInt_t iHist = 0; iHist < NHistQA; iHist++) {
    for (UInt_t iTrg = 0; iTrg < NTrgTypes; iTrg++) {
      _hEvtQA[iHist][iTrg] -> Sumw2();
      _hTrkQA[iHist][iTrg] -> Sumw2();
      _hTwrQA[iHist][iTrg] -> Sumw2();
      _hJetQA[iHist][iTrg] -> Sumw2();
    }
  }
  PrintInfo(9);

}  // end 'InitializeHistograms()'



void StMcJetTreeMaker::PrintInfo(const UInt_t code, const UInt_t nEvts, const UInt_t iEvt) {

  switch (code) {
    case 0:
      cout << "\n  Jet-tree maker created!" << endl;
      break;
    case 1:
      cout << "    Input and output set.\n"
           << "      input  -- " << _sInput.Data() << "\n"
           << "      output -- " << _sOutput.Data()
           << endl;
      break;
    case 2:
      cout << "    Event parameters set.\n"
           << "      |rVtx| < " << _rVtxMax << "\n"
           << "      |zVtx| < " << _zVtxMax
           << endl;
      break;
    case 3:
      cout << "    Trigger parameters set.\n"
           << "      |etaTrg| < " << _etaTrgMax << "\n"
           << "      eTtrg    = (" << _eTtrgMin << ", " << _eTtrgMax << ")\n"
           << "      tsp(pi0) = (" << _tspPi0Min << ", " << _tspPi0Max << ")\n"
           << "      tsp(gam) = (" << _tspGamMin << ", " << _tspGamMax << ")"
           << endl;
      break;
    case 4:
      cout << "    Track parameters set.\n"
           << "      |etaTrk| < " << _etaTrkMax << "\n"
           << "      pTtrk    = (" << _pTtrkMin << ", " << _pTtrkMax << ")"
           << endl;
      break;
    case 6:
      cout << "    Jet parameters set.\n"
           << "      jetType    = " << _jetType << "\n"
           << "      nRepeat    = " << _nRepeat << "\n"
           << "      nRemove    = " << _nRemove << "\n"
           << "      rJet       = " << _rJet << "\n"
           << "      aGhost     = " << _aGhost << "\n"
           << "      pTjet      > " << _pTjetMin << "\n"
           << "      |etaGhost| < " << _etaGhostMax << "\n"
           << "      |etaJet|   < " << _etaJetMax << "\n"
           << "      |etaBkgd|  < " << _etaBkgdMax
           << endl;
      break;
    case 7:
      cout << "    Input tree initialized." << endl;
      break;
    case 8:
      cout << "    Output tree initialized." << endl;
      break;
    case 9:
      cout << "    QA histograms initialized." << endl;
      break;
    case 10:
      cout << "    Maker initialized!" << endl;
      break;
    case 11:
      cout << "    Beginning event loop: " << nEvts << " events to process." << endl;
      break;
    case 12:
      if (_isInBatchMode)
        cout << "      processing event " << iEvt + 1 << "/" << nEvts << "..." << endl;
      else {
        cout << "      processing event " << iEvt + 1 << "/" << nEvts << "...\r" << flush;
        if ((iEvt + 1) == nEvts) cout << endl;
      }
      break;
    case 13:
      cout << "    Event loop finished." << endl;
      break;
    case 14:
      cout << "    Histograms normalized." << endl;
      break;
    case 15:
      cout << "    Directories made." << endl;
      break;
    case 16:
      cout << "  Files closed, jet making finished!\n" << endl;
      break;
  }

}  // end 'PrintInfo(UInt_t)'



Bool_t StMcJetTreeMaker::IsGoodRunID(const UInt_t runID) {

  // bad run list (pp200 run9)
  const UInt_t badRunList[NBadRun] = {10114082, 10120093, 10159043, 10166054, 10126064, 10128094, 10128102, 10131009, 10131075, 10131087, 10132004, 10135072, 10136036, 10138049, 10140005, 10140011, 10142012, 10142035, 10142093, 10144038, 10144074, 10149008, 10150005, 10151001, 10152010, 10156090, 10157015, 10157053, 10158047, 10160006, 10161006, 10161016, 10161024, 10162007, 10165027, 10165077, 10166024, 10169033, 10170011, 10170029, 10170047, 10171011, 10172054, 10172059, 10172077};

  Bool_t isGoodRun = true;
  for (UInt_t iRun = 0; iRun < NBadRun; iRun++) {
    if (runID == badRunList[iRun]) {
      isGoodRun = false;
      break;
    }
  }
  return isGoodRun;

}  // end 'IsGoodRunID(UInt_t)'



Bool_t StMcJetTreeMaker::IsGoodEvent(const Double_t rVtx, const Double_t zVtx) {

  const Bool_t isInRCut  = (abs(rVtx) < _rVtxMax);
  const Bool_t isInZCut  = (abs(zVtx) < _zVtxMax);
  const Bool_t isGoodEvt = (isInRCut && isInZCut);
  return isGoodEvt;

}  // end 'IsGoodEvent(Double_t, Double_t)'



Bool_t StMcJetTreeMaker::IsGoodTrigger(const Double_t etaTrg, const Double_t eTtrg, const UInt_t idTrg) {

  const Bool_t isInEtaCut = (abs(etaTrg) < _etaTrgMax);
  const Bool_t isInEtCut  = ((eTtrg > _eTtrgMin) && (eTtrg < _eTtrgMax));
  const Bool_t isPi0      = IsPi0(idTrg);
  const Bool_t isGam      = IsGamma(idTrg);;
  const Bool_t isHad      = IsHadron(idTrg);
  const Bool_t isInIdCut  = (isPi0 || isGam || isHad);
  const Bool_t isGoodTrg  = (isInEtaCut && isInEtCut && isInIdCut);
  return isGoodTrg;

}  // end 'IsGoodTrigger(Double_t, Double_t, UInt_t)'



Bool_t StMcJetTreeMaker::IsGoodTrack(const Double_t etaTrk, const Double_t pTtrk) {

  const Bool_t isInEtaCut = (abs(etaTrk) < _etaTrkMax);
  const Bool_t isInPtCut  = ((pTtrk > _pTtrkMin) && (pTtrk < _pTtrkMax));
  const Bool_t isGoodTrk  = (isInEtaCut && isInPtCut);
  return isGoodTrk;

}  // end 'IsGoodTrack(Double_t, Double_t)'



Bool_t StMcJetTreeMaker::IsPi0(const UInt_t idGnt) {

  const Bool_t isPi0 = (idGnt == IdPi0);
  return isPi0;

}  // end 'IsPi0(UInt_t)'



Bool_t StMcJetTreeMaker::IsGamma(const UInt_t idGnt) {

  const Bool_t isGam = (idGnt == IdGamma);
  return isGam;

}  // end 'IsGamma(UInt_t)'



Bool_t StMcJetTreeMaker::IsHadron(const UInt_t idGnt) {

  // consider only charged hadrons
  const UInt_t idHad[NHadIds] = {8, 9, 11, 12, 14, 15, 19, 21, 23, 24, 27, 29, 31, 32, 45, 46};

  // check ID
  Bool_t isHad(false);
  for (UInt_t iHad = 0; iHad < NHadIds; iHad++) {
    if (idGnt == idHad[iHad]) {
      isHad = true;
      break;
    }
  }
  return isHad;

}  // end 'IsHadron(UInt_t)'



Long64_t StMcJetTreeMaker::LoadTree(const Long64_t entry) {

  // set the environment to read one entry
  Int_t    fTree;
  Long64_t bytes;
  if (!_tMc)
    bytes = -5;
  else {
    bytes = _tMc -> LoadTree(entry);
    fTree = _tMc -> GetTreeNumber();
    if ((bytes >= 0) && (fTree != _fCurrent))
      _fCurrent = _tMc -> GetTreeNumber();
  }
  return bytes;

}  // end 'LoadTree(Long64_t)'



Long64_t StMcJetTreeMaker::GetEntry(const Long64_t entry) {

  Int_t bytes;
  if (!_tMc)
    bytes = 0;
  else
    bytes = _tMc -> GetEntry(entry);
  return bytes;

}  // end 'GetEntry(Long64_t)'

// End ------------------------------------------------------------------------

