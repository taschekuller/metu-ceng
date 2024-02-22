#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(427)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(6)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(134))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(460)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 19 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(419))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(119)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 24 << " " << (b->remove(497)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(134))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(473)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(495)) << std::endl;
*b=*a;
std::cout << "Line no:" << 34 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->remove(460)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(134)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(38)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 45 << " " << ((a->remove(235))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(494)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(80))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 63 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(337))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(215)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(337)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->remove(340))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 76 << " " << (b->insert(358)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->remove(150))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(80)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 83 << " " << ((a->remove(135))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(199)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(157)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->remove(290))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(83)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->remove(254))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(199))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(491)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->insert(491))==false) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->remove(126)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(243))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(34))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(350)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(113)) << std::endl;
*a=*a;
std::cout << "Line no:" << 134 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(83)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->remove(392))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 141 << " " << ((a->insert(448))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(433))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << ((b->insert(80))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->remove(187))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(467)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(61))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(129))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(183)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 163 << " " << (a->remove(116)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->remove(470))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(183)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(199) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(199) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(199) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(199) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->insert(139))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->insert(309))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 182 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(276))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(208)) << std::endl;
*b=*b;
std::cout << "Line no:" << 191 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(11)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 194 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->remove(152))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->remove(367))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(491)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(325))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(97)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 205 << " " << (b->insert(235)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(71)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(456))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(123)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->remove(4))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(338))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(154)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(469)) << std::endl;
*a=*b;
std::cout << "Line no:" << 222 << " " << ((a->remove(192))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->insert(76))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(425))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 227 << " " << ((a->insert(470))==false) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->remove(458)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
