#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(6))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 8 << " " << ((a->remove(488))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((b->insert(12))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 12 << " " << (b->remove(12)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->remove(370)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(338)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->insert(236))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->remove(236)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(450)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(272)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->remove(227)) << std::endl;
*b=*a;
std::cout << "Line no:" << 34 << " " << (b->remove(404)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(458))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(404)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(272)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(10)) << std::endl;
*b=*b;
std::cout << "Line no:" << 44 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(239)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(173)) << std::endl;
try{std::cout <<"Line no:" << 48 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getFloor(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getCeiling(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getNext(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->get(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 56 << " " << (b->remove(458)) << std::endl;
std::cout << "Line no:" << 57 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((a->insert(450))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 60 << " " << (b->remove(357)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 62 << " " << (b->insert(429)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 64 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(429)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 73 << " " << (a->remove(17)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(209))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->insert(458))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(395)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(10)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(347)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(489)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->remove(427))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(72))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(145)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(80)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << ((b->remove(213))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(382)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(404)) << std::endl;
try{std::cout <<"Line no:" << 106 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getFloor(30) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getCeiling(30) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getNext(30) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->get(30) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 114 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 115 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->remove(481))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->insert(81))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((a->insert(458))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(272))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (b->insert(406)) << std::endl;
*b=*b;
std::cout << "Line no:" << 124 << " " << ((b->remove(310))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(272)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(162))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(153)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(458))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(407)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(404)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(66)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(419)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(178))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(397)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->insert(30))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(272)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->remove(323))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(6)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(458)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 157 << " " << (b->remove(272)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 160 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(66)) << std::endl;
try{std::cout <<"Line no:" << 164 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getFloor(81) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getCeiling(81) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getNext(81) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->get(81) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 172 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 177 << " " << ((b->insert(298))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->remove(447))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(127)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 184 << " " << (b->remove(209)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 186 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(199)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(204)) << std::endl;
*a=*b;
std::cout << "Line no:" << 193 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(204)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 197 << " " << (b->insert(468)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << ((b->remove(170))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 201 << " " << (b->remove(419)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(233)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(233)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(162)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(288)) << std::endl;
*b=*b;
std::cout << "Line no:" << 207 << " " << (b->remove(239)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(288))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(468)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(298))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(406))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(484))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(205)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 222 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getFloor(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getCeiling(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getNext(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->get(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
