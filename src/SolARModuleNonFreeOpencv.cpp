/**
 * @copyright Copyright (c) 2015 All Right Reserved, B-com http://www.b-com.com/
 *
 * This file is subject to the B<>Com License.
 * All other rights reserved.
 *
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 */

#include <iostream>

#include "ContainerFactory.h"

#include "SolARDescriptorsExtractorSIFTOpencv.h"
#include "SolARDescriptorsExtractorSURF128Opencv.h"
#include "SolARDescriptorsExtractorSURF64Opencv.h"
#include "SolARKeypointDetectorNonFreeOpencv.h"


namespace xpcf=org::bcom::xpcf;
//"15e1990b-86b2-445c-8194-0cbe80ede970"
XPCF_DECLARE_CONTAINER("2bce6a98-2ad7-4cd5-bd63-b3ee68fb59c0", "SolARModuleNonFreeOpenCV")

extern "C" XPCF_EXPORT_API void XPCF_getComponent(const boost::uuids::uuid& componentUUID,SRef<xpcf::IComponentIntrospect>& interfaceRef)
{

    boost::uuids::uuid uuidOf_XPCF_CID_SolARDescriptorsExtractorSIFTOpencv = xpcf::toUUID(SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSIFTOpencv::UUID );
    boost::uuids::uuid uuidOf_XPCF_CID_SolARDescriptorsExtractorSURF128Opencv = xpcf::toUUID(SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSURF128Opencv::UUID );
    boost::uuids::uuid uuidOf_XPCF_CID_SolARDescriptorsExtractorSURF64Opencv = xpcf::toUUID(SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSURF64Opencv::UUID );
    boost::uuids::uuid uuidOf_XPCF_CID_SolARKeypointDetectorNonFreeOpencv = xpcf::toUUID(SolAR::MODULES::NONFREEOPENCV::SolARKeypointDetectorNonFreeOpencv::UUID );

  
    if (componentUUID==uuidOf_XPCF_CID_SolARDescriptorsExtractorSIFTOpencv)
    {
        xpcf::ComponentFactory::createComponent<SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSIFTOpencv>(interfaceRef);
    }
    else if (componentUUID==uuidOf_XPCF_CID_SolARDescriptorsExtractorSURF128Opencv)
    {
        xpcf::ComponentFactory::createComponent<SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSURF128Opencv>(interfaceRef);
    }
    else if (componentUUID==uuidOf_XPCF_CID_SolARDescriptorsExtractorSURF64Opencv)
    {
        xpcf::ComponentFactory::createComponent<SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSURF64Opencv>(interfaceRef);
    }
    else if (componentUUID==uuidOf_XPCF_CID_SolARKeypointDetectorNonFreeOpencv)
    {
        xpcf::ComponentFactory::createComponent<SolAR::MODULES::NONFREEOPENCV::SolARKeypointDetectorNonFreeOpencv>(interfaceRef);
    }
}

XPCF_BEGIN_COMPONENTS_DECLARATION

XPCF_ADD_COMPONENT(SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSIFTOpencv::UUID,"Component SolARDescriptorsExtractorSIFTOpencv")
XPCF_ADD_COMPONENT(SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSURF128Opencv::UUID,"Component SolARDescriptorsExtractorSURF128Opencv")
XPCF_ADD_COMPONENT(SolAR::MODULES::NONFREEOPENCV::SolARDescriptorsExtractorSURF64Opencv::UUID,"Component SolARDescriptorsExtractorSURF64Opencv")
XPCF_ADD_COMPONENT(SolAR::MODULES::NONFREEOPENCV::SolARKeypointDetectorNonFreeOpencv::UUID,"Component SolARKeypointDetectorNonFreeOpencv")

XPCF_END_COMPONENTS_DECLARATION
