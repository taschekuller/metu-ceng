#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(220))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(444))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(410)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(107)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(444)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(88))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(410))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(93)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(284))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(401)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(327))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(462)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 48 << " " << (a->insert(216)) << std::endl;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 51 << " " << (a->remove(216)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->remove(76))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(388)) << std::endl;
*b=*b;
a->printPretty();
*b=*b;
b->printPretty();
std::cout << "Line no:" << 58 << " " << (a->insert(197)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 60 << " " << ((a->insert(197))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->insert(197))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(197)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->remove(203))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(216))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(429)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(109)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(170))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(56))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 76 << " " << ((b->insert(309))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(485)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 80 << " " << ((b->insert(388))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 82 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((a->remove(55))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->insert(485))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(311)) << std::endl;
*b=*b;
std::cout << "Line no:" << 92 << " " << (b->remove(310)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(311))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 97 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(492)) << std::endl;
try{std::cout <<"Line no:" << 101 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getFloor(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getCeiling(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getNext(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->get(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 109 << " " << (b->remove(309)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(147)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(324)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(216)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 114 << " " << (b->remove(492)) << std::endl;
*a=*a;
std::cout << "Line no:" << 116 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->remove(110))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->remove(113))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->remove(460))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->remove(478))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 124 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->insert(193))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(369)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(369)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(311))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(495)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->remove(65))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(64))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(238)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 145 << " " << ((a->remove(290))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(271))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(412))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->remove(356))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(202))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->insert(388))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(25)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(97)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(261)) << std::endl;
try{std::cout <<"Line no:" << 159 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getFloor(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getCeiling(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getNext(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->get(85) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 167 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(412)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->remove(219))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 172 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 174 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->remove(238)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->remove(325)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(85)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 179 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(120)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(86)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->remove(452))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(290)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(405))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(294)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(286)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(137))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(146))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(25)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << ((b->remove(282))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(455))==false) << std::endl;
try{std::cout <<"Line no:" << 217 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getFloor(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getCeiling(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getNext(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->get(109) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 225 << " " << ((a->insert(240))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
