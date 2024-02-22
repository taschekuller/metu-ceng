#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(229))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->remove(8))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(401)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(223)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (b->insert(419)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(119)) << std::endl;
*a=*a;
std::cout << "Line no:" << 26 << " " << ((b->insert(158))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(288))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(260)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->insert(260))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(402)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(15)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(404)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->insert(120))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(288)) << std::endl;
*a=*a;
std::cout << "Line no:" << 46 << " " << (b->remove(260)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(162)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->insert(158))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 53 << " " << ((a->insert(422))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(315) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(315) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(315) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(315) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(90)) << std::endl;
*b=*b;
std::cout << "Line no:" << 64 << " " << ((b->remove(353))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(288))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 67 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(422))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(309)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(467)) << std::endl;
*b=*b;
std::cout << "Line no:" << 78 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->remove(452))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(370)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(422))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(385)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 88 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(29)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(147)) << std::endl;
*a=*a;
std::cout << "Line no:" << 92 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(105)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << ((b->remove(167))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(385))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << ((a->insert(105))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(422)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->remove(266))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(105))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(342))==false) << std::endl;
b->printPretty();
b->printPretty();
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(415) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(415) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(415) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(415) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->remove(296))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(415)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 126 << " " << (b->insert(177)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->insert(449))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(428)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->remove(167))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(147))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(47)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(394))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(234)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(158)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(348))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(158))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(371)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 157 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(371))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(151)) << std::endl;
*a=*b;
std::cout << "Line no:" << 161 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(418)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(418)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->remove(480))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (b->insert(307)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 168 << " " << (a->remove(372)) << std::endl;
*a=*b;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << ((b->remove(432))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(199))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 182 << " " << ((a->remove(387))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->insert(177))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(487))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(348))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(376)) << std::endl;
*a=*a;
std::cout << "Line no:" << 195 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->insert(368))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(158)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(20))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(214)) << std::endl;
*b=*b;
std::cout << "Line no:" << 206 << " " << (b->remove(455)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(385))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(368)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->insert(478))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(47)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(105)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(423)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->insert(303))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->insert(381))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(141)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->remove(177)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
