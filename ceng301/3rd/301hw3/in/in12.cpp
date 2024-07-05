#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(392)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(487))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->remove(446))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(371)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 26 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(231))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(245)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(420)) << std::endl;
*a=*b;
std::cout << "Line no:" << 37 << " " << ((a->remove(313))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(245)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(93)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(238)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 48 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(359)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(3)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->remove(381)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(333)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->remove(16))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(156))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->insert(239))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(20))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(93)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->remove(426))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(169)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->remove(397))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 82 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(19)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(397)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(409))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(239)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->insert(233))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->remove(10))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 94 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(238))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(238))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->remove(342))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->remove(442))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->remove(427))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(14)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(421)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((a->insert(421))==false) << std::endl;
std::cout << "Line no:" << 113 << " " << ((b->insert(422))==false) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(115) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 123 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(360))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(156)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 127 << " " << ((a->remove(67))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(233))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(341)) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 139 << " " << (b->remove(92)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(384)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(183)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 144 << " " << (b->insert(188)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(20)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(114)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << (a->remove(239)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(38))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->remove(457))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->insert(403))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(354))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(354)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->insert(238))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 161 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(434)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << ((a->remove(12))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((b->remove(212))==false) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(385) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(385) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(385) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(385) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->remove(183)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(220))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(299)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(30)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(461)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(60)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((a->remove(354))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(479)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 199 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(357)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 202 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(192)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(20)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(141)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(115))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(341)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(19))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(260))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->insert(183))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(93)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(180))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(209)) << std::endl;
*b=*a;
std::cout << "Line no:" << 226 << " " << (b->remove(268)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(284)) << std::endl;
*a=*b;
std::cout << "Line no:" << 229 << " " << (a->remove(245)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(7)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
