#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(408))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(408))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(316))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(3)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->remove(316)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(38))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(275))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(275)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(222)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 28 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(191)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->insert(222))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(46)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << ((a->remove(274))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->insert(46))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(493)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(65)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 46 << " " << (b->remove(235)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->remove(421))==false) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(251) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 58 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 59 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << ((a->insert(46))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(46)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 64 << " " << ((a->insert(113))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->insert(222))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(390))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->remove(203))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(91))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 73 << " " << (b->insert(305)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << ((b->insert(91))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(439)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 79 << " " << ((b->insert(113))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 81 << " " << (a->remove(448)) << std::endl;
*b=*b;
std::cout << "Line no:" << 83 << " " << (a->remove(439)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(113)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(420))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->insert(91))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(263)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(184)) << std::endl;
*b=*b;
std::cout << "Line no:" << 95 << " " << (a->insert(120)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << (a->remove(120)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(480))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(396)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(305)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(366)) << std::endl;
try{std::cout <<"Line no:" << 108 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 116 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(192)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(393)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(439))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(376)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(307)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 128 << " " << (a->remove(91)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->insert(184))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(305))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(305))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->insert(486))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(390))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->insert(320))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(116)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(113))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->remove(467))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->remove(17))==false) << std::endl;
b->printPretty();
*b=*b;
a->printPretty();
std::cout << "Line no:" << 151 << " " << ((b->remove(338))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(91)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(222)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(113)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << (a->remove(85)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 159 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->remove(47))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(222)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(390))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(192)) << std::endl;
try{std::cout <<"Line no:" << 166 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 174 << " " << ((a->remove(116))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 177 << " " << ((b->insert(499))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 179 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(433)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << (a->remove(441)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->insert(439))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(357))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(419)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->remove(384))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->remove(347))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(120)) << std::endl;
*b=*a;
std::cout << "Line no:" << 192 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->remove(254))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(320))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->remove(349))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(136)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(423)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 203 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(1))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 208 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(1))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->remove(168))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(161))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(423))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(209)) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 221 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(140))==false) << std::endl;
try{std::cout <<"Line no:" << 224 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getFloor(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getCeiling(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getNext(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->get(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 232 << " " << (b->remove(175)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
