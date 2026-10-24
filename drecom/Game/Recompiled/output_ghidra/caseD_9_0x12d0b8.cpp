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

// Function: caseD_9
// Address: 0x12d0b8 - 0x12d100
void caseD_9_0x12d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x12d0b8");
#endif

    switch (ctx->pc) {
        case 0x12d0ccu: goto label_12d0cc;
        case 0x12d0f4u: goto label_12d0f4;
        default: break;
    }

    ctx->pc = 0x12d0b8u;

    // 0x12d0b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d0bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d0bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d0c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d0c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d0c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D0C4u;
    SET_GPR_U32(ctx, 31, 0x12D0CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D0C4u, 0x12D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0CCu;
label_12d0cc:
    // 0x12d0cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d0d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d0d4: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x12d0d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x12d0d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D0D8u;
    {
        const bool branch_taken_0x12d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d0d8) {
            ctx->pc = 0x12D100u;
            return;
        }
    }
    ctx->pc = 0x12D0E0u;
    // 0x12d0e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d0e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d0e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12d0ec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12D0ECu;
    SET_GPR_U32(ctx, 31, 0x12D0F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12D0ECu, 0x12D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0F4u;
label_12d0f4:
    // 0x12d0f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12d0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d0f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12D0F8u;
    {
        const bool branch_taken_0x12d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d0f8) {
            ctx->pc = 0x12D110u;
            return;
        }
    }
    ctx->pc = 0x12D100u;
}
