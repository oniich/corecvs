/**
 * \file parametersMapperEgomotion.cpp
 * \attention This file is automatically generated and should not be in general modifed manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "parametersMapperEgomotion.h"

ParametersMapperEgomotion::ParametersMapperEgomotion() :
    mBaseParametersControlWidget(NULL)
  , mEgomotionParametersControlWidget(NULL)
  , mPresentationParametersControlWidget(NULL)
{
    qRegisterMetaType<QSharedPointer<BaseParameters> >("QSharedPointer<BaseParameters>");
    qRegisterMetaType<QSharedPointer<EgomotionParameters> >("QSharedPointer<EgomotionParameters>");
    qRegisterMetaType<QSharedPointer<PresentationParameters> >("QSharedPointer<PresentationParameters>");
}

void ParametersMapperEgomotion::setBaseParametersControlWidget(BaseParametersControlWidget *widget)
{
    mBaseParametersControlWidget = widget;
    QObject::connect(mBaseParametersControlWidget, SIGNAL(paramsChanged()), this, SLOT(paramsChanged()));
}

void ParametersMapperEgomotion::setEgomotionParametersControlWidget(EgomotionParametersControlWidget *widget)
{
    mEgomotionParametersControlWidget = widget;
    QObject::connect(mEgomotionParametersControlWidget, SIGNAL(paramsChanged()), this, SLOT(paramsChanged()));
}

void ParametersMapperEgomotion::setPresentationParametersControlWidget(PresentationParametersControlWidget *widget)
{
    mPresentationParametersControlWidget = widget;
    QObject::connect(mPresentationParametersControlWidget, SIGNAL(paramsChanged()), this, SLOT(paramsChanged()));
}

void ParametersMapperEgomotion::paramsChanged()
{
    if (mBaseParametersControlWidget == NULL)
    {
          std::cout << "One of the fields for ParametersMapperEgomotion \n"
               "is still NULL but the mapper is already in use. This will cause crash.\n"
               "You should modify your <HostWidget>::createCalculator() function" << std::endl;
    }
    emit baseParametersParamsChanged(QSharedPointer<BaseParameters>(mBaseParametersControlWidget->createParameters()));


    if (mEgomotionParametersControlWidget == NULL)
    {
          std::cout << "One of the fields for ParametersMapperEgomotion \n"
               "is still NULL but the mapper is already in use. This will cause crash.\n"
               "You should modify your <HostWidget>::createCalculator() function" << std::endl;
    }
    emit egomotionParametersParamsChanged(QSharedPointer<EgomotionParameters>(mEgomotionParametersControlWidget->createParameters()));


    if (mPresentationParametersControlWidget == NULL)
    {
          std::cout << "One of the fields for ParametersMapperEgomotion \n"
               "is still NULL but the mapper is already in use. This will cause crash.\n"
               "You should modify your <HostWidget>::createCalculator() function" << std::endl;
    }
    emit presentationParametersParamsChanged(QSharedPointer<PresentationParameters>(mPresentationParametersControlWidget->createParameters()));


}
