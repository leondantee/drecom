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

// Function: entry_001f036c
// Address: 0x1f036c - 0x1f04f8
void entry_001f036c_0x1f036c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f036c_0x1f036c");
#endif

    switch (ctx->pc) {
        case 0x1f0384u: goto label_1f0384;
        case 0x1f039cu: goto label_1f039c;
        case 0x1f03a8u: goto label_1f03a8;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d8u: goto label_1f04d8;
        default: break;
    }

    ctx->pc = 0x1f036cu;

    // 0x1f036c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0370: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f0370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0374: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0378: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f0378u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f037c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F037Cu;
    SET_GPR_U32(ctx, 31, 0x1F0384u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F037Cu, 0x1F0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0384u;
label_1f0384:
    // 0x1f0384: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0388: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f0388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f038c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0390: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0394: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F0394u;
    SET_GPR_U32(ctx, 31, 0x1F039Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F0394u, 0x1F039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F039Cu;
label_1f039c:
    // 0x1f039c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f03a0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F03A0u;
    SET_GPR_U32(ctx, 31, 0x1F03A8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F03A0u, 0x1F03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03A8u;
label_1f03a8:
    // 0x1f03a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f03ac: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1f03acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1f03b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f03b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f03b4: 0x30650080  andi        $a1, $v1, 0x80
    ctx->pc = 0x1f03b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f03b8: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1F03B8u;
    {
        const bool branch_taken_0x1f03b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f03b8) {
            ctx->pc = 0x1F05C4u;
            return;
        }
    }
    ctx->pc = 0x1F03C0u;
    // 0x1f03c0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f03c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f03c4: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1f03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1f03c8: 0x24440880  addiu       $a0, $v0, 0x880
    ctx->pc = 0x1f03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f03cc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1f03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1f03d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f03d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03d4: 0x0  nop
    ctx->pc = 0x1f03d4u;
    // NOP
    // 0x1f03d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f03d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f03dc: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x1f03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x1f03e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f03e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03e4: 0x0  nop
    ctx->pc = 0x1f03e4u;
    // NOP
    // 0x1f03e8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f03e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f03ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f03ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03f0: 0x0  nop
    ctx->pc = 0x1f03f0u;
    // NOP
    // 0x1f03f4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f03f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f03f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f03fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f03fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0400: 0x0  nop
    ctx->pc = 0x1f0400u;
    // NOP
    // 0x1f0404: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f0404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f0408: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1f0408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1f040c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f040cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0410: 0x0  nop
    ctx->pc = 0x1f0410u;
    // NOP
    // 0x1f0414: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f0414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f0418: 0xa7a00084  sh          $zero, 0x84($sp)
    ctx->pc = 0x1f0418u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f041c: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x1f041cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0420: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x1f0420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0424: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0428: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1f0428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f042c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f0430: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F0430u;
    SET_GPR_U32(ctx, 31, 0x1F0438u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F0430u, 0x1F0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0438u;
label_1f0438:
    // 0x1f0438: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F0438u;
    {
        const bool branch_taken_0x1f0438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0438) {
            ctx->pc = 0x1F05C4u;
            return;
        }
    }
    ctx->pc = 0x1F0440u;
    // 0x1f0440: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0444: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f0444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f0448: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F0448u;
    {
        const bool branch_taken_0x1f0448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0448) {
            ctx->pc = 0x1F05C4u;
            return;
        }
    }
    ctx->pc = 0x1F0450u;
    // 0x1f0450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0454: 0x0  nop
    ctx->pc = 0x1f0454u;
    // NOP
    // 0x1f0458: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f0458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f045c: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1f0460: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0460u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0464: 0x0  nop
    ctx->pc = 0x1f0464u;
    // NOP
    // 0x1f0468: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f0468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f046c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f046cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0470: 0x0  nop
    ctx->pc = 0x1f0470u;
    // NOP
    // 0x1f0474: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f0474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f0478: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f0478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1f047c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f047cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0480: 0x0  nop
    ctx->pc = 0x1f0480u;
    // NOP
    // 0x1f0484: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f0484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f0488: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f048c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1f048cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f0490: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f0490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f0494: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f0494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0498: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f0498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f049c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1f049cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f04a0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1f04a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f04a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f04a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f04a8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f04ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f04acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f04b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f04b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f04b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f04b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f04b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f04bc: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f04bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f04c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f04c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f04c4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F04C4u;
    SET_GPR_U32(ctx, 31, 0x1F04CCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F04C4u, 0x1F04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04CCu;
label_1f04cc:
    // 0x1f04cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f04ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f04d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F04D0u;
    SET_GPR_U32(ctx, 31, 0x1F04D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F04D0u, 0x1F04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04D8u;
label_1f04d8:
    // 0x1f04d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f04d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f04dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F04DCu;
    {
        const bool branch_taken_0x1f04dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f04dc) {
            ctx->pc = 0x1F04F8u;
            return;
        }
    }
    ctx->pc = 0x1F04E4u;
    // 0x1f04e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f04e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f04e8: 0x0  nop
    ctx->pc = 0x1f04e8u;
    // NOP
    // 0x1f04ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f04ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f04f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F04F0u;
    {
        const bool branch_taken_0x1f04f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f04f0) {
            ctx->pc = 0x1F0514u;
            return;
        }
    }
    ctx->pc = 0x1F04F8u;
}
