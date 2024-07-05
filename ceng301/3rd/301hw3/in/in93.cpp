#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(434)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(6))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(103)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(275))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(172)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 21 << " " << ((b->remove(71))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(77))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(172))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->remove(143))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(84))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(41)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (a->remove(275)) << std::endl;
*a=*b;
std::cout << "Line no:" << 43 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(447))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->remove(428))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(349))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->remove(200))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(495))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(495)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->remove(261)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 63 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((b->remove(55))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(273)) << std::endl;
*a=*a;
std::cout << "Line no:" << 69 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->remove(38))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 72 << " " << (b->remove(134)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->insert(159))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(450))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(208)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(311)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(62))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(195))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(172)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(145)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(62)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(62)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->insert(461))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 95 << " " << ((a->remove(460))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(212)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(493)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(208)) << std::endl;
*a=*a;
std::cout << "Line no:" << 101 << " " << (b->remove(159)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(498)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(120)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(495)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((a->remove(155))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(218)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(390) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(390) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(390) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(390) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(22)) << std::endl;
*b=*a;
std::cout << "Line no:" << 124 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->remove(447))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(153)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(423)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 138 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(210))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(368))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(205)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(390))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(306)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << (b->insert(150)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->insert(488))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(390)) << std::endl;
*a=*a;
std::cout << "Line no:" << 156 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(210))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->insert(275))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 163 << " " << ((a->remove(294))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(496)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->insert(63))==false) << std::endl;
*b=*a;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((a->remove(461))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->insert(177))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 182 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(488))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(289)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(275))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 191 << " " << (b->insert(119)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 193 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(368)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(156)) << std::endl;
*b=*b;
std::cout << "Line no:" << 198 << " " << ((b->insert(301))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->remove(241))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(207)) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 216 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(156)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(98))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(299)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 223 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->remove(57))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(63))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->insert(289))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(330)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->insert(393)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
