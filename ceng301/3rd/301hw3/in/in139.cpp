#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(430))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(474)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(133)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 13 << " " << (a->remove(133)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << ((a->insert(474))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(474)) << std::endl;
*b=*b;
std::cout << "Line no:" << 19 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->remove(231))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->remove(220)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(74)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->remove(74)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(163)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(241)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(105)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 37 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(325)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->remove(8))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(372)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->remove(106))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(234)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << ((b->remove(483))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(325)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(234)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(464)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(372)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(73)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(15)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 75 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(185))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(226)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(13)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 82 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(236))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 88 << " " << ((b->remove(125))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 90 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(288))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 99 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(88)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 106 << " " << ((b->insert(438))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(393)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(236)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->insert(438))==false) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->remove(236)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(342)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(378)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 125 << " " << (b->remove(350)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->remove(364))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(479)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(438))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(362))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->remove(387))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(73)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(63)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(288)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(410))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 144 << " " << ((a->insert(133))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(258))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(281))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << ((b->insert(103))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(492)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(479))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(207))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->remove(347))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(460))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(362)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(217)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(226))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(460)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 185 << " " << (b->remove(88)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(107))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->remove(267))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->remove(186))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->remove(171))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->remove(297))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(418)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(73))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << ((b->insert(438))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->remove(406))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(156)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 210 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(156)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->insert(210))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 225 << " " << ((a->remove(336))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(404)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(133) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(133) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(133) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(133) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->remove(385)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
