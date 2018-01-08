/*
 * ManualAdaptation.cpp
 *****************************************************************************
 * Copyright (C) 2013, bitmovin Softwareentwicklung OG, All Rights Reserved
 *
 * Email: libdash-dev@vicky.bitmovin.net
 *
 * This source code and its use and distribution, is subject to the terms
 * and conditions of the applicable license agreement.
 *****************************************************************************/

#include "AutoAdaptation.h"

using namespace dash::mpd;
using namespace libdash::framework::adaptation;
using namespace libdash::framework::input;
using namespace libdash::framework::mpd;

AutoAdaptation::AutoAdaptation              (sampleplayer::managers::StreamType type, IMPD *mpd, IPeriod *period, IAdaptationSet *adaptationSet) :
                  AbstractAdaptationLogic   (type, mpd, period, adaptationSet)
{
}
AutoAdaptation::~AutoAdaptation         ()
{
}

LogicType       AutoAdaptation::GetType                ()
{
    return adaptation::Manual;
}
double          AutoAdaptation::EstimateBandwidth      (std::vector<double> &bandwidthVector)
{
    this->estimateBandwidth = bandwidthVector.back();
    return this->estimateBandwidth;
}
void            AutoAdaptation::DoLogic                ()
{
    // add logic here.
//    this->adaptationSet     = this->AdaptationSets.at(0);
//    this->Representations   = this->adaptationSet->GetRepresentation();
//    this->representation    = this->Representations.at(0);
}
