#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(234))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(189)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(56)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << ((a->insert(119))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(494))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(119))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(437)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << ((a->insert(453))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(329)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << ((a->insert(109))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(329))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(455))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(224)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 40 << " " << ((a->insert(189))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(109))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(495)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 48 << " " << (b->remove(199)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 50 << " " << ((a->remove(216))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(109))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(70)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->remove(161))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(434)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 69 << " " << ((a->insert(280))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(42))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 76 << " " << ((b->insert(224))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(174))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->remove(395))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(46))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(341)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(109))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->remove(298))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(396))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(224)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(404)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 101 << " " << ((b->insert(46))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(234))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->insert(437))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(415))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(10)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->insert(107)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(201)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(61)) << std::endl;
*a=*b;
std::cout << "Line no:" << 125 << " " << (a->insert(255)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << ((b->remove(255))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(244))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(109)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->insert(234))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(85)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << ((b->insert(234))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(129)) << std::endl;
*b=*a;
std::cout << "Line no:" << 149 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(12))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(189))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(248)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(126)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(408)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(2)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(56) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 178 << " " << ((b->insert(188))==false) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 181 << " " << ((b->insert(357))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(293)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(423)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(107))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(232))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(52)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->remove(308))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(188))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->remove(214))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(56)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(188)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(357))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->remove(208))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 204 << " " << ((a->insert(232))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(331))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 207 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(413))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->remove(359))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 218 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(494)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(313)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 224 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(310)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(396) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(396) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(396) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(396) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->remove(280)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
