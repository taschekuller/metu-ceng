#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(113))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(314))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(60)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 13 << " " << ((a->insert(419))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((b->remove(466))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(78)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(15)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 20 << " " << (b->insert(132)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(78)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(330)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(330)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(419)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 31 << " " << ((a->remove(406))==false) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 34 << " " << (b->insert(155)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(113)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->remove(122))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(1))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(421)) << std::endl;
*a=*a;
std::cout << "Line no:" << 45 << " " << (a->insert(88)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << (b->insert(156)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 49 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(221)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(11)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->remove(479))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(175))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(156)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << ((a->insert(1))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->remove(426))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(442)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(221))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 80 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->insert(175))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(135)) << std::endl;
*a=*b;
std::cout << "Line no:" << 90 << " " << ((a->insert(143))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(122)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->insert(176))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(132))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 96 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(127))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(225))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 104 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(225))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(143))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(34)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(225) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(225) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(225) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(225) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(176)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->remove(71))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->insert(308))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(35)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(170)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(11)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(354)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 140 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(225)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(178))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(176)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(34)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 151 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(111)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << (b->insert(219)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(308)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(304)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(374))==false) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(296))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(166)) << std::endl;
*a=*b;
std::cout << "Line no:" << 169 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(341)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(401)) << std::endl;
*b=*b;
std::cout << "Line no:" << 183 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(219)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(475)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->insert(343))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 198 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(52)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 204 << " " << (a->insert(368)) << std::endl;
*a=*b;
std::cout << "Line no:" << 206 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(201))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(475))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(293)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(369)) << std::endl;
*a=*a;
std::cout << "Line no:" << 218 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->remove(208))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(193)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(63)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 225 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(337)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(35) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(35) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(35) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(35) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
