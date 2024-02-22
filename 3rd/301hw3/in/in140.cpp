#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(51))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(176))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->remove(437))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(317)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(343))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(176)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (a->insert(103)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(185))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(253)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(54)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(103)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(468)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(236)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 46 << " " << (a->insert(428)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (a->insert(452)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 51 << " " << ((b->insert(428))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(490)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (b->remove(291)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(428)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->insert(452))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << ((b->insert(316))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(236)) << std::endl;
*b=*b;
std::cout << "Line no:" << 69 << " " << ((b->remove(16))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(316)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(452))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 75 << " " << ((a->remove(213))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(193)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->remove(1))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(291)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(129))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(452)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(410))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(102))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(283)) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 96 << " " << ((b->insert(230))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(24)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(380)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->remove(299))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(452))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(316)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(452)) << std::endl;
*b=*b;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->insert(102)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 122 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(193)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 125 << " " << ((a->remove(192))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(276))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 130 << " " << (b->remove(24)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(332)) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 134 << " " << ((a->remove(282))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(425)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(189)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 139 << " " << ((a->insert(102))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 142 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(102)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(380)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(230))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(283)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(406)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(161)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(251)) << std::endl;
*a=*b;
std::cout << "Line no:" << 164 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(316)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->remove(444))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(77)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(376) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(376) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(376) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(376) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 179 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(376))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(226))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 184 << " " << ((b->insert(161))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(161))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->remove(396))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(161)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->insert(497))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(467))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 200 << " " << ((a->insert(102))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->insert(280))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(384))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->remove(125))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->remove(479))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(62))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(316)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 212 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(67)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << (a->remove(376)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 217 << " " << (a->remove(102)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(467)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(145))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->remove(245))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(384)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(495))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(43)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->insert(457)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
