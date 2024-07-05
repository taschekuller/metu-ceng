#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(316)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(370))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(316)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(236))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(235))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(163)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(433)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(332))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(351))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(343))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(416)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(430)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(411)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->insert(206))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(275)) << std::endl;
try{std::cout <<"Line no:" << 48 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getFloor(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getCeiling(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getNext(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->get(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 56 << " " << (a->insert(380)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 58 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(51)) << std::endl;
*a=*a;
std::cout << "Line no:" << 61 << " " << ((b->remove(197))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(181)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(489))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(411)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(288)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(265)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 74 << " " << ((a->insert(426))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(108))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(355)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 79 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(33))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(380))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(489)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(181))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(13)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->remove(251))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->remove(124))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 93 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(195)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 98 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(380)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 102 << " " << (b->remove(181)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(288)) << std::endl;
*b=*b;
std::cout << "Line no:" << 105 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(51)) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(195) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(195) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(195) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(195) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 116 << " " << (b->remove(169)) << std::endl;
std::cout << "Line no:" << 117 << " " << ((a->insert(139))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << ((b->insert(478))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(478))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(380)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(426))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->remove(431))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(369)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(478)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->remove(391))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(54)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(169))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(260))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(139))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(157)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->remove(285))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(50))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(191)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(323)) << std::endl;
*b=*a;
std::cout << "Line no:" << 150 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(198)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 154 << " " << (b->remove(13)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(289))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->remove(83))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 159 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(252))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(13)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(289)) << std::endl;
try{std::cout <<"Line no:" << 165 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getFloor(409) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getCeiling(409) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getNext(409) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->get(409) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 173 << " " << ((a->insert(169))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((b->insert(449))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->remove(153))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(324)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(147))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(409)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(198)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(468)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(416)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->remove(345))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->remove(340))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(293)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(449)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->remove(304))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(364)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->insert(333))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(443))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(228)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(334))==false) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 223 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getFloor(139) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getCeiling(139) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getNext(139) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->get(139) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 231 << " " << (b->remove(164)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
