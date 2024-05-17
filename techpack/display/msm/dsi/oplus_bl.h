/***************************************************************
** Copyright (C),  2020,  OPLUS Mobile Comm Corp.,  Ltd
** OPLUS_BUG_STABILITY
** File : oplus_bl.h
** Description : oplus display backlight
** Version : 1.0
** Date : 2020/10/23
**
** ------------------------------- Revision History: -----------
**  <author>        <data>        <version >        <desc>
**   LiPing-M          2020/10/23        1.0           Build this moudle
******************************************************************/

#ifndef __OPLUS_BL_H__
#define __OPLUS_BL_H__

#define PANEL_MAX_NOMAL_BRIGHTNESS 2047

#define HBM_ENTER_LEVEL  2398
#define HBM_BASE_LEVEL 351
#define HBM_BASE_600NIT 2749
#define HBM_BASE_800NIT 4095

static int backlight_buf[] = {
	0,  1,  2,  3,  4,  5,  6,  6,  7,  8, 9, 10, 11, 11, 12, 13, 14, 15, 16, 16, 17, 18, 19, 20, 21, 21, 22, 23, 24, 25, 26, 26, 27, 28, 29, 30, \
	30, 31, 32, 33, 34, 35, 35, 36, 37, 38, 39, 40, 40, 41, 42, 43, 44, 45, 45, 46, 47, 48, 49, 50, 50, 51, 52, 53, 54, 54, 55, 56, 57, 58, 59, 59, \
	60, 61, 62, 63, 64, 64, 65, 66, 67, 68, 69, 69, 70, 71, 72, 73, 74, 74, 75, 76, 77, 78, 78, 79, 80, 81, 82, 83, 83, 84, 85, 86, 87, 88, 88, 89, \
	90, 91, 92, 93, 93, 94, 95, 96, 97, 98, 98, 99, 100, 101, 102, 102, 103, 104, 105, 106, 107, 107, 108, 109, 110, 111, 112, 112, 113, 114, 115, \
	116, 117, 117, 118, 119, 120, 121, 122, 122, 123, 124, 125, 126, 127, 127, 128, 129, 130, 131, 131, 132, 133, 134, 135, 136, 136, 137, 138, 139, \
	140, 141, 141, 142, 143, 144, 145, 146, 146, 147, 148, 149, 150, 151, 151, 152, 153, 154, 155, 155, 156, 157, 158, 159, 160, 160, 161, 162, 163, \
	164, 165, 165, 166, 167, 168, 169, 170, 170, 171, 172, 173, 174, 175, 175, 176, 177, 178, 179, 179, 180, 181, 182, 183, 184, 184, 185, 186, 187, \
	188, 189, 189, 190, 191, 192, 193, 194, 194, 195, 196, 197, 198, 199, 199, 200, 201, 202, 203, 203, 204, 205, 206, 207, 208, 208, 209, 210, 211, \
	212, 213, 213, 214, 215, 216, 217, 218, 218, 219, 220, 221, 222, 223, 223, 224, 225, 226, 227, 227, 228, 229, 230, 231, 232, 232, 233, 234, 235, \
	236, 237, 237, 238, 239, 240, 241, 242, 242, 243, 244, 245, 246, 247, 247, 248, 249, 250, 251, 251, 252, 253, 254, 255, 256, 256, 257, 258, 259, \
	260, 261, 261, 262, 263, 264, 265, 266, 266, 267, 268, 269, 270, 271, 271, 272, 273, 274, 275, 275, 276, 277, 278, 279, 280, 280, 281, 282, 283, \
	284, 285, 285, 286, 287, 288, 289, 290, 290, 291, 292, 293, 294, 295, 295, 296, 297, 298, 299, 299, 300, 301, 302, 303, 304, 304, 305, 306, 307, \
	308, 309, 309, 310, 311, 312, 313, 314, 314, 315, 316, 317, 318, 319, 319, 320, 321, 322, 323, 324, 324, 325, 326, 327, 328, 328, 329, 330, 331, \
	332, 333, 333, 334, 335, 336, 337, 338, 338, 339, 340, 341, 342, 343, 343, 344, 345, 346, 347, 348, 348, 349, 350, 351, 352, 352, 353, 354, 355, \
	356, 357, 357, 358, 359, 360, 361, 362, 362, 363, 364, 365, 366, 367, 367, 368, 369, 370, 371, 372, 372, 373, 374, 375, 376, 376, 377, 378, 379, \
	380, 381, 381, 382, 383, 384, 385, 386, 386, 387, 388, 389, 390, 391, 391, 392, 393, 394, 395, 396, 396, 397, 398, 399, 400, 400, 401, 402, 403, \
	404, 405, 405, 406, 407, 408, 409, 410, 410, 411, 412, 413, 414, 415, 415, 416, 417, 418, 419, 420, 420, 421, 422, 423, 424, 424, 425, 426, 427, \
	428, 429, 429, 430, 431, 432, 433, 434, 434, 435, 436, 437, 438, 439, 439, 440, 441, 442, 443, 444, 444, 445, 446, 447, 448, 448, 449, 450, 451, \
	452, 453, 453, 454, 455, 456, 457, 458, 458, 459, 460, 461, 462, 463, 463, 464, 465, 466, 467, 468, 468, 469, 470, 471, 472, 472, 473, 474, 475, \
	476, 477, 477, 478, 479, 480, 481, 482, 482, 483, 484, 485, 486, 487, 487, 488, 489, 490, 491, 492, 492, 493, 494, 495, 496, 496, 497, 498, 499, \
	500, 501, 501, 502, 503, 504, 505, 506, 506, 507, 508, 509, 510, 511, 511, 512, 513, 514, 515, 516, 516, 517, 518, 519, 520, 521, 521, 522, 523, \
	524, 525, 525, 526, 527, 528, 529, 530, 530, 531, 532, 533, 534, 535, 535, 536, 537, 538, 539, 540, 540, 541, 542, 543, 544, 545, 545, 546, 547, \
	548, 549, 549, 550, 551, 552, 553, 554, 554, 555, 556, 557, 558, 559, 559, 560, 561, 562, 563, 564, 564, 565, 566, 567, 568, 569, 569, 570, 571, \
	572, 573, 573, 574, 575, 576, 577, 578, 578, 579, 580, 581, 582, 583, 583, 584, 585, 586, 587, 588, 588, 589, 590, 591, 592, 593, 593, 594, 595, \
	596, 597, 597, 598, 599, 600, 601, 602, 602, 603, 604, 605, 606, 607, 607, 608, 609, 610, 611, 612, 612, 613, 614, 615, 616, 617, 617, 618, 619, \
	620, 621, 621, 622, 623, 624, 625, 626, 626, 627, 628, 629, 630, 631, 631, 632, 633, 634, 635, 636, 636, 637, 638, 639, 640, 641, 641, 642, 643, \
	644, 645, 645, 646, 647, 648, 649, 650, 650, 651, 652, 653, 654, 655, 655, 656, 657, 658, 659, 660, 660, 661, 662, 663, 664, 665, 665, 666, 667, \
	668, 669, 669, 670, 671, 672, 673, 674, 674, 675, 676, 677, 678, 679, 679, 680, 681, 682, 683, 684, 684, 685, 686, 687, 688, 689, 689, 690, 691, \
	692, 693, 693, 694, 695, 696, 697, 698, 698, 699, 700, 701, 702, 703, 703, 704, 705, 706, 707, 708, 708, 709, 710, 711, 712, 713, 713, 714, 715, \
	716, 717, 718, 718, 719, 720, 721, 722, 722, 723, 724, 725, 726, 727, 727, 728, 729, 730, 731, 732, 732, 733, 734, 735, 736, 737, 737, 738, 739, \
	740, 741, 742, 742, 743, 744, 745, 746, 746, 747, 748, 749, 750, 751, 751, 752, 753, 754, 755, 756, 756, 757, 758, 759, 760, 761, 761, 762, 763, \
	764, 765, 766, 766, 767, 768, 769, 770, 770, 771, 772, 773, 774, 775, 775, 776, 777, 778, 779, 780, 780, 781, 782, 783, 784, 785, 785, 786, 787, \
	788, 789, 790, 790, 791, 792, 793, 794, 794, 795, 796, 797, 798, 799, 799, 800, 801, 802, 803, 804, 804, 805, 806, 807, 808, 809, 809, 810, 811, \
	812, 813, 814, 814, 815, 816, 817, 818, 818, 819, 820, 821, 822, 823, 823, 824, 825, 826, 827, 828, 828, 829, 830, 831, 832, 833, 833, 834, 835, \
	836, 837, 838, 838, 839, 840, 841, 842, 842, 843, 844, 845, 846, 847, 847, 848, 849, 850, 851, 852, 852, 853, 854, 855, 856, 857, 857, 858, 859, \
	860, 861, 862, 862, 863, 864, 865, 866, 866, 867, 868, 869, 870, 871, 871, 872, 873, 874, 875, 876, 876, 877, 878, 879, 880, 881, 881, 882, 883, \
	884, 885, 886, 886, 887, 888, 889, 890, 890, 891, 892, 893, 894, 895, 895, 896, 897, 898, 899, 900, 900, 901, 902, 903, 904, 905, 905, 906, 907, \
	908, 909, 910, 910, 911, 912, 913, 914, 914, 915, 916, 917, 918, 919, 919, 920, 921, 922, 923, 924, 924, 925, 926, 927, 928, 929, 929, 930, 931, \
	932, 933, 934, 934, 935, 936, 937, 938, 939, 939, 940, 941, 942, 943, 943, 944, 945, 946, 947, 948, 948, 949, 950, 951, 952, 953, 953, 954, 955, \
	956, 957, 958, 958, 959, 960, 961, 962, 963, 963, 964, 965, 966, 967, 967, 968, 969, 970, 971, 972, 972, 973, 974, 975, 976, 977, 977, 978, 979, \
	980, 981, 982, 982, 983, 984, 985, 986, 987, 987, 988, 989, 990, 991, 991, 992, 993, 994, 995, 996, 996, 997, 998, 999, 1000, 1001, 1001, 1002, \
	1003, 1004, 1005, 1006, 1006, 1007, 1008, 1009, 1010, 1011, 1011, 1012, 1013, 1014, 1015, 1015, 1016, 1017, 1018, 1019, 1020, 1020, 1021, 1022, \
	1023, 1024, 1025, 1025, 1026, 1027, 1028, 1029, 1030, 1030, 1031, 1032, 1033, 1034, 1035, 1035, 1036, 1037, 1038, 1039, 1039, 1040, 1041, 1042, \
	1043, 1044, 1044, 1045, 1046, 1047, 1048, 1049, 1049, 1050, 1051, 1052, 1053, 1054, 1054, 1055, 1056, 1057, 1058, 1059, 1059, 1060, 1061, 1062, \
	1063, 1063, 1064, 1065, 1066, 1067, 1068, 1068, 1069, 1070, 1071, 1072, 1073, 1073, 1074, 1075, 1076, 1077, 1078, 1078, 1079, 1080, 1081, 1082, \
	1083, 1083, 1084, 1085, 1086, 1087, 1087, 1088, 1089, 1090, 1091, 1092, 1092, 1093, 1094, 1095, 1096, 1097, 1097, 1098, 1099, 1100, 1101, 1102, \
	1102, 1103, 1104, 1105, 1106, 1107, 1107, 1108, 1109, 1110, 1111, 1111, 1112, 1113, 1114, 1115, 1116, 1116, 1117, 1118, 1119, 1120, 1121, 1121, \
	1122, 1123, 1124, 1125, 1126, 1126, 1127, 1128, 1129, 1130, 1131, 1131, 1132, 1133, 1134, 1135, 1136, 1136, 1137, 1138, 1139, 1140, 1140, 1141, \
	1142, 1143, 1144, 1145, 1145, 1146, 1147, 1148, 1149, 1150, 1150, 1151, 1152, 1153, 1154, 1155, 1155, 1156, 1157, 1158, 1159, 1160, 1160, 1161, \
	1162, 1163, 1164, 1164, 1165, 1166, 1167, 1168, 1169, 1169, 1170, 1171, 1172, 1173, 1174, 1174, 1175, 1176, 1177, 1178, 1179, 1179, 1180, 1181, \
	1182, 1183, 1184, 1184, 1185, 1186, 1187, 1188, 1188, 1189, 1190, 1191, 1192, 1193, 1193, 1194, 1195, 1196, 1197, 1198, 1198, 1199, 1200, 1201, \
	1202, 1203, 1203, 1204, 1205, 1206, 1207, 1208, 1208, 1209, 1210, 1211, 1212, 1212, 1213, 1214, 1215, 1216, 1217, 1217, 1218, 1219, 1220, 1221, \
	1222, 1222, 1223, 1224, 1225, 1226, 1227, 1227, 1228, 1229, 1230, 1231, 1232, 1232, 1233, 1234, 1235, 1236, 1236, 1237, 1238, 1239, 1240, 1241, \
	1241, 1242, 1243, 1244, 1245, 1246, 1246, 1247, 1248, 1249, 1250, 1251, 1251, 1252, 1253, 1254, 1255, 1256, 1256, 1257, 1258, 1259, 1260, 1260, \
	1261, 1262, 1263, 1264, 1265, 1265, 1266, 1267, 1268, 1269, 1270, 1270, 1271, 1272, 1273, 1274, 1275, 1275, 1276, 1277, 1278, 1279, 1280, 1280, \
	1281, 1282, 1283, 1284, 1284, 1285, 1286, 1287, 1288, 1289, 1289, 1290, 1291, 1292, 1293, 1294, 1294, 1295, 1296, 1297, 1298, 1299, 1299, 1300, \
	1301, 1302, 1303, 1304, 1304, 1305, 1306, 1307, 1308, 1308, 1309, 1310, 1311, 1312, 1313, 1313, 1314, 1315, 1316, 1317, 1318, 1318, 1319, 1320, \
	1321, 1322, 1323, 1323, 1324, 1325, 1326, 1327, 1328, 1328, 1329, 1330, 1331, 1332, 1333, 1333, 1334, 1335, 1336, 1337, 1337, 1338, 1339, 1340, \
	1341, 1342, 1342, 1343, 1344, 1345, 1346, 1347, 1347, 1348, 1349, 1350, 1351, 1352, 1352, 1353, 1354, 1355, 1356, 1357, 1357, 1358, 1359, 1360, \
	1361, 1361, 1362, 1363, 1364, 1365, 1366, 1366, 1367, 1368, 1369, 1370, 1371, 1371, 1372, 1373, 1374, 1375, 1376, 1376, 1377, 1378, 1379, 1380, \
	1381, 1381, 1382, 1383, 1384, 1385, 1385, 1386, 1387, 1388, 1389, 1390, 1390, 1391, 1392, 1393, 1394, 1395, 1395, 1396, 1397, 1398, 1399, 1400, \
	1400, 1401, 1402, 1403, 1404, 1405, 1405, 1406, 1407, 1408, 1409, 1409, 1410, 1411, 1412, 1413, 1414, 1414, 1415, 1416, 1417, 1418, 1419, 1419, \
	1420, 1421, 1422, 1423, 1424, 1424, 1425, 1426, 1427, 1428, 1429, 1429, 1430, 1431, 1432, 1433, 1433, 1434, 1435, 1436, 1437, 1438, 1438, 1439, \
	1440, 1441, 1442, 1443, 1443, 1444, 1445, 1446, 1447, 1448, 1448, 1449, 1450, 1451, 1452, 1453, 1453, 1454, 1455, 1456, 1457, 1457, 1458, 1459, \
	1460, 1461, 1462, 1462, 1463, 1464, 1465, 1466, 1467, 1467, 1468, 1469, 1470, 1471, 1472, 1472, 1473, 1474, 1475, 1476, 1477, 1477, 1478, 1479, \
	1480, 1481, 1481, 1482, 1483, 1484, 1485, 1486, 1486, 1487, 1488, 1489, 1490, 1491, 1491, 1492, 1493, 1494, 1495, 1496, 1496, 1497, 1498, 1499, \
	1500, 1501, 1501, 1502, 1503, 1504, 1505, 1505, 1506, 1507, 1508, 1509, 1510, 1510, 1511, 1512, 1513, 1514, 1515, 1515, 1516, 1517, 1518, 1519, \
	1520, 1520, 1521, 1522, 1523, 1524, 1525, 1525, 1526, 1527, 1528, 1529, 1530, 1530, 1531, 1532, 1533, 1534, 1534, 1535, 1536, 1537, 1538, 1539, \
	1539, 1540, 1541, 1542, 1543, 1544, 1544, 1545, 1546, 1547, 1548, 1549, 1549, 1550, 1551, 1552, 1553, 1554, 1554, 1555, 1556, 1557, 1558, 1558, \
	1559, 1560, 1561, 1562, 1563, 1563, 1564, 1565, 1566, 1567, 1568, 1568, 1569, 1570, 1571, 1572, 1573, 1573, 1574, 1575, 1576, 1577, 1578, 1578, \
	1579, 1580, 1581, 1582, 1582, 1583, 1584, 1585, 1586, 1587, 1587, 1588, 1589, 1590, 1591, 1592, 1592, 1593, 1594, 1595, 1596, 1597, 1597, 1598, \
	1599, 1600, 1601, 1602, 1602, 1603, 1604, 1605, 1606, 1606, 1607, 1608, 1609, 1610, 1611, 1611, 1612, 1613, 1614, 1615, 1616, 1616, 1617, 1618, \
	1619, 1620, 1621, 1621, 1622, 1623, 1624, 1625, 1626, 1626, 1627, 1628, 1629, 1630, 1630, 1631, 1632, 1633, 1634, 1635, 1635, 1636, 1637, 1638, \
	1639, 1640, 1640, 1641, 1642, 1643, 1644, 1645, 1645, 1646, 1647, 1648, 1649, 1650, 1650, 1651, 1652, 1653, 1654, 1654, 1655, 1656, 1657, 1658, \
	1659, 1659, 1660, 1661, 1662, 1663, 1664, 1664, 1665, 1666, 1667, 1668, 1669, 1669, 1670, 1671, 1672, 1673, 1674, 1674, 1675, 1676, 1677, 1678, \
	1678, 1679, 1680, 1681, 1682, 1683, 1683, 1684, 1685, 1686, 1687, 1688, 1688, 1689, 1690, 1691, 1692, 1693, 1693, 1694, 1695, 1695
};

