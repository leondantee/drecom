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

// Function: caseD_5
// Address: 0x155984 - 0x1559dc
void caseD_5_0x155984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x155984");
#endif

    switch (ctx->pc) {
        case 0x155998u: goto label_155998;
        default: break;
    }

    ctx->pc = 0x155984u;

    // 0x155984: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x155988: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x155988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x15598c: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x15598cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x155990: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x155990u;
    SET_GPR_U32(ctx, 31, 0x155998u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x155990u, 0x155998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155998u;
label_155998:
    // 0x155998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15599c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559a0: 0xa06402d0  sb          $a0, 0x2D0($v1)
    ctx->pc = 0x1559a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 4));
    // 0x1559a4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559a8: 0xa0600b40  sb          $zero, 0xB40($v1)
    ctx->pc = 0x1559a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559ac: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559b0: 0xa0600bd0  sb          $zero, 0xBD0($v1)
    ctx->pc = 0x1559b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559b4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559b8: 0xa0600c60  sb          $zero, 0xC60($v1)
    ctx->pc = 0x1559b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559bc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559c0: 0xa0600cf0  sb          $zero, 0xCF0($v1)
    ctx->pc = 0x1559c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559c4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559c8: 0xa0600d80  sb          $zero, 0xD80($v1)
    ctx->pc = 0x1559c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559cc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559d0: 0xa0600e10  sb          $zero, 0xE10($v1)
    ctx->pc = 0x1559d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1559D4u;
    {
        const bool branch_taken_0x1559d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559d4) {
            ctx->pc = 0x155A40u;
            return;
        }
    }
    ctx->pc = 0x1559DCu;
}
