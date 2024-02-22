#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(141)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 10 << " " << ((a->remove(179))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(473)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->insert(285)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->remove(285)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(222)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 20 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(239)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(255))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->insert(61))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(491)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(21))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(21)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(279)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(477)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->remove(157))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(491)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(61))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(477)) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(477) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 59 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(241)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(109)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((b->insert(279))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(139)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(255))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(355)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(241)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(281)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(64)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(489))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(387)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 97 << " " << (a->remove(489)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 99 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(401))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->remove(483))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->remove(47))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(249)) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(8) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(8) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(8) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(8) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(145)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 120 << " " << ((a->insert(227))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(123)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(239))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(392)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 127 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(95)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(401)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->remove(424))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(182)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(260)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(387)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (b->remove(281)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(459))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(110))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->remove(343))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->remove(191))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(212)) << std::endl;
b->printPretty();
*a=*b;
std::cout << "Line no:" << 161 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(363)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(394)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(329) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 175 << " " << ((b->remove(186))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << ((a->insert(61))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(69)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << ((b->remove(126))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 182 << " " << (a->insert(13)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(19))==false) << std::endl;
a->printPretty();
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 193 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(8))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(176)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(286))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(477)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(182))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(286))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 209 << " " << ((b->remove(164))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(287))==false) << std::endl;
b->printPretty();
*a=*b;
std::cout << "Line no:" << 213 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->insert(286))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(138)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 219 << " " << (a->remove(438)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 222 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(495)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(231)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(96) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << ((a->insert(96))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