static int backlight_500_600nit_buf[] = {
	1696, 1697, 1697, 1698, 1698, 1699, 1699, 1700, 1700, 1701, 1701, 1702, 1702, 1703, 1703, 1704, 1704, 1705, 1705, 1706, 1706, 1707, 1707, 1708,
	1708, 1709, 1709, 1710, 1710, 1711, 1711, 1712, 1712, 1713, 1713, 1714, 1714, 1715, 1715, 1716, 1716, 1717, 1717, 1718, 1718, 1719, 1719, 1720,
	1720, 1721, 1721, 1722, 1722, 1723, 1723, 1724, 1724, 1725, 1725, 1726, 1726, 1727, 1727, 1728, 1728, 1729, 1729, 1730, 1730, 1731, 1731, 1732,
	1732, 1733, 1733, 1734, 1734, 1735, 1735, 1736, 1736, 1737, 1737, 1738, 1738, 1739, 1739, 1740, 1740, 1741, 1741, 1742, 1742, 1743, 1743, 1744,
	1744, 1745, 1745, 1746, 1746, 1747, 1747, 1748, 1748, 1749, 1749, 1750, 1750, 1751, 1751, 1752, 1752, 1753, 1753, 1754, 1754, 1755, 1755, 1756,
	1756, 1757, 1757, 1758, 1758, 1759, 1759, 1760, 1760, 1761, 1761, 1762, 1762, 1763, 1763, 1764, 1764, 1765, 1765, 1766, 1766, 1767, 1767, 1768,
	1768, 1769, 1769, 1770, 1770, 1771, 1771, 1772, 1772, 1773, 1773, 1774, 1774, 1775, 1775, 1776, 1776, 1777, 1777, 1778, 1778, 1779, 1779, 1780,
	1780, 1781, 1781, 1782, 1782, 1783, 1783, 1784, 1784, 1785, 1785, 1786, 1786, 1787, 1787, 1788, 1788, 1789, 1789, 1790, 1790, 1791, 1791, 1792,
	1792, 1793, 1793, 1794, 1794, 1795, 1795, 1796, 1796, 1797, 1797, 1798, 1798, 1799, 1799, 1800, 1800, 1801, 1801, 1802, 1802, 1803, 1803, 1804,
	1804, 1805, 1805, 1806, 1806, 1807, 1807, 1808, 1808, 1809, 1809, 1810, 1810, 1811, 1811, 1812, 1812, 1813, 1813, 1814, 1814, 1815, 1815, 1816,
	1816, 1817, 1817, 1818, 1818, 1819, 1819, 1820, 1820, 1821, 1821, 1822, 1822, 1823, 1823, 1824, 1824, 1825, 1825, 1826, 1826, 1827, 1827, 1828,
	1828, 1829, 1829, 1830, 1830, 1831, 1831, 1832, 1832, 1833, 1833, 1834, 1834, 1835, 1835, 1836, 1836, 1837, 1837, 1838, 1838, 1839, 1839, 1840,
	1840, 1841, 1841, 1842, 1842, 1843, 1843, 1844, 1844, 1845, 1845, 1846, 1846, 1847, 1847, 1848, 1848, 1849, 1849, 1850, 1850, 1851, 1851, 1852,
	1852, 1853, 1853, 1854, 1854, 1855, 1855, 1856, 1856, 1857, 1857, 1858, 1858, 1859, 1859, 1860, 1860, 1861, 1861, 1862, 1862, 1863, 1863, 1864,
	1864, 1865, 1865, 1866, 1866, 1867, 1867, 1868, 1868, 1869, 1869, 1870, 1870, 1871, 1871, 1872, 1872, 1873, 1873, 1874, 1874, 1875, 1875, 1876,
	1876, 1877, 1877, 1878, 1878, 1879, 1879, 1880, 1880, 1881, 1881, 1882, 1882, 1883, 1883, 1884, 1884, 1885, 1885, 1886, 1886, 1887, 1887, 1888,
	1888, 1889, 1889, 1890, 1890, 1891, 1891, 1892, 1892, 1893, 1893, 1894, 1894, 1895, 1895, 1896, 1896, 1897, 1897, 1898, 1898, 1899, 1899, 1900,
	1900, 1901, 1901, 1902, 1902, 1903, 1903, 1904, 1904, 1905, 1905, 1906, 1906, 1907, 1907, 1908, 1908, 1909, 1909, 1910, 1910, 1911, 1911, 1912,
	1912, 1913, 1913, 1914, 1914, 1915, 1915, 1916, 1916, 1917, 1917, 1918, 1918, 1919, 1919, 1920, 1920, 1921, 1921, 1922, 1922, 1923, 1923, 1924,
	1924, 1925, 1925, 1926, 1926, 1927, 1927, 1928, 1928, 1929, 1929, 1930, 1930, 1931, 1931, 1932, 1932, 1933, 1933, 1934, 1934, 1935, 1935, 1936,
	1936, 1937, 1937, 1938, 1938, 1939, 1939, 1940, 1940, 1941, 1941, 1942, 1942, 1943, 1943, 1944, 1944, 1945, 1945, 1946, 1946, 1947, 1947, 1948,
	1948, 1949, 1949, 1950, 1950, 1951, 1951, 1952, 1952, 1953, 1953, 1954, 1954, 1955, 1955, 1956, 1956, 1957, 1957, 1958, 1958, 1959, 1959, 1960,
	1960, 1961, 1961, 1962, 1962, 1963, 1963, 1964, 1964, 1965, 1965, 1966, 1966, 1967, 1967, 1968, 1968, 1969, 1969, 1970, 1970, 1971, 1971, 1972,
	1972, 1973, 1973, 1974, 1974, 1975, 1975, 1976, 1976, 1977, 1977, 1978, 1978, 1979, 1979, 1980, 1980, 1981, 1981, 1982, 1982, 1983, 1983, 1984,
	1984, 1985, 1985, 1986, 1986, 1987, 1987, 1988, 1988, 1989, 1989, 1990, 1990, 1991, 1991, 1992, 1992, 1993, 1993, 1994, 1994, 1995, 1995, 1996,
	1996, 1997, 1997, 1998, 1998, 1999, 1999, 2000, 2000, 2001, 2001, 2002, 2002, 2003, 2003, 2004, 2004, 2005, 2005, 2006, 2006, 2007, 2007, 2008,
	2008, 2009, 2009, 2010, 2010, 2011, 2011, 2012, 2012, 2013, 2013, 2014, 2014, 2015, 2015, 2016, 2016, 2017, 2017, 2018, 2018, 2019, 2019, 2020,
	2020, 2021, 2021, 2022, 2022, 2023, 2023, 2024, 2024, 2025, 2025, 2026, 2026, 2027, 2027, 2028, 2028, 2029, 2029, 2030, 2030, 2031, 2031, 2032,
	2032, 2033, 2033, 2034, 2034, 2035, 2035, 2036, 2036, 2037, 2037, 2038, 2038, 2039, 2039, 2040, 2040, 2041, 2041, 2042, 2042, 2043, 2043, 2044,
	2044, 2045, 2045, 2046, 2046, 2047, 2047, 2047
};

