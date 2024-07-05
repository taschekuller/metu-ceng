#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 7 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 8 << " " << (b->insert(226)) << std::endl;
*b=*a;
std::cout << "Line no:" << 10 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((b->remove(54))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((b->insert(452))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->insert(452))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((b->remove(101))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->remove(74))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(176)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(23))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->remove(110)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(415)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 34 << " " << ((b->remove(415))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(3))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(170)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->insert(331)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << ((b->insert(322))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(304)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(386))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(366)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(304)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(414)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->insert(3))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 64 << " " << (b->insert(450)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(331))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->remove(330))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->remove(331))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(198)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->remove(36))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(450)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(198)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(393))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(3)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(197)) << std::endl;
*a=*b;
std::cout << "Line no:" << 82 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(302))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(471))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->remove(259))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(57)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(197)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->remove(58))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(434)) << std::endl;
*b=*b;
std::cout << "Line no:" << 101 << " " << (a->remove(319)) << std::endl;
*a=*b;
std::cout << "Line no:" << 103 << " " << ((b->remove(269))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(120)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(471))==false) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 119 << " " << ((a->insert(118))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->remove(424))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(395))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(126)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(216)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 131 << " " << ((b->remove(270))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(461)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 138 << " " << ((a->insert(183))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(61))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->remove(296))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(165)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(99)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 148 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(485)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(183)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(118))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(216)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(183)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 160 << " " << ((a->insert(249))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 162 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(397))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(397))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(319)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(218) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << ((b->insert(118))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << ((b->insert(309))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(118)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(397))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->remove(260))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(309)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 187 << " " << ((b->remove(170))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(218)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(448))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->remove(473))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(402))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->remove(132))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(131)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(461)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(117))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(402))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(122))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(251)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 216 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(402)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 219 << " " << (a->remove(356)) << std::endl;
*b=*a;
std::cout << "Line no:" << 221 << " " << ((a->remove(221))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(461))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(10)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(117) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(117) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(117) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(117) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << ((b->insert(383))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
