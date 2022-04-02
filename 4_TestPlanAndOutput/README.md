## TEST PLAN:
#### Table no: Low level test plan
     - For each ID of LLR there are 5 test cases.

        
  | Test ID   | ID of LLR       | Description                          | Exp I/P   | Exp O/P        | Actual Output              | 
  | :-------- | :---------------| :-----------------------------       | :-------- | :--------------| :--------------------------|
  |   L_01    | Addition        | Adition of two numbers 10,20         |  10,20    |    30.000000   |      30.000000             |
  |   L_02    | Addition        | Adition of two numbers 10,-20        |  10,-20   |   -10.000000   |    -10..000000             |
  |   L_03    | Addition        | Adition of two numbers -10,-20       |  -10,-20  |   -30.000000   |     -30.000000             |
  |   L_04    | Addition        | Adition of two numbers 110,20        |  110,20   |    130.000000  |      130.000000            |
  |   L_05    | Addition        | Adition of two numbers 14,20         |  14,20    |    44.000000   |      44.000000             |
  |   L_06    | Substraction    | Substraction of two numbers 0,3      |  0,3      |    -3.000000   |      -3.000000             |
  |   L_07    | Substraction    | Substraction of two numbers 4,2      |  4,2      |    2.000000    |       2.000000             |
  |   L_08    | Substraction    | Substraction of two numbers 30,20    |  30,20    |   10.000000    |     10.000000              |
  |   L_09    | Substraction    | Substraction of two numbers 10,5     |  10,5     |   5.000000     |      5.000000              |
  |   L_10    | Substraction    | Substraction of two numbers 100,10   |  100,10   |   90.000000    |      90.000000             |
  |   L_11    | Mutliplication  | Mutliplication of two numbers 3,5    |  3,5      |   15.000000    |      15.000000             |
  |   L_12    | Mutliplication  | Mutliplication of two numbers 10,10  |  10,10    |   100.000000   |      100.000000            |
  |   L_13    | Mutliplication  | Mutliplication of two numbers 1,1    |  1,1      |   1.000000     |        1.000000            |
  |   L_14    | Mutliplication  | Mutliplication of two numbers 0,0    |  0,0      |    0.000000    |       0.000000             |
  |   L_15    | Mutliplication  | Mutliplication of two numbers 2,6    |  2,6      |  12.000000     |      12.000000             |
  |   L_16    | Division        | Division of two numbers 10,2         |  10,2     |  5.000000      |      5.000000              |
  |   L_17    | Division        | Division of two numbers 6,2          |  6,2      |  3.000000      |      3.000000              |
  |   L_18    | Division        | Division of two numbers 36,6         |  36,6     |  6.000000      |       6.000000             |
  |   L_19    | Division        | Division of two numbers 100,10       |  100,10   |  10.000000     |      12.000000             |
  |   L_20    | Division        | Division of two numbers 1,0          | 1,0       |  NULL          | Enter proper operands!     |
  |   L_21    | Sine            | Sine value of 0                      |  0        |  0.000000      |      0.000000              |
  |   L_22    | Sine            | Sine value of 30                     | 30        |  0.500000      |      0.500000              |
  |   L_23    | Sine            | Sine value of 45                     |  45       |  0.707107      |      0.707107              |
  |   L_24    | Sine            | Sine value of 60                     |  60       |  0.866025      |      0.866025              |
  |   L_25    | Sine            | Sine value of 90                     |  90       |  1.000000      |      1.000000              |
  |   L_26    | Cosine          | Cosine value of 0                    |  0        |  1.000000      |      1.000000              |
  |   L_27    | Cosine          | Cosine value of 30                   |  30       |  0.866025      |      0.866025              |
  |   L_28    | Cosine          | Cosine value of 45                   |  45       |  0.707107      |       0.70710              |
  |   L_29    | Cosine          | Cosine value of 60                   |  60       |  0.500000      |      0.500000              |
  |   L_30    | Cosine          | Cosine value of 90                   |  90       |  0.000000      |      0.000000              |
  |   L_31    | Tangent         | Tangent value of 0                   |  0        |  0.000000      |      0.000000              |
  |   L_32    | Tangent         | Tangent value of 30                  |  30       |  0.577350      |      0.577350              |
  |   L_33    | Tangent         | Tangent value of 45                  |  45       |  1.000000      |      1.000000              |
  |   L_34    | Tangent         | Tangent value of 60                  |  60       |  1.732051      |      1.732051              |
  |   L_35    | Tangent         | Tangent value of 90                  |  90       | NULL(Infinite) | 557135104.000000           |
  |   L_36    | Cosecant        | Cosecant  value of 0                 |  0        |  NULL          |     inf                    |
  |   L_37    | Cosecant        | Cosecant  value of 30                |  30       |  2.000000      |      2.000000              |
  |   L_38    | Cosecant        | Cosecant  value of 45                |  45       |  1.414214      |      1.414214              |
  |   L_39    | Cosecant        | Cosecant  value of 60                |  60       |  1.154701      |      1.154701              |
  |   L_40    | Cosecant        | Cosecant  value of 90                |  90       |  1.000000      |      1.000000              |
  |   L_41    | Secant          | Secant  value of 0                   |  0        |  12.000000     |      12.000000             |
  |   L_42    | Secant          | Secant  value of 30                  |  30       | 1.154701       |      1.154701              |
  |   L_43    | Secant          | Secant  value of 45                  |  45       |  1.414214      |      1.414214              |
  |   L_44    | Secant          | Secant  value of 60                  |  60       |  2.000000      |      2.000000              |
  |   L_45    | Secant          | Secant  value of 90                  |  90       | NULL(Infinite) |      557135104.000000      |
  |   L_41    | Cotangent       | Cotangent  value of 0                |  0        | NULL(Infinite) |      inf                   |
  |   L_42    | Cotangent       | Cotangent value of 30                |  30       |  1.732051      |      1.732051              |
  |   L_43    | Cotangent       | Cotangent  value of 45               |  45       |  1.000000      |      1.000000              |
  |   L_44    | Cotangent       | Cotangent  value of 60               |  60       |  0.577350      |      0.577350              |
  |   L_45    | Cotangent       | Cotangent  value of 90               |  90       |  0.000000      |      0.000000              |
 
 
 
 
 
 
 
 
 
