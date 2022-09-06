/**************************************************************************************************
 *
 * Copyright (C)
 *
 *************************************************************************************************/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "dataLogger_Config.h"
#include "dataLogger_UserPort.h"
#include "dataLogger_UT.h"
#include "dataLogger_UT_TC.h"
/*******************************************************************************
 * This file to test functions
 ******************************************************************************/
/*******************************************************************************
 * Variables
 ******************************************************************************/
/*******************************************************************************
 * Prototypes
 ******************************************************************************/
void DL_UT_001_Init_Empty_Str8(void)
{
    DL_UT_001_Init_Empty(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_001_Init_Empty_Str9(void)
{
    DL_UT_001_Init_Empty(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_001_Init_Empty_Str10(void)
{
    DL_UT_001_Init_Empty(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_001_Init_Empty_Str11(void)
{
    DL_UT_001_Init_Empty(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_002_Init_Sector0HasData_Sector1Empty_Str8(void)
{
    DL_UT_002_Init_Sector0HasData_Sector1Empty(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_002_Init_Sector0HasData_Sector1Empty_Str9(void)
{
    DL_UT_002_Init_Sector0HasData_Sector1Empty(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_002_Init_Sector0HasData_Sector1Empty_Str10(void)
{
    DL_UT_002_Init_Sector0HasData_Sector1Empty(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_002_Init_Sector0HasData_Sector1Empty_Str11(void)
{
    DL_UT_002_Init_Sector0HasData_Sector1Empty(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_003_Init_Sector0Full_Sector1Empty_Str8(void)
{
    DL_UT_003_Init_Sector0Full_Sector1Empty(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_003_Init_Sector0Full_Sector1Empty_Str9(void)
{
    DL_UT_003_Init_Sector0Full_Sector1Empty(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_003_Init_Sector0Full_Sector1Empty_Str10(void)
{
    DL_UT_003_Init_Sector0Full_Sector1Empty(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_003_Init_Sector0Full_Sector1Empty_Str11(void)
{
    DL_UT_003_Init_Sector0Full_Sector1Empty(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_004_Init_Sector0Full_Sector1HasData_Str8(void)
{
    DL_UT_004_Init_Sector0Full_Sector1HasData(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_004_Init_Sector0Full_Sector1HasData_Str9(void)
{
    DL_UT_004_Init_Sector0Full_Sector1HasData(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_004_Init_Sector0Full_Sector1HasData_Str10(void)
{
    DL_UT_004_Init_Sector0Full_Sector1HasData(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_004_Init_Sector0Full_Sector1HasData_Str11(void)
{
    DL_UT_004_Init_Sector0Full_Sector1HasData(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_005_Init_Sector1Full_Sector0Empty_Str8(void)
{
    DL_UT_005_Init_Sector1Full_Sector0Empty(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_005_Init_Sector1Full_Sector0Empty_Str9(void)
{
    DL_UT_005_Init_Sector1Full_Sector0Empty(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_005_Init_Sector1Full_Sector0Empty_Str10(void)
{
    DL_UT_005_Init_Sector1Full_Sector0Empty(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_005_Init_Sector1Full_Sector0Empty_Str11(void)
{
    DL_UT_005_Init_Sector1Full_Sector0Empty(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_006_Init_Sector1Full_Sector0HasData_Str8(void)
{
    DL_UT_006_Init_Sector1Full_Sector0HasData(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_006_Init_Sector1Full_Sector0HasData_Str9(void)
{
    DL_UT_006_Init_Sector1Full_Sector0HasData(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_006_Init_Sector1Full_Sector0HasData_Str10(void)
{
    DL_UT_006_Init_Sector1Full_Sector0HasData(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_006_Init_Sector1Full_Sector0HasData_Str11(void)
{
    DL_UT_006_Init_Sector1Full_Sector0HasData(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_007_Init_GetLogRing_CRC_fail_Head_Str8(void)
{
    DL_UT_007_Init_GetLogRing_CRC_fail_Head(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_007_Init_GetLogRing_CRC_fail_Head_Str9(void)
{
    DL_UT_007_Init_GetLogRing_CRC_fail_Head(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_007_Init_GetLogRing_CRC_fail_Head_Str10(void)
{
    DL_UT_007_Init_GetLogRing_CRC_fail_Head(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_007_Init_GetLogRing_CRC_fail_Head_Str11(void)
{
    DL_UT_007_Init_GetLogRing_CRC_fail_Head(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_008_Init_GetLogRing_CRC_fail_Mid_Str8(void)
{
    DL_UT_008_Init_GetLogRing_CRC_fail_Mid(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_008_Init_GetLogRing_CRC_fail_Mid_Str9(void)
{
    DL_UT_008_Init_GetLogRing_CRC_fail_Mid(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_008_Init_GetLogRing_CRC_fail_Mid_Str10(void)
{
    DL_UT_008_Init_GetLogRing_CRC_fail_Mid(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_008_Init_GetLogRing_CRC_fail_Mid_Str11(void)
{
    DL_UT_008_Init_GetLogRing_CRC_fail_Mid(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_009_Init_GetLogRing_CRC_fail_Tail_Str8(void)
{
    DL_UT_009_Init_GetLogRing_CRC_fail_Tail(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_009_Init_GetLogRing_CRC_fail_Tail_Str9(void)
{
    DL_UT_009_Init_GetLogRing_CRC_fail_Tail(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_009_Init_GetLogRing_CRC_fail_Tail_Str10(void)
{
    DL_UT_009_Init_GetLogRing_CRC_fail_Tail(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_009_Init_GetLogRing_CRC_fail_Tail_Str11(void)
{
    DL_UT_009_Init_GetLogRing_CRC_fail_Tail(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_010_Save_1Record_Success_Str8(void)
{
    DL_UT_010_Save_1Record_Success(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_010_Save_1Record_Success_Str9(void)
{
    DL_UT_010_Save_1Record_Success(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_010_Save_1Record_Success_Str10(void)
{
    DL_UT_010_Save_1Record_Success(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_010_Save_1Record_Success_Str11(void)
{
    DL_UT_010_Save_1Record_Success(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_011_Save_1Record_Fail_Str8(void)
{
    DL_UT_011_Save_1Record_Fail(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_011_Save_1Record_Fail_Str9(void)
{
    DL_UT_011_Save_1Record_Fail(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_011_Save_1Record_Fail_Str10(void)
{
    DL_UT_011_Save_1Record_Fail(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_011_Save_1Record_Fail_Str11(void)
{
    DL_UT_011_Save_1Record_Fail(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_012_Save_Full_1Sector_Str8(void)
{
    DL_UT_012_Save_Full_1Sector(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_012_Save_Full_1Sector_Str9(void)
{
    DL_UT_012_Save_Full_1Sector(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_012_Save_Full_1Sector_Str10(void)
{
    DL_UT_012_Save_Full_1Sector(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_012_Save_Full_1Sector_Str11(void)
{
    DL_UT_012_Save_Full_1Sector(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_013_Save_Full_2Sector_Str8(void)
{
    DL_UT_013_Save_Full_2Sector(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_013_Save_Full_2Sector_Str9(void)
{
    DL_UT_013_Save_Full_2Sector(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_013_Save_Full_2Sector_Str10(void)
{
    DL_UT_013_Save_Full_2Sector(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_013_Save_Full_2Sector_Str11(void)
{
    DL_UT_013_Save_Full_2Sector(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_014_Save_Full_3Sector_Str8(void)
{
    DL_UT_014_Save_Full_3Sector(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_014_Save_Full_3Sector_Str9(void)
{
    DL_UT_014_Save_Full_3Sector(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_014_Save_Full_3Sector_Str10(void)
{
    DL_UT_014_Save_Full_3Sector(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_014_Save_Full_3Sector_Str11(void)
{
    DL_UT_014_Save_Full_3Sector(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_015_Save_Full_4Sector_Str8(void)
{
    DL_UT_015_Save_Full_4Sector(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_015_Save_Full_4Sector_Str9(void)
{
    DL_UT_015_Save_Full_4Sector(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_015_Save_Full_4Sector_Str10(void)
{
    DL_UT_015_Save_Full_4Sector(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_015_Save_Full_4Sector_Str11(void)
{
    DL_UT_015_Save_Full_4Sector(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_016_Get_Empty_Str8(void)
{
    DL_UT_016_Get_Empty(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_016_Get_Empty_Str9(void)
{
    DL_UT_016_Get_Empty(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_016_Get_Empty_Str10(void)
{
    DL_UT_016_Get_Empty(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_016_Get_Empty_Str11(void)
{
    DL_UT_016_Get_Empty(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_017_Get_Has1Record_Str8(void)
{
    DL_UT_017_Get_Has1Record(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_017_Get_Has1Record_Str9(void)
{
    DL_UT_017_Get_Has1Record(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_017_Get_Has1Record_Str10(void)
{
    DL_UT_017_Get_Has1Record(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_017_Get_Has1Record_Str11(void)
{
    DL_UT_017_Get_Has1Record(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_018_Get_HasNRecord_Str8(void)
{
    DL_UT_018_Get_HasNRecord(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_018_Get_HasNRecord_Str9(void)
{
    DL_UT_018_Get_HasNRecord(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_018_Get_HasNRecord_Str10(void)
{
    DL_UT_018_Get_HasNRecord(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_018_Get_HasNRecord_Str11(void)
{
    DL_UT_018_Get_HasNRecord(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_019_Get_HarNRecord_failCRC_Str8(void)
{
    DL_UT_019_Get_HarNRecord_failCRC(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_019_Get_HarNRecord_failCRC_Str9(void)
{
    DL_UT_019_Get_HarNRecord_failCRC(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_019_Get_HarNRecord_failCRC_Str10(void)
{
    DL_UT_019_Get_HarNRecord_failCRC(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_019_Get_HarNRecord_failCRC_Str11(void)
{
    DL_UT_019_Get_HarNRecord_failCRC(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_020_Pop_Empty_Str8(void)
{
    DL_UT_020_Pop_Empty(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_020_Pop_Empty_Str9(void)
{
    DL_UT_020_Pop_Empty(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_020_Pop_Empty_Str10(void)
{
    DL_UT_020_Pop_Empty(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_020_Pop_Empty_Str11(void)
{
    DL_UT_020_Pop_Empty(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_021_Pop_Has1Record_Str8(void)
{
    DL_UT_021_Pop_Has1Record(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_021_Pop_Has1Record_Str9(void)
{
    DL_UT_021_Pop_Has1Record(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_021_Pop_Has1Record_Str10(void)
{
    DL_UT_021_Pop_Has1Record(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_021_Pop_Has1Record_Str11(void)
{
    DL_UT_021_Pop_Has1Record(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_022_Pop_HasNRecord_Str8(void)
{
    DL_UT_022_Pop_HasNRecord(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_022_Pop_HasNRecord_Str9(void)
{
    DL_UT_022_Pop_HasNRecord(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_022_Pop_HasNRecord_Str10(void)
{
    DL_UT_022_Pop_HasNRecord(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_022_Pop_HasNRecord_Str11(void)
{
    DL_UT_022_Pop_HasNRecord(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_023_Pop_HarNRecord_failCRC_Str8(void)
{
    DL_UT_023_Pop_HarNRecord_failCRC(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_023_Pop_HarNRecord_failCRC_Str9(void)
{
    DL_UT_023_Pop_HarNRecord_failCRC(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_023_Pop_HarNRecord_failCRC_Str10(void)
{
    DL_UT_023_Pop_HarNRecord_failCRC(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_023_Pop_HarNRecord_failCRC_Str11(void)
{
    DL_UT_023_Pop_HarNRecord_failCRC(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_024_GetLatest_NoData_Str8(void)
{
    DL_UT_024_GetLatest_NoData(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_024_GetLatest_NoData_Str9(void)
{
    DL_UT_024_GetLatest_NoData(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_024_GetLatest_NoData_Str10(void)
{
    DL_UT_024_GetLatest_NoData(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_024_GetLatest_NoData_Str11(void)
{
    DL_UT_024_GetLatest_NoData(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_025_GetLatest_1Record_Str8(void)
{
    DL_UT_025_GetLatest_1Record(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_025_GetLatest_1Record_Str9(void)
{
    DL_UT_025_GetLatest_1Record(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_025_GetLatest_1Record_Str10(void)
{
    DL_UT_025_GetLatest_1Record(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_025_GetLatest_1Record_Str11(void)
{
    DL_UT_025_GetLatest_1Record(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_026_GetLatest_Success_Str8(void)
{
    DL_UT_026_GetLatest_Success(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_026_GetLatest_Success_Str9(void)
{
    DL_UT_026_GetLatest_Success(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_026_GetLatest_Success_Str10(void)
{
    DL_UT_026_GetLatest_Success(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_026_GetLatest_Success_Str11(void)
{
    DL_UT_026_GetLatest_Success(DATA_LOG_TYPE_11BYTE);
}
void DL_UT_027_GetLatest_Fail2CRC_Str8(void)
{
    DL_UT_027_GetLatest_Fail2CRC(DATA_LOG_TYPE_8BYTE);
}
void DL_UT_027_GetLatest_Fail2CRC_Str9(void)
{
    DL_UT_027_GetLatest_Fail2CRC(DATA_LOG_TYPE_9BYTE);
}
void DL_UT_027_GetLatest_Fail2CRC_Str10(void)
{
    DL_UT_027_GetLatest_Fail2CRC(DATA_LOG_TYPE_10BYTE);
}
void DL_UT_027_GetLatest_Fail2CRC_Str11(void)
{
    DL_UT_027_GetLatest_Fail2CRC(DATA_LOG_TYPE_11BYTE);
}
