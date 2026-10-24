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

// Function: entry_00197808
// Address: 0x197808 - 0x1978a8
void entry_00197808_0x197808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197808_0x197808");
#endif

    switch (ctx->pc) {
        case 0x19784cu: goto label_19784c;
        case 0x197898u: goto label_197898;
        default: break;
    }

    ctx->pc = 0x197808u;

    // 0x197808: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19780c: 0x94850094  lhu         $a1, 0x94($a0)
    ctx->pc = 0x19780cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x197810: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x197810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x197814: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197818: 0x14e80023  bne         $a3, $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x197818u;
    {
        const bool branch_taken_0x197818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x197818) {
            ctx->pc = 0x1978A8u;
            return;
        }
    }
    ctx->pc = 0x197820u;
    // 0x197820: 0x3c073e19  lui         $a3, 0x3E19
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15897 << 16));
    // 0x197824: 0x34e2999a  ori         $v0, $a3, 0x999A
    ctx->pc = 0x197824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x197828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19782c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197830: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197834: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19783c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197840: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197840u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197844: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197844u;
    SET_GPR_U32(ctx, 31, 0x19784Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197844u, 0x19784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19784Cu;
label_19784c:
    // 0x19784c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x19784cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197850: 0x3c073f59  lui         $a3, 0x3F59
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16217 << 16));
    // 0x197854: 0x34e2999a  ori         $v0, $a3, 0x999A
    ctx->pc = 0x197854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x197858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19785c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197860: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x197860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197864: 0x8c8508c0  lw          $a1, 0x8C0($a0)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    // 0x197868: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x197868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x19786c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x197870: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x197870u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197874: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x197874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197878: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x197878u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x19787c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197880: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197884: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19788c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19788cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197890: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x197890u;
    SET_GPR_U32(ctx, 31, 0x197898u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x197890u, 0x197898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197898u;
label_197898:
    // 0x197898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19789c: 0x94850094  lhu         $a1, 0x94($a0)
    ctx->pc = 0x19789cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1978a0: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1978a4: 0xa4870094  sh          $a3, 0x94($a0)
    ctx->pc = 0x1978a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1978a8u;
}
