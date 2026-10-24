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

// Function: caseD_7
// Address: 0x12cfd0 - 0x12d010
void caseD_7_0x12cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x12cfd0");
#endif

    switch (ctx->pc) {
        case 0x12cfe4u: goto label_12cfe4;
        case 0x12d008u: goto label_12d008;
        default: break;
    }

    ctx->pc = 0x12cfd0u;

    // 0x12cfd0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cfd4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12cfd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12cfd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12cfd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12cfdc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12CFDCu;
    SET_GPR_U32(ctx, 31, 0x12CFE4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12CFDCu, 0x12CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFE4u;
label_12cfe4:
    // 0x12cfe4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cfe8: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12cfec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CFECu;
    {
        const bool branch_taken_0x12cfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cfec) {
            ctx->pc = 0x12D010u;
            return;
        }
    }
    ctx->pc = 0x12CFF4u;
    // 0x12cff4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cff8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cffc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12d000: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12D000u;
    SET_GPR_U32(ctx, 31, 0x12D008u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12D000u, 0x12D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D008u;
label_12d008:
    // 0x12d008: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12D008u;
    {
        const bool branch_taken_0x12d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d008) {
            ctx->pc = 0x12D020u;
            return;
        }
    }
    ctx->pc = 0x12D010u;
}
