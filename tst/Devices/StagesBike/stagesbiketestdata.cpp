#include "stagesbiketestdata.h"

void StagesBikeTestData::configureExclusions() {
    this->exclude(new FTMSBike1TestData());
    this->exclude(new FTMSBike2TestData());
}