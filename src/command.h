//typedef unsigned char BYTE;
#define BYTE unsigned char
#define UINT_32 unsigned int
#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))

//enum {
//    SHA1_DIGEST_LENGTH  = 20,
//    SHA1_BLOCK_SIZE     = 64,
    //             HMAC_BUF_LEN        = 4096
//    HMAC_BUF_LEN        = 64
//};


#define MAX_MESSAGE_LENGTH 4096
#define CCRDELTAbits    40 //bits
#define NTS_Challenge   8 // 64bits
#define AUTHDataMax     3
#define NTS_XMax        8
#define SEED			82

#define methodQueryAdj  1
#define methodQueryRep  2


//Tag State
#define READY           801 //only receive CmdQuery
#define ARBITRATE       802
#define REPLY           803
#define ACKNOWLEDGED    804
#define OPEN            805
#define SECURED         806
#define KILLED          807

//Flag in Table 6.20
//sessions
#define S0      0 //S0 inventoried
#define S1      1 //S1 inventoried
#define S2      2 //S2 inventoried
#define S3      3 //S3 inventoried
#define SessionA		0
#define SessionB		1
#define ALL		0

//bit length - table 6.28 pg71
#define nbitQueryRep	        4
#define nbitACK                 18
#define nbitQUERY               22
#define nbitQueryAdjust         9
#define nbitSELECT              44
#define nbitReqRN               40
#define nbitCHALLENGE           48

#define nbitReplyQuery          16
#define nbitReplyQueryRep       16
#define nbitReplyQueryAdjust    16
#define nbitACKReply            496  // (range [21;33328], with XPC=464,  w/o XPC=496bit, however max to 528bit
#define nbitReqRNReply          32
#define nbitRespond		        16

#define nbitAuth        64      // 56 + CSI-message + CSI-message length

#define nbitIXOR		139		// 64 + 75
#define nbitTXOR		121		// 57 + 64

#define nbitIPRESENT	112		// 64 + 48
#define nbitTPRESENT	121		// 57 + 64

#define nbitICRYPTO1a	72		// 64 + 8
#define nbitTCRYPTO1a	465		// 57 + 16 + 8(49)
#define nbitICRYPTO1b	112		// 64 + 8  + 8(5)
#define nbitTCRYPTO1b	373		// 57 + 4  + 8(39)

#define nbitIAES1		160		// 64 + 96
#define nbitTAES1		185		// 57 + 128

#define nbitIAES2		184		// 64 + 120
#define nbitTAES2		185		// 57 + 128

//QueryAdjust
#define UPq				6
#define DOWNq			3
#define UNCHANGE		0

//CmdListID
#define cmdACCESS       300
#define cmdAUTH         301
#define cmdKILL         302
#define cmdCHALL        303
//#define cmdNAK          304

//CSI value
#define AES128ECB       400
#define AES128CBC       401
#define PRESENT80       402     //2
#define ECCDH           403
#define GRAIN128A       404
#define AES_OFB         405
#define XOR             406     //1
#define ECDSA_ECDH      407
#define GPSCCR		    408
#define GPSNTS		    409
#define RAMON           410
#define NOAUTH			499

//XOR
#define XOR_On          0x5555555555555555
#define XOR_PSK         0xd4f625e4122688af

// AES128 Key length in bytes [128 bit]
#define KEYLEN 16 // The number of columns comprising a state in AES. This is a constant in AES. Value=4
#define Nb 4 // The number of 32 bit words in a key.
#define Nk 4 // The number of rounds in AES Cipher.
#define Nr 10
#define CBC_BLOCKSIZE 16

#define tailleZ         5
#define tailleS         24
#define tailleR         39
#define tailleY         39
#define tailleSZ        tailleZ + tailleS
#define sizeEPC          12      //bytes (96bits)

// state - array holding the intermediate results during decryption.
typedef int state_t[4][4];

#define overhEPC        1
#define overhHandle     2
#define overhResAES1    3

#define displayCollision 1
// overheadRTR = (2*preambleDuration) + ((headerBitLength+nbitReqRN)/bitrate) + ((headerBitLength+nbitReqRNReply)/bitrate);
// overheadRT_ACK      = preambleDuration + (( headerBitLength + nbitACK        ) /bitrate);
// overheadTR_EPC      = preambleDuration + (( headerBitLength + nbitACKReply   ) /bitrate);
// overheadRT_ReqRN    = preambleDuration + (( headerBitLength + nbitReqRN      ) /bitrate);
// overheadTR_Handle   = preambleDuration + (( headerBitLength + nbitReqRNReply ) /bitrate);
// overheadRT_AuthAES1 = preambleDuration + (( headerBitLength + nbitIAES1      ) /bitrate);
// overheadTR_RespAES1 = preambleDuration + (( headerBitLength + nbitTAES1      ) /bitrate);
// overheadXchange1    = overheadRT_ACK        + overheadTR_EPC;
// overheadXchange2    = overheadRT_ReqRN      + overheadTR_Handle;
// overheadXchange3    = overheadRT_AuthAES1   + overheadTR_RespAES1;



