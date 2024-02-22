#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(136)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(258))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->remove(391))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(136)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(63))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(250)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 27 << " " << ((a->remove(499))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(125))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(250)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(178))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(257))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(244)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 39 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(450)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 42 << " " << ((a->insert(244))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(289)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(492))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->remove(356))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->remove(244)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(182)) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(492) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(492) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(492) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(492) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 59 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 60 << " " << ((b->remove(15))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(34)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(425)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(138)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->remove(412))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(152)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(186)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((b->remove(482))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(289))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->remove(348))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(149))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(401))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->remove(399))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->remove(102))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(302)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 91 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(429)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(253)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(107))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(401))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(270))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(293)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(83)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 107 << " " << (a->remove(69)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(276) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(276) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(276) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(276) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (b->remove(270)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(125)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->remove(449))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(295)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 125 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(431)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(93)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(495))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(324)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->remove(82))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(401)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(107)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(74))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(374))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(5)) << std::endl;
*b=*b;
std::cout << "Line no:" << 145 << " " << ((b->insert(295))==false) << std::endl;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 148 << " " << (b->remove(227)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(328))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(106)) << std::endl;
*b=*a;
std::cout << "Line no:" << 158 << " " << ((b->remove(496))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(308))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 162 << " " << (a->remove(227)) << std::endl;
*a=*b;
std::cout << "Line no:" << 164 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->remove(237))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(302)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(192) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(106))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(107))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(97))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(384)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(107)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(406)) << std::endl;
*a=*b;
std::cout << "Line no:" << 190 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(158)) << std::endl;
*b=*b;
std::cout << "Line no:" << 193 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(295))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->remove(230))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->remove(288))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(306)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(192))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(495)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(480))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(96)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(158))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 222 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(220)) << std::endl;
*a=*b;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (a->insert(399)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
