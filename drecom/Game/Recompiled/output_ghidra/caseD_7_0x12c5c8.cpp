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
// Address: 0x12c5c8 - 0x12c608
void caseD_7_0x12c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x12c5c8");
#endif

    switch (ctx->pc) {
        case 0x12c5dcu: goto label_12c5dc;
        case 0x12c600u: goto label_12c600;
        default: break;
    }

    ctx->pc = 0x12c5c8u;

    // 0x12c5c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c5cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c5ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c5d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c5d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12C5D4u;
    SET_GPR_U32(ctx, 31, 0x12C5DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C5D4u, 0x12C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5DCu;
label_12c5dc:
    // 0x12c5dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c5e0: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x12c5e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12c5e4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C5E4u;
    {
        const bool branch_taken_0x12c5e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c5e4) {
            ctx->pc = 0x12C608u;
            return;
        }
    }
    ctx->pc = 0x12C5ECu;
    // 0x12c5ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c5f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c5f4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c5f8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12C5F8u;
    SET_GPR_U32(ctx, 31, 0x12C600u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C5F8u, 0x12C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C600u;
label_12c600:
    // 0x12c600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C600u;
    {
        const bool branch_taken_0x12c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c600) {
            ctx->pc = 0x12C618u;
            return;
        }
    }
    ctx->pc = 0x12C608u;
}
