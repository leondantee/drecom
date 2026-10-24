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

// Function: entry_0023e530
// Address: 0x23e530 - 0x23e6e4
void entry_0023e530_0x23e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e530_0x23e530");
#endif

    switch (ctx->pc) {
        case 0x23e540u: goto label_23e540;
        case 0x23e54cu: goto label_23e54c;
        case 0x23e63cu: goto label_23e63c;
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6c8u: goto label_23e6c8;
        default: break;
    }

    ctx->pc = 0x23e530u;

    // 0x23e530: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e534: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23e538: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23E538u;
    SET_GPR_U32(ctx, 31, 0x23E540u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23E538u, 0x23E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E540u;
label_23e540:
    // 0x23e540: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e544: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23E544u;
    SET_GPR_U32(ctx, 31, 0x23E54Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23E544u, 0x23E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E54Cu;
label_23e54c:
    // 0x23e54c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x23e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x23e550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e554: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e55c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23e55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23e560: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e564: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23e564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23e568: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23e568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23e56c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23e570: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x23E570u;
    {
        const bool branch_taken_0x23e570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e570) {
            ctx->pc = 0x23E794u;
            return;
        }
    }
    ctx->pc = 0x23E578u;
    // 0x23e578: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23e57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e580: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e584: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e588: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23e588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23e58c: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x23e590: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e598: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e59c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e5a0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23e5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23e5a4: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23e5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e5b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e5b8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23e5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23e5bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e5c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e5c4: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23e5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e5c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e5cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23e5d0: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23e5d4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x23e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x23e5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5dc: 0x0  nop
    ctx->pc = 0x23e5dcu;
    // NOP
    // 0x23e5e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23e5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23e5e4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x23e5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5ec: 0x0  nop
    ctx->pc = 0x23e5ecu;
    // NOP
    // 0x23e5f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23e5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23e5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e5f8: 0x0  nop
    ctx->pc = 0x23e5f8u;
    // NOP
    // 0x23e5fc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23e5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23e600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23e604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e608: 0x0  nop
    ctx->pc = 0x23e608u;
    // NOP
    // 0x23e60c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23e60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23e610: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23e610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23e614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e618: 0x0  nop
    ctx->pc = 0x23e618u;
    // NOP
    // 0x23e61c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23e61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23e620: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x23e620u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x23e624: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x23e624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e628: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x23e628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e62c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e630: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e634: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23E634u;
    SET_GPR_U32(ctx, 31, 0x23E63Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23E634u, 0x23E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E63Cu;
label_23e63c:
    // 0x23e63c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23E63Cu;
    {
        const bool branch_taken_0x23e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e63c) {
            ctx->pc = 0x23E794u;
            return;
        }
    }
    ctx->pc = 0x23E644u;
    // 0x23e644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e648: 0x0  nop
    ctx->pc = 0x23e648u;
    // NOP
    // 0x23e64c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23e64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23e650: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x23e654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e658: 0x0  nop
    ctx->pc = 0x23e658u;
    // NOP
    // 0x23e65c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23e65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23e660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e664: 0x0  nop
    ctx->pc = 0x23e664u;
    // NOP
    // 0x23e668: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23e668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23e66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23e670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e674: 0x0  nop
    ctx->pc = 0x23e674u;
    // NOP
    // 0x23e678: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23e67c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e684: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23e688: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23e688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23e68c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23e690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23e694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e698: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23e69c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23e69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23e6a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e6a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23e6a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23e6ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23e6acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e6b0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23e6b4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23e6b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23e6b8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23E6B8u;
    SET_GPR_U32(ctx, 31, 0x23E6C0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23E6B8u, 0x23E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6C0u;
label_23e6c0:
    // 0x23e6c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E6C0u;
    SET_GPR_U32(ctx, 31, 0x23E6C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E6C0u, 0x23E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6C8u;
label_23e6c8:
    // 0x23e6c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E6C8u;
    {
        const bool branch_taken_0x23e6c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23e6c8) {
            ctx->pc = 0x23E6E4u;
            return;
        }
    }
    ctx->pc = 0x23E6D0u;
    // 0x23e6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e6d4: 0x0  nop
    ctx->pc = 0x23e6d4u;
    // NOP
    // 0x23e6d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23e6d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23E6DCu;
    {
        const bool branch_taken_0x23e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e6dc) {
            ctx->pc = 0x23E700u;
            return;
        }
    }
    ctx->pc = 0x23E6E4u;
}
