#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(62)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->remove(82))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->remove(378))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(347)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(145))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(91)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(56))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(368)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->remove(56)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(270))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(153)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 30 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(290))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->remove(245))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(128)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << ((b->remove(128))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(270))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(108))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->remove(326))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(78))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(108)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << ((a->insert(54))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(153))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(153) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
std::cout << "Line no:" << 62 << " " << ((a->remove(149))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(54)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(270)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(251)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(384)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->remove(297))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(13)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 77 << " " << (a->insert(419)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 79 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->remove(489))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(255)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (b->insert(196)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(472))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(6)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(350))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->insert(350))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(167))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(304)) << std::endl;
*b=*b;
std::cout << "Line no:" << 94 << " " << (b->remove(350)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->remove(208))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(114)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(467))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(114)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 103 << " " << (a->insert(35)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (b->remove(255)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(251))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(176)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->remove(414))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(185)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 125 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(100)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->remove(448))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(138)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(324)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->insert(376))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(148))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(104)) << std::endl;
*a=*a;
std::cout << "Line no:" << 145 << " " << (b->remove(268)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(489))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(111))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(335)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 151 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(440))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(400)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << (b->remove(82)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(251)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 162 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->insert(331))==false) << std::endl;
*b=*b;
*b=*b;
std::cout << "Line no:" << 166 << " " << ((a->insert(122))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(144)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(400) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(400) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(400) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(400) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (a->insert(262)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 179 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(388))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 183 << " " << (a->remove(496)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(388))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(35))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(358)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(111)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 194 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->remove(219))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->remove(393))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->remove(441))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(207)) << std::endl;
*a=*b;
std::cout << "Line no:" << 204 << " " << ((a->insert(144))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(26))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(331))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(331))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(331))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->remove(63))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(90)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 223 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->remove(57))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->remove(332))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(306)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(339) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(339) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(339) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(339) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->insert(350)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
