#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(394)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->remove(394)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(489)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(344))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(189))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(56)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(56))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(56)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(319)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(297))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(37))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(371))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->remove(186))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(191)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << (a->insert(296)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(168)) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->remove(296)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(116)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->remove(250))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(468))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(405)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 79 << " " << ((b->remove(380))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(440)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(218)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->insert(244))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->insert(244))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(227))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->remove(32))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(227))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(157)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(244)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(227)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(130))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(415)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 106 << " " << (a->remove(415)) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->remove(313)) << std::endl;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 119 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(395))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->remove(63))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(175))==false) << std::endl;
*a=*a;
*b=*a;
std::cout << "Line no:" << 131 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(395)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(144)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(249)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(29)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(488)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(93)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->remove(471))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(58)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(250)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 158 << " " << ((b->remove(236))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(228)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(273)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 163 << " " << (a->insert(200)) << std::endl;
try{std::cout <<"Line no:" << 164 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getFloor(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getCeiling(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getNext(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->get(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 172 << " " << (b->insert(305)) << std::endl;
*b=*a;
std::cout << "Line no:" << 174 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((b->insert(228))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << ((b->insert(95))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(95)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(228)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->insert(200))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(200))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(251)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(200))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(200)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->remove(271))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(435)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(228))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(232))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->insert(403))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(232))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(228)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(382)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(353))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(184))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(481)) << std::endl;
*b=*b;
std::cout << "Line no:" << 216 << " " << ((a->insert(454))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(303)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(454)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(117)) << std::endl;
try{std::cout <<"Line no:" << 223 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getFloor(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getCeiling(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getNext(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->get(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 231 << " " << (b->insert(221)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
