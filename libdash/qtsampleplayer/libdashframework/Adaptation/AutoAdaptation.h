/*
 * ManualAdaptation.h
 *****************************************************************************
 * Copyright (C) 2013, bitmovin Softwareentwicklung OG, All Rights Reserved
 *
 * Email: libdash-dev@vicky.bitmovin.net
 *
 * This source code and its use and distribution, is subject to the terms
 * and conditions of the applicable license agreement.
 *****************************************************************************/

#ifndef LIBDASH_FRAMEWORK_ADAPTATION_AUTOADAPTATION_H_
#define LIBDASH_FRAMEWORK_ADAPTATION_AUTOADAPTATION_H_

#include "AbstractAdaptationLogic.h"
#include "../MPD/AdaptationSetStream.h"

namespace libdash
{
    namespace framework
    {
        namespace adaptation
        {
            class AutoAdaptation : public AbstractAdaptationLogic
            {
                public:
                    AutoAdaptation            (sampleplayer::managers::StreamType type, dash::mpd::IMPD *mpd, dash::mpd::IPeriod *period, dash::mpd::IAdaptationSet *adaptationSet);
                    virtual ~AutoAdaptation   ();

                    virtual LogicType               GetType             ();
                    virtual double                  EstimateBandwidth   (std::vector<double> &bandwidthVector);
                    virtual void                    DoLogic             ();

            };
        }
    }
}

#endif /* LIBDASH_FRAMEWORK_ADAPTATION_AUTOADAPTATION_H_ */
