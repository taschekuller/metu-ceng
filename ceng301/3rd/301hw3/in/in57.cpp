#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(497))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((b->remove(349))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (b->insert(249)) << std::endl;
*a=*b;
std::cout << "Line no:" << 14 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(226))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(337)) << std::endl;
*b=*a;
std::cout << "Line no:" << 22 << " " << (b->insert(137)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 24 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(325)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->insert(226))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(226)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(357))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(203)) << std::endl;
*b=*b;
std::cout << "Line no:" << 36 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(105)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((b->remove(189))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->remove(477))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(370)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(437)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->remove(123))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(235)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(146) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(146) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(146) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(146) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->insert(156))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(137)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(359)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(97))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(118))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(325)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(238))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(457)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(372))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(33))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(143)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << ((a->remove(276))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->insert(432))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->insert(156))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->remove(117))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(460)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(471)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(77)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 97 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(77))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(32))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(329))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(198)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->insert(432))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(432)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(156)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->remove(127))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(57)) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 118 << " " << (b->insert(274)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 121 << " " << (a->remove(442)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(380)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(274))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->insert(214))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(230))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((b->insert(274))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(202)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(202))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(198)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(359)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->remove(130))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->remove(491))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(156)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(32))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(346)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(134)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(385)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->insert(214))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(314)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->remove(186))==false) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(99) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 177 << " " << ((a->insert(77))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(438)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->remove(487))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 183 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(380))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(121))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(7)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(377)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 199 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(411)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(202))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(204))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(414))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(118)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (b->insert(181)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(220)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(472)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (b->remove(414)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(300)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 223 << " " << (b->insert(38)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(83)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (b->remove(229)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