static int backlight_600_800nit_buf[] = {
	3538, 3538, 3538, 3538, 3539, 3539, 3540, 3540, 3541, 3541, 3542, 3542, 3543, 3543, 3544, 3544, 3545, 3545, 3546, 3546, 3547, 3547, 3548, 3548,
	3549, 3549, 3550, 3550, 3551, 3551, 3552, 3552, 3553, 3553, 3554, 3554, 3555, 3555, 3556, 3556, 3557, 3557, 3558, 3558, 3559, 3559, 3560, 3560,
	3561, 3561, 3562, 3562, 3563, 3563, 3564, 3564, 3565, 3565, 3566, 3566, 3567, 3567, 3568, 3568, 3569, 3569, 3570, 3570, 3571, 3571, 3572, 3572,
	3573, 3573, 3574, 3574, 3575, 3575, 3576, 3576, 3577, 3577, 3578, 3578, 3579, 3579, 3580, 3580, 3581, 3581, 3582, 3582, 3583, 3583, 3584, 3584,
	3585, 3585, 3586, 3586, 3587, 3587, 3588, 3588, 3589, 3589, 3590, 3590, 3591, 3591, 3592, 3592, 3593, 3593, 3594, 3594, 3595, 3595, 3596, 3596,
	3597, 3597, 3598, 3598, 3599, 3599, 3600, 3600, 3601, 3601, 3602, 3602, 3603, 3603, 3604, 3604, 3605, 3605, 3606, 3606, 3607, 3607, 3608, 3608,
	3609, 3609, 3610, 3610, 3611, 3611, 3612, 3612, 3613, 3613, 3614, 3614, 3615, 3615, 3616, 3616, 3617, 3617, 3618, 3618, 3619, 3619, 3620, 3620,
	3621, 3621, 3622, 3622, 3623, 3623, 3624, 3624, 3625, 3625, 3626, 3626, 3627, 3627, 3628, 3628, 3629, 3629, 3630, 3630, 3631, 3631, 3632, 3632,
	3633, 3633, 3634, 3634, 3635, 3635, 3636, 3636, 3637, 3637, 3638, 3638, 3639, 3639, 3640, 3640, 3641, 3641, 3642, 3642, 3643, 3643, 3644, 3644,
	3645, 3645, 3646, 3646, 3647, 3647, 3648, 3648, 3649, 3649, 3650, 3650, 3651, 3651, 3652, 3652, 3653, 3653, 3654, 3654, 3655, 3655, 3656, 3656,
	3657, 3657, 3658, 3658, 3659, 3659, 3660, 3660, 3661, 3661, 3662, 3662, 3663, 3663, 3664, 3664, 3665, 3665, 3666, 3666, 3667, 3667, 3668, 3668,
	3669, 3669, 3670, 3670, 3671, 3671, 3672, 3672, 3673, 3673, 3674, 3674, 3675, 3675, 3676, 3676, 3677, 3677, 3678, 3678, 3679, 3679, 3680, 3680,
	3681, 3681, 3682, 3682, 3683, 3683, 3684, 3684, 3685, 3685, 3686, 3686, 3687, 3687, 3688, 3688, 3689, 3689, 3690, 3690, 3691, 3691, 3692, 3692,
	3693, 3693, 3694, 3694, 3695, 3695, 3696, 3696, 3697, 3697, 3698, 3698, 3699, 3699, 3700, 3700, 3701, 3701, 3702, 3702, 3703, 3703, 3704, 3704,
	3705, 3705, 3706, 3706, 3707, 3707, 3708, 3708, 3709, 3709, 3710, 3710, 3711, 3711, 3712, 3712, 3713, 3713, 3714, 3714, 3715, 3715, 3716, 3716,
	3717, 3717, 3718, 3718, 3719, 3719, 3720, 3720, 3721, 3721, 3722, 3722, 3723, 3723, 3724, 3724, 3725, 3725, 3726, 3726, 3727, 3727, 3728, 3728,
	3729, 3729, 3730, 3730, 3731, 3731, 3732, 3732, 3733, 3733, 3734, 3734, 3735, 3735, 3736, 3736, 3737, 3737, 3738, 3738, 3739, 3739, 3740, 3740,
	3741, 3741, 3742, 3742, 3743, 3743, 3744, 3744, 3745, 3745, 3746, 3746, 3747, 3747, 3748, 3748, 3749, 3749, 3750, 3750, 3751, 3751, 3752, 3752,
	3753, 3753, 3754, 3754, 3755, 3755, 3756, 3756, 3757, 3757, 3758, 3758, 3759, 3759, 3760, 3760, 3761, 3761, 3762, 3762, 3763, 3763, 3764, 3764,
	3765, 3765, 3766, 3766, 3767, 3767, 3768, 3768, 3769, 3769, 3770, 3770, 3771, 3771, 3772, 3772, 3773, 3773, 3774, 3774, 3775, 3775, 3776, 3776,
	3777, 3777, 3778, 3778, 3779, 3779, 3780, 3780, 3781, 3781, 3782, 3782, 3783, 3783, 3784, 3784, 3785, 3785, 3786, 3786, 3787, 3787, 3788, 3788,
	3789, 3789, 3790, 3790, 3791, 3791, 3792, 3792, 3793, 3793, 3794, 3794, 3795, 3795, 3796, 3796, 3797, 3797, 3798, 3798, 3799, 3799, 3800, 3800,
	3801, 3801, 3802, 3802, 3803, 3803, 3804, 3804, 3805, 3805, 3806, 3806, 3807, 3807, 3808, 3808, 3809, 3809, 3810, 3810, 3811, 3811, 3812, 3812,
	3813, 3813, 3814, 3814, 3815, 3815, 3816, 3816, 3817, 3817, 3818, 3818, 3819, 3819, 3820, 3820, 3821, 3821, 3822, 3822, 3823, 3823, 3824, 3824,
	3825, 3825, 3826, 3826, 3827, 3827, 3828, 3828, 3829, 3829, 3830, 3830, 3831, 3831, 3832, 3832, 3833, 3833, 3834, 3834, 3835, 3835, 3836, 3836,
	3837, 3837, 3838, 3838, 3839, 3839, 3840, 3840, 3841, 3841, 3842, 3842, 3843, 3843, 3844, 3844, 3845, 3845, 3846, 3846, 3847, 3847, 3848, 3848,
	3849, 3849, 3850, 3850, 3851, 3851, 3852, 3852, 3853, 3853, 3854, 3854, 3855, 3855, 3856, 3856, 3857, 3857, 3858, 3858, 3859, 3859, 3860, 3860,
	3861, 3861, 3862, 3862, 3863, 3863, 3864, 3864, 3865, 3865, 3866, 3866, 3867, 3867, 3868, 3868, 3869, 3869, 3870, 3870, 3871, 3871, 3872, 3872,
	3873, 3873, 3874, 3874, 3875, 3875, 3876, 3876, 3877, 3877, 3878, 3878, 3879, 3879, 3880, 3880, 3881, 3881, 3882, 3882, 3883, 3883, 3884, 3884,
	3885, 3885, 3886, 3886, 3887, 3887, 3888, 3888, 3889, 3889, 3890, 3890, 3891, 3891, 3892, 3892, 3893, 3893, 3894, 3894, 3895, 3895, 3896, 3896,
	3897, 3897, 3898, 3898, 3899, 3899, 3900, 3900, 3901, 3901, 3902, 3902, 3903, 3903, 3904, 3904, 3905, 3905, 3906, 3906, 3907, 3907, 3908, 3908,
	3909, 3909, 3910, 3910, 3911, 3911, 3912, 3912, 3913, 3913, 3914, 3914, 3915, 3915, 3916, 3916, 3917, 3917, 3918, 3918, 3919, 3919, 3920, 3920,
	3921, 3921, 3922, 3922, 3923, 3923, 3924, 3924, 3925, 3925, 3926, 3926, 3927, 3927, 3928, 3928, 3929, 3929, 3930, 3930, 3931, 3931, 3932, 3932,
	3933, 3933, 3934, 3934, 3935, 3935, 3936, 3936, 3937, 3937, 3938, 3938, 3939, 3939, 3940, 3940, 3941, 3941, 3942, 3942, 3943, 3943, 3944, 3944,
	3945, 3945, 3946, 3946, 3947, 3947, 3948, 3948, 3949, 3949, 3950, 3950, 3951, 3951, 3952, 3952, 3953, 3953, 3954, 3954, 3955, 3955, 3956, 3956,
	3957, 3957, 3958, 3958, 3959, 3959, 3960, 3960, 3961, 3961, 3962, 3962, 3963, 3963, 3964, 3964, 3965, 3965, 3966, 3966, 3967, 3967, 3968, 3968,
	3969, 3969, 3970, 3970, 3971, 3971, 3972, 3972, 3973, 3973, 3974, 3974, 3975, 3975, 3976, 3976, 3977, 3977, 3978, 3978, 3979, 3979, 3980, 3980,
	3981, 3981, 3982, 3982, 3983, 3983, 3984, 3984, 3985, 3985, 3986, 3986, 3987, 3987, 3988, 3988, 3989, 3989, 3990, 3990, 3991, 3991, 3992, 3992,
	3993, 3993, 3994, 3994, 3995, 3995, 3996, 3996, 3997, 3997, 3998, 3998, 3999, 3999, 4000, 4000, 4001, 4001, 4002, 4002, 4003, 4003, 4004, 4004,
	4005, 4005, 4006, 4006, 4007, 4007, 4008, 4008, 4009, 4009, 4010, 4010, 4011, 4011, 4012, 4012, 4013, 4013, 4014, 4014, 4015, 4015, 4016, 4016,
	4017, 4017, 4018, 4018, 4019, 4019, 4020, 4020, 4021, 4021, 4022, 4022, 4023, 4023, 4024, 4024, 4025, 4025, 4026, 4026, 4027, 4027, 4028, 4028,
	4029, 4029, 4030, 4030, 4031, 4031, 4032, 4032, 4033, 4033, 4034, 4034, 4035, 4035, 4036, 4036, 4037, 4037, 4038, 4038, 4039, 4039, 4040, 4040,
	4041, 4041, 4042, 4042, 4043, 4043, 4044, 4044, 4045, 4045, 4046, 4046, 4047, 4047, 4048, 4048, 4049, 4049, 4050, 4050, 4051, 4051, 4052, 4052,
	4053, 4053, 4054, 4054, 4055, 4055, 4056, 4056, 4057, 4057, 4058, 4058, 4059, 4059, 4060, 4060, 4061, 4061, 4062, 4062, 4063, 4063, 4064, 4064,
	4065, 4065, 4066, 4066, 4067, 4067, 4068, 4068, 4069, 4069, 4070, 4070, 4071, 4071, 4072, 4072, 4073, 4073, 4074, 4074, 4075, 4075, 4076, 4076,
	4077, 4077, 4078, 4078, 4079, 4079, 4080, 4080, 4081, 4081, 4082, 4082, 4083, 4083, 4084, 4084, 4085, 4085, 4086, 4086, 4087, 4087, 4088, 4088,
	4089, 4089, 4090, 4090, 4091, 4091, 4092, 4092, 4093, 4093, 4094, 4094, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
	4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095
};
#endif
