#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(10)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(375))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(385))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(122)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 18 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(145))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(145))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(110))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(179))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(392))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(289))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(385))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(260)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 46 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(197))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(462)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->insert(462))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(46)) << std::endl;
b->printPretty();
*b=*b;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(342) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(210)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << (b->insert(317)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(84))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(375))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->remove(160))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(144)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(46)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(21))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->insert(317))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(83)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(317))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(220))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(314)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(294)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(385))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(493)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(157)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(6)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(263)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(294)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(179)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(185) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(185) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(185) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(185) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(425))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(144)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(148)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 130 << " " << ((b->remove(33))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(271)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->insert(59))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(385)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(21)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 142 << " " << ((a->insert(25))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(455))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(247))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(99)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(344))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(21)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(362)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->remove(483))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(355)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->remove(334))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->insert(344))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << ((a->remove(250))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->insert(25))==false) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(260))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 183 << " " << (b->remove(8)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(262))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(344))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(344))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->remove(465))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->remove(196))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 198 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(248)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->remove(215))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(432)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << ((a->remove(4))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 206 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(346))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(389)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(230)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 212 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(429)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(295)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(432)) << std::endl;
*a=*a;
std::cout << "Line no:" << 219 << " " << ((a->insert(99))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->remove(85))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->insert(25))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(196)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 229 << " " << (b->remove(72)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(94)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
