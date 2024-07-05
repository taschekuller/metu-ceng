#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(261)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(125))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 19 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(239)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(257))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(182)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(278)) << std::endl;
*b=*b;
std::cout << "Line no:" << 32 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->remove(62))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(311)) << std::endl;
*b=*b;
std::cout << "Line no:" << 36 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->insert(257))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(276))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(257)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(470))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(279)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 46 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->insert(168))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 63 << " " << (b->insert(450)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(264))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(325)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(168)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(288)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(325)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(276))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(294)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(470)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->remove(472))==false) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 92 << " " << (b->remove(276)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->insert(450))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->remove(307))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->remove(223))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(175)) << std::endl;
*b=*b;
std::cout << "Line no:" << 100 << " " << ((a->remove(392))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(276))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(278)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 105 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(469)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->remove(273))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 109 << " " << ((a->insert(255))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(320)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((b->remove(135))==false) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->remove(380)) << std::endl;
*b=*b;
std::cout << "Line no:" << 123 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(382)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(4))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->remove(386))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(365)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << ((b->remove(215))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->insert(255))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(450)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(276))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->remove(438))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(499))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(255)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(373)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(94))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(413)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->remove(17))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(442)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(4)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(81)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(491)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->remove(191))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(251)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << ((b->remove(26))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(251)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 168 << " " << ((b->insert(264))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(471)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(380) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(380) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(380) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(380) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((b->remove(18))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(42))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(447)) << std::endl;
a->printPretty();
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 187 << " " << ((b->insert(264))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 189 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(117))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->remove(438))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->remove(149))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(447)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(471)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << (a->remove(276)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(264))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(380)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(472))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(470)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(491)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(235)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(2)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(243)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(224)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 216 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(243))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->insert(301))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(495)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->insert(117))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->insert(243))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->remove(149))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->remove(129))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(101) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << ((b->insert(349))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
