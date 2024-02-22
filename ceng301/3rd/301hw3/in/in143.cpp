#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(464))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(93))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(480))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(28)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(47)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(110))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(121)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 25 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(244)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << ((a->insert(62))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 31 << " " << (b->insert(308)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << ((a->insert(133))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((b->insert(308))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(308)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(460)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(293)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(62)) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->insert(73)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 60 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->insert(47))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 63 << " " << (a->remove(96)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(115)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(120))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(431)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->insert(431))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(431)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(160))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(72)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(133)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 79 << " " << ((b->insert(160))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->remove(422))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(374)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 85 << " " << ((a->insert(395))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->remove(351))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(47))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(191)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << ((a->remove(143))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(195))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(469)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 102 << " " << (a->remove(481)) << std::endl;
*b=*a;
std::cout << "Line no:" << 104 << " " << (a->remove(47)) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 114 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->insert(243))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 119 << " " << ((b->insert(243))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 121 << " " << ((a->insert(121))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(243))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(27))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(52))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->remove(391))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(117)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(121))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->insert(195))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(224)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 142 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(73)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(499))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(348)) << std::endl;
*b=*a;
std::cout << "Line no:" << 149 << " " << (b->insert(277)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << ((b->remove(51))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(277)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->remove(497))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(49))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->remove(105))==false) << std::endl;
try{std::cout <<"Line no:" << 163 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getFloor(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getCeiling(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getNext(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->get(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 171 << " " << ((a->remove(35))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 173 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 174 << " " << ((b->remove(67))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->insert(49))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(52)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(227))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(199))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(396))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(334)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 188 << " " << (b->insert(442)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << ((b->remove(56))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(52))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(492)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 198 << " " << (a->remove(73)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(73)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(169)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(52)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(268)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(173)) << std::endl;
*a=*b;
std::cout << "Line no:" << 212 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->remove(62))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(311)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 216 << " " << ((b->insert(49))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(396)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(359)) << std::endl;
try{std::cout <<"Line no:" << 221 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getFloor(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getCeiling(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getNext(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->get(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
