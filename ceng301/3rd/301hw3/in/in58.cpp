#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(233)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->remove(233)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(292)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(103))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(170))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(469)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(431)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 27 << " " << (b->insert(139)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(19))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << ((a->remove(357))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << ((b->insert(139))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((b->remove(167))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(139))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(139)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((b->insert(255))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 41 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(255)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(379)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(258)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(322)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->insert(298))==false) << std::endl;
a->printPretty();
b->printPretty();
*a=*b;
std::cout << "Line no:" << 66 << " " << ((a->insert(298))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->remove(119))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(232))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(387))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->insert(281))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->remove(389))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 82 << " " << ((b->insert(267))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(443))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 85 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(359))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 88 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->remove(445))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(352)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(379))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->remove(48))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(483)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(441))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(280)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 105 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(157)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(450)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(352))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->remove(316))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(298)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(180)) << std::endl;
*b=*a;
std::cout << "Line no:" << 134 << " " << (a->insert(141)) << std::endl;
*b=*a;
std::cout << "Line no:" << 136 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(463))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(337))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(160)) << std::endl;
*a=*b;
std::cout << "Line no:" << 148 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(90))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->remove(330))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(19)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(422)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 166 << " " << (a->insert(411)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 168 << " " << (b->remove(267)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(307)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << ((b->remove(400))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(362)) << std::endl;
*b=*b;
std::cout << "Line no:" << 187 << " " << ((a->remove(436))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->insert(216))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(88))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(332))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(249))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->remove(153))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->remove(48))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(337))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->insert(360))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(280))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(90)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(254)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(90))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(311))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 216 << " " << (b->remove(422)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(466))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(142)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 222 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->remove(113))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->remove(460))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(216)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->insert(91))==false) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->insert(443)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
