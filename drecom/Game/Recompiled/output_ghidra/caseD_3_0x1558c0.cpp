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

// Function: caseD_3
// Address: 0x1558c0 - 0x155918
void caseD_3_0x1558c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1558c0");
#endif

    switch (ctx->pc) {
        case 0x1558d4u: goto label_1558d4;
        default: break;
    }

    ctx->pc = 0x1558c0u;

    // 0x1558c0: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x1558c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x1558c4: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x1558c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x1558c8: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x1558cc: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x1558CCu;
    SET_GPR_U32(ctx, 31, 0x1558D4u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x1558CCu, 0x1558D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558D4u;
label_1558d4:
    // 0x1558d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1558d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1558d8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558dc: 0xa06402d0  sb          $a0, 0x2D0($v1)
    ctx->pc = 0x1558dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 4));
    // 0x1558e0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558e4: 0xa0600b40  sb          $zero, 0xB40($v1)
    ctx->pc = 0x1558e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558e8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558ec: 0xa0600bd0  sb          $zero, 0xBD0($v1)
    ctx->pc = 0x1558ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558f0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558f4: 0xa0600c60  sb          $zero, 0xC60($v1)
    ctx->pc = 0x1558f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558f8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558fc: 0xa0600cf0  sb          $zero, 0xCF0($v1)
    ctx->pc = 0x1558fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 0));
    // 0x155900: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155904: 0xa0600d80  sb          $zero, 0xD80($v1)
    ctx->pc = 0x155904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 0));
    // 0x155908: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15590c: 0xa0600e10  sb          $zero, 0xE10($v1)
    ctx->pc = 0x15590cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 0));
    // 0x155910: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x155910u;
    {
        const bool branch_taken_0x155910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155910) {
            ctx->pc = 0x155A40u;
            return;
        }
    }
    ctx->pc = 0x155918u;
}
