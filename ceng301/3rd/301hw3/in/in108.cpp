#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(158)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(373))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(407))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(135))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(492))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(423))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(492)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(68))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(180))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(176))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(23))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(416))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(248))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(400))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(307))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << (a->insert(390)) << std::endl;
try{std::cout <<"Line no:" << 46 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 47 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getFloor(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getCeiling(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getNext(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->get(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 54 << " " << ((a->remove(154))==false) << std::endl;
std::cout << "Line no:" << 55 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 56 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 57 << " " << ((a->remove(197))==false) << std::endl;
std::cout << "Line no:" << 58 << " " << (a->insert(485)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 62 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(158)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(308))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 69 << " " << (a->remove(271)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 72 << " " << ((b->insert(92))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(251)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 75 << " " << ((a->insert(23))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(23)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->remove(326))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(45)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 85 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(154))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(399)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << ((b->insert(478))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(315))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(92))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->remove(431))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(423))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(485)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->insert(390))==false) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(257) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(257) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(257) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(257) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << (b->insert(204)) << std::endl;
std::cout << "Line no:" << 114 << " " << ((b->insert(423))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << ((b->remove(89))==false) << std::endl;
std::cout << "Line no:" << 116 << " " << ((a->insert(315))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(17))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(477))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << ((b->insert(427))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->insert(92))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(315)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(338))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 132 << " " << (b->remove(399)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(23)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(51)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(188))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(375)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(78)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(478)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(66)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(252)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 151 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->insert(423))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(45)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->remove(353))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(233)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(17))==false) << std::endl;
try{std::cout <<"Line no:" << 163 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getFloor(291) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getCeiling(291) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getNext(291) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->get(291) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
std::cout << "Line no:" << 172 << " " << ((a->remove(25))==false) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->remove(233)) << std::endl;
*b=*a;
std::cout << "Line no:" << 177 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(339)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 184 << " " << (b->insert(358)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 186 << " " << ((b->remove(290))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 188 << " " << ((b->remove(55))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(315))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(386)) << std::endl;
*a=*b;
std::cout << "Line no:" << 198 << " " << ((b->insert(407))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(386)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(287))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(386)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(257)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(362)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->remove(204))==false) << std::endl;
try{std::cout <<"Line no:" << 222 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getFloor(406) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getCeiling(406) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getNext(406) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->get(406) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 230 << " " << (a->remove(275)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
