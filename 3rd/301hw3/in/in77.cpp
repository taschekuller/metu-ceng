#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(386))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(281)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(498))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(293))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(50)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(24)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 23 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->insert(482))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(482)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->remove(441))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->remove(91))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->remove(486))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->remove(38))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(58))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 39 << " " << (b->insert(387)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(259)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 48 << " " << ((a->remove(177))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(35))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(50))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(49) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(142)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 63 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((b->insert(326))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->insert(208))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(357)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(160)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(392)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 74 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(35)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(115))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(387)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->remove(311))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(203)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 84 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(463)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(239))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(494))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->remove(310))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->remove(386))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(120))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(208)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->remove(139))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(43)) << std::endl;
*b=*a;
std::cout << "Line no:" << 106 << " " << (a->insert(62)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->remove(240))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(444)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 120 << " " << ((b->remove(425))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 122 << " " << (b->remove(58)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->remove(51))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(267)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->insert(70))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(206)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->insert(48))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(48)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(368))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 133 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(239)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 137 << " " << ((b->remove(186))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 139 << " " << (a->remove(28)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(160)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 142 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->remove(328))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(267))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(481)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(361)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(256))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(406)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 158 << " " << (a->remove(406)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(30))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(218)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 167 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(378))==false) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(256)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 180 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->insert(218))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(341)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 186 << " " << (b->remove(50)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(53)) << std::endl;
*a=*b;
std::cout << "Line no:" << 195 << " " << (b->insert(368)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 198 << " " << (b->remove(406)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->insert(24))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(53)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(265)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(368))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 211 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(498))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(53))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(450))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(70))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->insert(256))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(484))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(259)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->remove(498)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
