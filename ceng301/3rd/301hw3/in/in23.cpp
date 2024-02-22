#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(418))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(409)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->remove(444)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(100))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(100))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 20 << " " << (a->insert(40)) << std::endl;
*a=*b;
std::cout << "Line no:" << 22 << " " << ((a->remove(438))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(116)) << std::endl;
*b=*b;
std::cout << "Line no:" << 25 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(334))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(116)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(334)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 34 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(68))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(134)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(134)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(205)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 45 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->remove(61))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(445)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->remove(161))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->remove(40)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(205) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(205) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(205) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(205) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
*a=*b;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (b->remove(494)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 67 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(184)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << (a->insert(495)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 74 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(382))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(71)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(445))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(83))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(396)) << std::endl;
*a=*b;
std::cout << "Line no:" << 84 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(232)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(297))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(261)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 91 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(445))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(81)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(184)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(382)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << ((a->remove(368))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(301)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(67))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(77))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 127 << " " << (a->remove(253)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->remove(210))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(445)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (a->remove(81)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << ((a->insert(301))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->insert(307))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(299)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(297)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(500)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->insert(488))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(220))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(355)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(191)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->insert(314))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(315))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(102))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 167 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(349))==false) << std::endl;
*b=*a;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(193) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(269))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(150))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(109)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->remove(155))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(404))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(488))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(428))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(412)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 192 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->remove(282))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(349)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(390)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << ((b->insert(208))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(212)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(404))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(244))==false) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(18))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 216 << " " << ((a->insert(314))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(366)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 219 << " " << ((b->insert(212))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(193)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->remove(193)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
