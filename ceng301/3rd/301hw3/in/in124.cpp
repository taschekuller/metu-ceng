#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(21))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->remove(117))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(455))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(318)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(375)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(54)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->remove(449))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << ((a->insert(55))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(430)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(215))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(215)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->remove(247))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(279)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << ((a->remove(418))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(102))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->remove(408))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(279)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(288))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(102)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->remove(361))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(221))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(428))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(425)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(110))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(455)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 105 << " " << ((a->insert(440))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 108 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(163)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(35)) << std::endl;
b->printPretty();
*a=*a;
*b=*a;
std::cout << "Line no:" << 125 << " " << (b->insert(452)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 128 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(35)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(163))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(35))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(280))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(212)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(317)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->remove(294))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(255)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(35)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(163)) << std::endl;
*a=*b;
std::cout << "Line no:" << 144 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(317)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->remove(216))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(212)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(317)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->remove(213))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(396))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(466)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(377)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 163 << " " << (b->remove(163)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->remove(63))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->remove(230))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(101)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(377)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(212) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(439)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(494))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(212)) << std::endl;
*b=*a;
std::cout << "Line no:" << 185 << " " << (a->remove(163)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(261)) << std::endl;
*a=*a;
std::cout << "Line no:" << 189 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(361)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(422)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(396)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(162))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(361)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(480)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(134)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(163)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(396))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->remove(257))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(396)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->remove(371))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(135)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->remove(170))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(194))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 217 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->remove(248))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(135)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->remove(141))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->insert(277))==false) << std::endl;
try{std::cout <<"Line no:" << 223 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getFloor(277) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getCeiling(277) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getNext(277) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->get(277) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 231 << " " << (a->insert(296)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
