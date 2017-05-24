#include "deposit.h"
#include "ctest.h"
 
 CTEST(PenaltyTest, penaltyTenPercent)
 {
     const int result = Count(10,20,0);
     const int expected = 18.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CountTests, Date100Amount60)
 {
     const int result = Count(100,60,0);
     const int expected = 61.200001;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CountTests, Date150Amount200)
 {
     const int result = Count(150,200,0);
     const int expected = 216.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CountTests, Date90Amount300)
 {
     const int result = Count(90,300,0);
     const int expected = 309.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 
 CTEST(CountTests, Date300Amount210)
 {
     const int result = Count(300,210,0);
     const int expected = 241.500000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CountTests, Date60Amount60)
 {
     const int result = Count(60,60,0);
     const int expected = 61.200001;
     ASSERT_EQUAL(expected, result);
 }
/*CTEST(Test_Faild, Failtest01)
{
  const int result = Count(317,137,0);
  const int expected =0;
  ASSERT_EQUAL(expected, result);
}*/
