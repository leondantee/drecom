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

// Function: entry_00341834
// Address: 0x341834 - 0x34191c
void entry_00341834_0x341834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341834_0x341834");
#endif

    switch (ctx->pc) {
        case 0x3418a4u: goto label_3418a4;
        case 0x3418b0u: goto label_3418b0;
        case 0x3418e0u: goto label_3418e0;
        case 0x3418ecu: goto label_3418ec;
        default: break;
    }

    ctx->pc = 0x341834u;

    // 0x341834: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341838: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34183c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x34183cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x341840: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x341840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x341844: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x341844u;
    {
        const bool branch_taken_0x341844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341844) {
            ctx->pc = 0x341924u;
            return;
        }
    }
    ctx->pc = 0x34184Cu;
    // 0x34184c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x341850: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341854: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x341854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x341858: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34185c: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x34185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341860: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x341860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x341864: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341868: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x341868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34186c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x34186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x341870: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341874: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x341874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341878: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x341878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x34187c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341884: 0x0  nop
    ctx->pc = 0x341884u;
    // NOP
    // 0x341888: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x341888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x34188c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341890: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341894: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x341894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x341898: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341898u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34189c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34189Cu;
    SET_GPR_U32(ctx, 31, 0x3418A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34189Cu, 0x3418A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418A4u;
label_3418a4:
    // 0x3418a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3418a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3418a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3418A8u;
    SET_GPR_U32(ctx, 31, 0x3418B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3418A8u, 0x3418B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418B0u;
label_3418b0:
    // 0x3418b0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3418b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3418b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3418b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3418b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3418b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3418bc: 0x0  nop
    ctx->pc = 0x3418bcu;
    // NOP
    // 0x3418c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3418c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3418c4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x3418c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3418c8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3418c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3418cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3418ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3418d0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3418d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3418d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3418d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3418d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3418D8u;
    SET_GPR_U32(ctx, 31, 0x3418E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3418D8u, 0x3418E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418E0u;
label_3418e0:
    // 0x3418e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3418e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3418e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3418E4u;
    SET_GPR_U32(ctx, 31, 0x3418ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3418E4u, 0x3418ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418ECu;
label_3418ec:
    // 0x3418ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3418ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3418f0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3418f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3418f4: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x3418f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x3418f8: 0x8483006a  lh          $v1, 0x6A($a0)
    ctx->pc = 0x3418f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3418fc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3418fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x341900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x341904: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x341904u;
    {
        const bool branch_taken_0x341904 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x341904) {
            ctx->pc = 0x34191Cu;
            return;
        }
    }
    ctx->pc = 0x34190Cu;
    // 0x34190c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341910: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x341910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341914: 0x24c31330  addiu       $v1, $a2, 0x1330
    ctx->pc = 0x341914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x341918: 0xa464006a  sh          $a0, 0x6A($v1)
    ctx->pc = 0x341918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34191cu;
}
