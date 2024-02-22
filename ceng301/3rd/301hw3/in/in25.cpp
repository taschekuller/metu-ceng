#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(52))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(52))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(462))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(462)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(323)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 20 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(52))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((b->remove(364))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(304)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(304)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(8))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(284)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 39 << " " << (b->remove(22)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(148)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(29)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(467))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(266)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(467) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->remove(266)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(151)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(467))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(214))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(52)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(184))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(54)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(178)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->remove(266))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 82 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->remove(160))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 86 << " " << ((b->insert(279))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(320)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->insert(338))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 90 << " " << ((b->remove(490))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(191)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(467))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(284)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(279))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(214)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(54))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->remove(260))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(468)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(130))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(184)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(319)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(338) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(338) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(338) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(338) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 119 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(319)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(140)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(72)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->insert(281))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 128 << " " << (b->remove(140)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(482))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((a->insert(281))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(213))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(192)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(338)) << std::endl;
a->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 146 << " " << (b->insert(427)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << ((b->insert(51))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(347)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(427)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 152 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(408)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(387)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(283))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->remove(269))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->remove(13))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(123)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(363)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(283))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(281)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(27)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(309)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(309) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(309) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(309) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(309) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->remove(475))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->insert(176))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(427)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(145)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(408)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(365)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 189 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(92)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(470)) << std::endl;
*a=*a;
std::cout << "Line no:" << 193 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(461)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 196 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(309))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->remove(190))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(470)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(101))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(427))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(319))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(283)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(192))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(272)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(192)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(131)) << std::endl;
*a=*a;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << ((b->remove(164))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
