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

// Function: caseD_1
// Address: 0x155868 - 0x1558c0
void caseD_1_0x155868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x155868");
#endif

    switch (ctx->pc) {
        case 0x15587cu: goto label_15587c;
        default: break;
    }

    ctx->pc = 0x155868u;

    // 0x155868: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x15586c: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x155870: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x155874: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x155874u;
    SET_GPR_U32(ctx, 31, 0x15587Cu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155874u, 0x15587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15587Cu;
label_15587c:
    // 0x15587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155880: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155884: 0xa06402d0  sb          $a0, 0x2D0($v1)
    ctx->pc = 0x155884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 4));
    // 0x155888: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15588c: 0xa0600b40  sb          $zero, 0xB40($v1)
    ctx->pc = 0x15588cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 0));
    // 0x155890: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155894: 0xa0600bd0  sb          $zero, 0xBD0($v1)
    ctx->pc = 0x155894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 0));
    // 0x155898: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15589c: 0xa0600c60  sb          $zero, 0xC60($v1)
    ctx->pc = 0x15589cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558a0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558a4: 0xa0600cf0  sb          $zero, 0xCF0($v1)
    ctx->pc = 0x1558a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558a8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558ac: 0xa0600d80  sb          $zero, 0xD80($v1)
    ctx->pc = 0x1558acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558b0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1558b4: 0xa0600e10  sb          $zero, 0xE10($v1)
    ctx->pc = 0x1558b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 0));
    // 0x1558b8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1558B8u;
    {
        const bool branch_taken_0x1558b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558b8) {
            ctx->pc = 0x155A40u;
            return;
        }
    }
    ctx->pc = 0x1558C0u;
}
