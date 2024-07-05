#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(471))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(462)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(376)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(250))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(250)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(245)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 25 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(374))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(63)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((b->remove(353))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->insert(391))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(391))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(9)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(168)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->insert(457))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(184)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(269)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(93) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(93) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(93) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(93) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->insert(395)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 63 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(93))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(347))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(326))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(456)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 71 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(456)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(457)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(347)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(33)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(265)) << std::endl;
*b=*a;
std::cout << "Line no:" << 83 << " " << ((a->insert(269))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(395))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(40)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(141)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(87)) << std::endl;
*b=*a;
std::cout << "Line no:" << 94 << " " << ((b->insert(269))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(300)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 99 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(232))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(395))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(318)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(16)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 109 << " " << (a->remove(224)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(179)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(350) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(350) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(350) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(350) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->insert(434)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 123 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(185)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(93)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->remove(69))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(93)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(292)) << std::endl;
*a=*a;
std::cout << "Line no:" << 137 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(300)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(93))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(16)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(326))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(300))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(424)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(447)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << ((b->insert(256))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 156 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(395)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(127)) << std::endl;
*b=*b;
std::cout << "Line no:" << 160 << " " << ((b->remove(214))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(77)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << ((a->insert(269))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((a->insert(240))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 169 << " " << (a->insert(264)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(248) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(248) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(248) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(248) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->insert(300))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(350))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(434))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(449)) << std::endl;
*a=*a;
std::cout << "Line no:" << 189 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(232)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->remove(487))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(93)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(137)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (a->insert(336)) << std::endl;
*a=*b;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 210 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(335)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(256)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(170)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << ((b->insert(329))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(277)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(484)) << std::endl;
*b=*b;
std::cout << "Line no:" << 222 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(32)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(86) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(86) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(86) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(86) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->insert(374)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
