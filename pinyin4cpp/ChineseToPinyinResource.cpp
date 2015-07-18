/*
 * Copyright 2015 handsomezhou & Li Min
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ChineseToPinyinResource.h"
#include "ResourceHelper.h"

ChineseToPinyinResource* ChineseToPinyinResource::instance=NULL;

/**
* Private constructor as part of the singleton pattern.
*/
ChineseToPinyinResource::ChineseToPinyinResource()
{
    //private constructor
    this->initializeResource();
}

ChineseToPinyinResource::~ChineseToPinyinResource()
{
    if(NULL!=ChineseToPinyinResource::instance){
        delete ChineseToPinyinResource::instance;
    }
}

void ChineseToPinyinResource::initializeResource()
{
    ResourceHelper::loadProperties(TEXT_FILE_RESOURCE_PATH);
}

ChineseToPinyinResource* ChineseToPinyinResource::getInstance()
{
    if(NULL==ChineseToPinyinResource::instance){
        ChineseToPinyinResource::instance=new ChineseToPinyinResource();
    }

    return ChineseToPinyinResource::instance;
}

void ChineseToPinyinResource::getHanyuPinyinStringArray(QChar ch, QList<QString> *pinyinList)
{

}
