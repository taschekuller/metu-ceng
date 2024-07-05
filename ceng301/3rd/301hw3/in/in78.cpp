#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(364))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(298))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(298))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 16 << " " << ((b->remove(192))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(244)) << std::endl;
*a=*a;
std::cout << "Line no:" << 19 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(333)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 23 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(143)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->remove(244)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->insert(143))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((b->remove(412))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->remove(472))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->insert(426))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(316)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(316))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(316))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(316))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(426)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 50 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(53)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->remove(278))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(22)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(164) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(164) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(164) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(164) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(90)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(21))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(373)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(351))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 78 << " " << ((b->insert(78))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(180))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->remove(161))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(163))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(320)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (b->remove(303)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(333))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(183))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(78)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(146)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->remove(62))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(164)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(298)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->remove(203))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(481)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(282))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(180))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(100)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(75) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(75) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(75) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(75) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
std::cout << "Line no:" << 122 << " " << ((b->remove(15))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(126)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(31))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(373)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(78)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(128)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->remove(327))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->insert(470))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(320)) << std::endl;
*a=*b;
std::cout << "Line no:" << 148 << " " << ((b->insert(298))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(297))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(190)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->insert(298))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(482))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->remove(341))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(302))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(202)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(267))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->insert(440))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(271)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(179)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(470)) << std::endl;
*a=*a;
std::cout << "Line no:" << 185 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->remove(111))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->remove(142))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(61))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->remove(321))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (b->insert(8)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(180)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 202 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(461))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(411)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(391)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(320))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(265)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 211 << " " << ((a->insert(440))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(402))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(180))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(303)) << std::endl;
*a=*b;
std::cout << "Line no:" << 218 << " " << (a->insert(354)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(420)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 223 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->insert(115))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((b->insert(29))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
