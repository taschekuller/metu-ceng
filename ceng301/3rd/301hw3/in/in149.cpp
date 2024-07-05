#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(130)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(324)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(56)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(109)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(192))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(281))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(281))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(281))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(129))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(486)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(31)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(379))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(281)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(441)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->remove(401))==false) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << (a->remove(307)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 59 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(453)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 62 << " " << (a->insert(152)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 64 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->remove(483))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(426))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(14)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 79 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(466)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(418)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (a->remove(222)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->remove(285))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 92 << " " << (a->remove(272)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(418))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(418)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(227))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(227))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->remove(494))==false) << std::endl;
try{std::cout <<"Line no:" << 102 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getFloor(418) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getCeiling(418) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getNext(418) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->get(418) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 110 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->insert(14))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 113 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 114 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->remove(127)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->remove(418)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(15)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 121 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->remove(483))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << ((a->remove(92))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(378)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 131 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(400))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(17)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(227)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(60))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (a->remove(96)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(282)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(14))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->remove(306))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(60))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->remove(66))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(60)) << std::endl;
try{std::cout <<"Line no:" << 160 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getFloor(170) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getCeiling(170) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getNext(170) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->get(170) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 170 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((a->insert(194))==false) << std::endl;
std::cout << "Line no:" << 172 << " " << ((b->remove(288))==false) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((b->remove(442))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << ((a->insert(194))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << ((a->remove(286))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(62)) << std::endl;
b->printPretty();
*a=*b;
std::cout << "Line no:" << 181 << " " << (a->remove(282)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 183 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->remove(132))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(282)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 194 << " " << ((a->remove(149))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(414))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 199 << " " << ((a->remove(401))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(103)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(267))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(267)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->remove(33))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(334)) << std::endl;
*b=*b;
std::cout << "Line no:" << 217 << " " << (a->remove(136)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(155)) << std::endl;
try{std::cout <<"Line no:" << 219 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getFloor(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getCeiling(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getNext(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->get(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 227 << " " << (b->insert(229)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
