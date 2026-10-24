#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00294510
// Address: 0x294510 - 0x2946a0
void entry_00294510_0x294510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294510_0x294510");
#endif

    ctx->pc = 0x294510u;

    // 0x294510: 0xae140078  sw          $s4, 0x78($s0)
    ctx->pc = 0x294510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 20));
    // 0x294514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294518: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x294518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x29451c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x29451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x294520: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x294520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x294524: 0x26150090  addiu       $s5, $s0, 0x90
    ctx->pc = 0x294524u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x294528: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x294528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x29452c: 0x261200e0  addiu       $s2, $s0, 0xE0
    ctx->pc = 0x29452cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x294530: 0x8e130078  lw          $s3, 0x78($s0)
    ctx->pc = 0x294530u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x294534: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x294534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x294538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29453c: 0x0  nop
    ctx->pc = 0x29453cu;
    // NOP
    // 0x294540: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x294540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x294544: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x294544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x294548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29454c: 0x0  nop
    ctx->pc = 0x29454cu;
    // NOP
    // 0x294550: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x294550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x294554: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29455c: 0x0  nop
    ctx->pc = 0x29455cu;
    // NOP
    // 0x294560: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x294560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x294564: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29456c: 0x0  nop
    ctx->pc = 0x29456cu;
    // NOP
    // 0x294570: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x294570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x294574: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x294574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x294578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29457c: 0x0  nop
    ctx->pc = 0x29457cu;
    // NOP
    // 0x294580: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294584: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29458c: 0x0  nop
    ctx->pc = 0x29458cu;
    // NOP
    // 0x294590: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x294590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x294594: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29459c: 0x0  nop
    ctx->pc = 0x29459cu;
    // NOP
    // 0x2945a0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2945a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2945a4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2945a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2945a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2945a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2945ac: 0x0  nop
    ctx->pc = 0x2945acu;
    // NOP
    // 0x2945b0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2945b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2945b4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2945b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2945b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2945b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2945bc: 0x0  nop
    ctx->pc = 0x2945bcu;
    // NOP
    // 0x2945c0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2945c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2945c4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2945c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2945c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2945cc: 0x0  nop
    ctx->pc = 0x2945ccu;
    // NOP
    // 0x2945d0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2945d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2945d4: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2945d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2945d8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2945d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2945dc: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2945dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2945e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2945e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2945e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2945e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945e8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2945e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2945ec: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2945ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2945f0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2945f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2945f4: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2945f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2945f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2945f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2945fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2945fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294600: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x294600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x294604: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294608: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29460c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294614: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294618: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x294618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x29461c: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x29461cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294620: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294624: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29462c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294630: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x294630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x294634: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294638: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29463c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294644: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x294644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294648: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x294648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x29464c: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x29464cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294650: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294654: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294658: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29465c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x29465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294660: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x294660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x294664: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294668: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29466c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294674: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x294674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294678: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x294678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x29467c: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x29467cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294680: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294684: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29468c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x29468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294690: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x294690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x294694: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x294694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x294698: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x294698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29469c: 0x0  nop
    ctx->pc = 0x29469cu;
    // NOP
    ctx->pc = 0x2946a0u;
}
