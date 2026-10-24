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

// Function: entry_00348700
// Address: 0x348700 - 0x348880
void entry_00348700_0x348700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348700_0x348700");
#endif

    switch (ctx->pc) {
        case 0x348710u: goto label_348710;
        case 0x348720u: goto label_348720;
        case 0x348734u: goto label_348734;
        case 0x348744u: goto label_348744;
        case 0x3487d4u: goto label_3487d4;
        case 0x34885cu: goto label_34885c;
        case 0x348864u: goto label_348864;
        default: break;
    }

    ctx->pc = 0x348700u;

    // 0x348700: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348704: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x348704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x348708: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x348708u;
    SET_GPR_U32(ctx, 31, 0x348710u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x348708u, 0x348710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348710u;
label_348710:
    // 0x348710: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348710u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348714: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348718: 0xc05cd10  jal         func_173440
    ctx->pc = 0x348718u;
    SET_GPR_U32(ctx, 31, 0x348720u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x348718u, 0x348720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348720u;
label_348720:
    // 0x348720: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348720u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348724: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348728: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34872c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34872Cu;
    SET_GPR_U32(ctx, 31, 0x348734u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34872Cu, 0x348734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348734u;
label_348734:
    // 0x348734: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x348734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348738: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34873c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34873Cu;
    SET_GPR_U32(ctx, 31, 0x348744u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34873Cu, 0x348744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348744u;
label_348744:
    // 0x348744: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348744u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348748: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34874c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34874cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348754: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x348754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x348758: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x348758u;
    {
        const bool branch_taken_0x348758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348758) {
            ctx->pc = 0x348938u;
            return;
        }
    }
    ctx->pc = 0x348760u;
    // 0x348760: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348764: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x348764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x348768: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x348768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x34876c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x34876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x348770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348774: 0x0  nop
    ctx->pc = 0x348774u;
    // NOP
    // 0x348778: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x348778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34877c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34877cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348780: 0x0  nop
    ctx->pc = 0x348780u;
    // NOP
    // 0x348784: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x348784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x348788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34878c: 0x0  nop
    ctx->pc = 0x34878cu;
    // NOP
    // 0x348790: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x348790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x348794: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34879c: 0x0  nop
    ctx->pc = 0x34879cu;
    // NOP
    // 0x3487a0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3487a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3487a4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3487a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x3487a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3487a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487ac: 0x0  nop
    ctx->pc = 0x3487acu;
    // NOP
    // 0x3487b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3487b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3487b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3487b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3487b8: 0xa7a30064  sh          $v1, 0x64($sp)
    ctx->pc = 0x3487b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x3487bc: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x3487bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x3487c0: 0xa3a00067  sb          $zero, 0x67($sp)
    ctx->pc = 0x3487c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x3487c4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3487c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3487c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3487c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3487cc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x3487CCu;
    SET_GPR_U32(ctx, 31, 0x3487D4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x3487CCu, 0x3487D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487D4u;
label_3487d4:
    // 0x3487d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3487d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3487d8: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3487D8u;
    {
        const bool branch_taken_0x3487d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3487d8) {
            ctx->pc = 0x348938u;
            return;
        }
    }
    ctx->pc = 0x3487E0u;
    // 0x3487e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3487e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487e4: 0x0  nop
    ctx->pc = 0x3487e4u;
    // NOP
    // 0x3487e8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3487e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3487ec: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3487ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x3487f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3487f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487f4: 0x0  nop
    ctx->pc = 0x3487f4u;
    // NOP
    // 0x3487f8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3487f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3487fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3487fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348800: 0x0  nop
    ctx->pc = 0x348800u;
    // NOP
    // 0x348804: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x348804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x348808: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34880c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34880cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348810: 0x0  nop
    ctx->pc = 0x348810u;
    // NOP
    // 0x348814: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x348814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x348818: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34881c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x34881cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x348820: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x348820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x348824: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x348824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348828: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x348828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x34882c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x348830: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x348830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x348834: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x348834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x348838: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x348838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34883c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x34883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348840: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x348840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x348844: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x348844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x348848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x348848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34884c: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x34884cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x348850: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x348850u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348854: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x348854u;
    SET_GPR_U32(ctx, 31, 0x34885Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x348854u, 0x34885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34885Cu;
label_34885c:
    // 0x34885c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34885Cu;
    SET_GPR_U32(ctx, 31, 0x348864u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34885Cu, 0x348864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348864u;
label_348864:
    // 0x348864: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348864u;
    {
        const bool branch_taken_0x348864 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x348864) {
            ctx->pc = 0x348880u;
            return;
        }
    }
    ctx->pc = 0x34886Cu;
    // 0x34886c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34886cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348870: 0x0  nop
    ctx->pc = 0x348870u;
    // NOP
    // 0x348874: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348878: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348878u;
    {
        const bool branch_taken_0x348878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348878) {
            ctx->pc = 0x34889Cu;
            return;
        }
    }
    ctx->pc = 0x348880u;
}
