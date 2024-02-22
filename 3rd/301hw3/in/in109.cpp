#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->remove(392))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(441))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 15 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(153)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(268)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(278)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(299))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(382))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->remove(494))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(153))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 29 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(485)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->remove(280)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((b->insert(485))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(124)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->insert(287))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(153))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 43 << " " << (b->remove(485)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(467)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 54 << " " << (a->remove(124)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 64 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(23)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(461))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->insert(269))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << ((a->insert(467))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((b->remove(277))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(467)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 74 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(19)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(23)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->remove(131))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->remove(171))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(251)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(494))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(144)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(494)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(191))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(236)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(10)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(236)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->insert(191))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 110 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((b->remove(169))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(138)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(375) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << ((b->insert(130))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->remove(82))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(452)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 130 << " " << (b->insert(141)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(443)) << std::endl;
*a=*b;
std::cout << "Line no:" << 138 << " " << ((b->insert(426))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(497)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(373))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(38)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(19)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(426))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(46)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 150 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(234)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 153 << " " << (b->remove(253)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(442))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(442)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->insert(31))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(191)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(87))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->remove(283))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->remove(426)) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->insert(174)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(262)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << ((a->remove(379))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->insert(87))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(174)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(497)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(243)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->insert(97))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->remove(162))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(31))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(178))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(482))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(326))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(351)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(155)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(23)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->remove(409))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(174)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 223 << " " << ((a->insert(191))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(178)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->insert(219))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((a->insert(40))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
