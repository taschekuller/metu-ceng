#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(43)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(166))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(456))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(418))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(418))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 22 << " " << ((a->remove(83))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(490)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(31))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(216))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(293)) << std::endl;
*b=*a;
std::cout << "Line no:" << 34 << " " << (a->insert(359)) << std::endl;
*a=*b;
std::cout << "Line no:" << 36 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(236)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(216)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(31)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(216)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (a->remove(490)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->remove(339))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->insert(236))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(305)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(465)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->remove(342))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(31) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(31) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(31) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(31) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->remove(293)) << std::endl;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 64 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(36)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(451)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(265)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(301)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(265)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(293))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(115))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(28)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(236))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(236))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(115)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(37))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(293)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(351)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(404)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << ((a->insert(121))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->remove(437))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->remove(368))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(45)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 107 << " " << ((b->remove(233))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->insert(236))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(236)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(173) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(173) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(173) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(173) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(16)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(413))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(413)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(386)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(232))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 130 << " " << ((b->remove(176))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(196))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << ((a->insert(419))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(287))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(386)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << ((a->insert(173))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->insert(232))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->insert(232))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(221)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(232))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(250)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(232)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 155 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(440)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(10)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->insert(28))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(57)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->remove(104))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(411)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(261)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 168 << " " << (a->remove(121)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((b->insert(250))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(82)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->insert(49))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(293))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(282)) << std::endl;
*b=*a;
std::cout << "Line no:" << 189 << " " << ((a->insert(198))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(198))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(111)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(116)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(45)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (b->insert(431)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(293)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(338)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << ((b->remove(422))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(119)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(116)) << std::endl;
*a=*b;
std::cout << "Line no:" << 208 << " " << (b->remove(111)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(277))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(118))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(277)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(430)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(430)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(198)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(173))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->insert(60))==false) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(107) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(107) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(107) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(107) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
