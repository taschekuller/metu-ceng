#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(163))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(418)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(243)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(381)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 26 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(187))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(257)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 34 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(369))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(355)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(165)) << std::endl;
*b=*b;
std::cout << "Line no:" << 44 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(165))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(210)) << std::endl;
*b=*a;
std::cout << "Line no:" << 49 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->remove(189))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << ((a->remove(6))==false) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(99))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(99)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(165)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(295))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 71 << " " << (b->insert(419)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(443)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(107))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->remove(274))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(469))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(386)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 90 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(455)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->remove(229))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->remove(129))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(99)) << std::endl;
*a=*a;
std::cout << "Line no:" << 100 << " " << (a->insert(132)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(406)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(71)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(343)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 112 << " " << (b->insert(125)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->remove(125)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 123 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(27)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 126 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((b->remove(7))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(390)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(111))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(429))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(492))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(302)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(369)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->remove(24))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(419)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->insert(334))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(29)) << std::endl;
b->printPretty();
*a=*a;
a->printPretty();
std::cout << "Line no:" << 163 << " " << (a->insert(353)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 165 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->insert(246))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(406))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->insert(221)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << ((b->insert(366))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(206))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(386)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 190 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(246)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(206))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(366)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(107)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(6))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(2))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(240))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(333)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(71)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(406))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(415))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->remove(78))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->remove(460)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(73)) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->insert(229)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(6) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(6) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(6) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(6) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(465)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
