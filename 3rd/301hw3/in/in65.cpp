#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(393))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(372)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(42)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 13 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((b->insert(142))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(442))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(160)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(327)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->remove(412)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->insert(182))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(281)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 26 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->remove(48))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(189))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(281)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(374)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 37 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(231))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(154)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(154))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 46 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(466)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(106)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((b->insert(75))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(8)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->insert(106))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(431)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(327))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(106))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->remove(205))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(51))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(410))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(265)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (b->remove(327)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(38))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(470))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(60))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(11)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(154)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(410)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((b->insert(388))==false) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->insert(229)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 123 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->insert(265))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->insert(265))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(481)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->insert(12))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(329))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->remove(221))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(276))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(224)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 141 << " " << ((a->insert(252))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(481)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(319)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(307)) << std::endl;
*b=*b;
std::cout << "Line no:" << 150 << " " << (b->remove(8)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(489))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 153 << " " << (a->insert(422)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(109)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 159 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(104)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 165 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(320)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 170 << " " << ((a->remove(336))==false) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(320) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(320) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(320) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(320) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(281)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(70)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(252)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(314)) << std::endl;
*b=*a;
std::cout << "Line no:" << 186 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(10)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 191 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->remove(448))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(307)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(293))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(105)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(419)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(272)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(489)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->remove(217))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(91)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 211 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(420)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 217 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(196)) << std::endl;
*b=*a;
std::cout << "Line no:" << 220 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->remove(288))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(12)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 226 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->insert(46))==false) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(293) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
